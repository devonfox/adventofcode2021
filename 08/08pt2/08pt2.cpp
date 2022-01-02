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

int display::run()
{

}

int display::decoder()
{
    

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

