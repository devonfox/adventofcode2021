#include "06.h"

school::school()
{
    int input = 0;
    ifstream in("input_06_sample.txt");

    while(!in.eof())
    {
        in >> input;
        in.ignore();
        lanternfish newfish(input);
        seafloor.push_back(newfish);
    }
}

int school::run()
{
    int day = 0;

    while(day <= 18)
    {
        int size = seafloor.size();
        if(day == 0)
        {
            cout << "Initial State: ";
        }
        else if(day == 1)
        {
            cout << "After  1 day:  ";
        }
        else if(day < 10)
        {
            cout << "After  " << day << " days: ";
        }
        else
        {
            cout << "After " << day << " days: ";
        }
        for(int i = 0; i < size; i++)
        {
            print(i);
            if(seafloor[i].timer == 0)
            {
                seafloor[i].timer = 6;
                lanternfish newfish(8);
                seafloor.push_back(newfish);
                size++;
            }
            else
            {
                seafloor[i].timer -= 1;
            }
        }
        cout << endl;
        day++;
    }

    return seafloor.size();
}

void school::print(int index)
{
    int size = seafloor.size();
    if(index == size-1)
        cout << seafloor[index].timer;
    else
        cout << seafloor[index].timer << ",";
}

