#include "08.h"

display::display()
{
    ifstream in("input_08.txt");
    string input;
    string delimiter;

    while(!in.eof())
    {
        for(int i = 0; i < 10; i++)
        {
            in >> input;
        }
        in >> delimiter;
        for(int i = 0; i < 4; i++)
        {
            in >> input;
            output.push_back(input);
        }
    }

}

int display::decoder()
{
    int count = 0;
    for(int x = 0; x < output.size(); x++)
    {
        if(output[x].size() == 2) // 1
        {
            count++;
        }
        else if(output[x].size() == 4) // 4
        {
            count++;
        }
        else if(output[x].size() == 3) // 7
        {
            count++;
        }
        else if(output[x].size() == 7) // 8
        {
            count++;
        }
    }

    return count;

}

