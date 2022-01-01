#include "06.h"

school::school()
{
    int input = 0;
    ifstream in("input_06_sample.txt");

    while(!in.eof())
    {
        in >> input;

        lanternfish newfish(input);
        seafloor.push_back(newfish);
    }
}

int school::run()
{

}

void school::print()
{

}

