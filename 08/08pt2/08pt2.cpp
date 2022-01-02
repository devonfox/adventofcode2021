#include "08.h"

display::display()
{
    ifstream in("input_08_sample.txt");
    string input;
    string delimiter;

    while(!in.eof())
    {
        for(int i = 0; i < 10; i++)
        {
            in >> input;
            output[0].push_back(input);
        }
        in >> delimiter;
        for(int i = 0; i < 4; i++)
        {
            in >> input;
            output[1].push_back(input);
        }
    }

}

int display::run()
{

}

int display::decoder()
{
    

}

