#include "08.h"

display::display()
{
    ifstream in("input_08_sample.txt");
    string input;
    string delimiter;
    while(!in.eof())
    {
        vector<string> newvector;
        for(int i = 0; i < 10; i++)
        {
            in >> input;
            newvector.push_back(input);
        }
        in >> delimiter;
        for(int i = 0; i < 4; i++)
        {
            in >> input;
            newvector.push_back(input);
        }
        output.push_back(newvector);
    }
}

int display::decoder()
{
    int sum = 0;

    for(int x = 0; x < output.size(); x++)
    {
        sum += decoder(x);
    }
    return sum;
}

int display::decoder(int index)
{
    int count = 0;
    for(int x = 0; x < 10; x++)
    {
        count++;
        //cout << output[index][x] << " ";
    }

    for(int x = 10; x < 14; x++)
    {

    }
    return count;
}

void display::print()
{
    for(int i = 0; i < output.size(); i++)
    {
        for(int j = 0; j < output[i].size(); j++)
        {
            if(j == 10)
            {
               cout << "| ";
            }
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

