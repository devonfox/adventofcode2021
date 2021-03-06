#include "04.h"

game::game()
{
    // read in data to input list
    ifstream in("input_04.txt");
    int num = 0;
    // sample input 
    //input = {7,4,9,5,11,17,23,2,0,14,21,24,10,16,13,6,15,25,12,22,18,20,8,19,3,26,1};

    // actual input
      
    input = {92,12,94,64,14,4,99,71,47,59,37,73,29,7,16,32,40,53,30,76,74,39,70,88,
    55,45,17,0,24,65,35,20,63,68,89,84,33,66,18,50,38,10,83,75,67,42,3,56,82,34,90,
    46,87,52,49,2,21,62,93,86,25,78,19,57,77,26,81,15,23,31,54,48,98,11,91,85,60,72,
    8,69,6,22,97,96,80,95,58,36,44,1,51,43,9,61,41,79,5,27,28,13};
    

    //cout << input.size() << endl;

    // then read in board data

    while(!in.eof())
    {
        board incoming;

        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                in >> num;

                incoming.player[i][j].value = num;
                //cout << num << endl;
            }
        }
        data.push_back(incoming);
    }
}

void game::mark(int marked)
{
    for(int x = 0; x < data.size(); x++)
    {
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(data[x].player[i][j].value == marked)
                    data[x].player[i][j].marked = true;
            }
        }
    }
}

int game::run()
{
    int score = 0;
    int called = 0;
    if(data.size() == 0 || input.size() == 0)
        return 0;
    
    for(int y = 0; y < input.size(); y++)
    {
        mark(input[y]);
        called = input[y];
        if(victory_check(score, input[y]))    
            break;
    }
    return score * called;

}

bool game::victory_check(int &score, int &called)
{
    bool bingo = false;

    //horizontal check
    for(int x = 0; x < data.size(); x++)
    {
        for(int i = 0; i < 5; i++)
        {
            if(
                data[x].player[i][0].marked &&
                data[x].player[i][1].marked &&
                data[x].player[i][2].marked &&
                data[x].player[i][3].marked &&
                data[x].player[i][4].marked
            )
            {
                bingo = true;
                cout << "Horiz Check" << endl;
                score = find_score(x);
                break;
            }
        }
    }

    //vertical check
    
    
    for(int x = 0; x < data.size(); x++)
    {            
        for(int j = 0; j < 5; j++)
        {
            if(
                data[x].player[0][j].marked &&
                data[x].player[1][j].marked &&
                data[x].player[2][j].marked &&
                data[x].player[3][j].marked &&
                data[x].player[4][j].marked
            )
            {
                bingo = true;
                cout << "Vert check" << endl;
                score = find_score(x);
                break;
            }
        }
    }
    

    return bingo;
}

void game::test_input()
{
    cout << endl;
    for(int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void game::display_boards()
{
    for(int x = 0; x < data.size(); x++)
    {
        for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    if(data[x].player[i][j].value < 10)
                        cout << " " << data[x].player[i][j].value << " ";
                    else
                        cout << data[x].player[i][j].value << " ";
                }
                cout << endl;
            }
    cout << endl;
    }
    cout << endl;
}

int game::find_score(int index)
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(!data[index].player[i][j].marked)
            {
                sum += data[index].player[i][j].value;
            }
        }
    }
    return sum;
}
