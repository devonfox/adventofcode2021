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
    //amount = seafloor.size();
}

int school::run()
{
    int day = 0;

    while(day <= 80)
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
            if(day != 0)
            {
                
                if(seafloor[i].timer == 0)
                {
                    seafloor[i].timer = 6;

                    // need to change the ordering here
                    lanternfish newfish(9); 
                    //this is so dumb but it works
                    seafloor.push_back(newfish);
                    //amount += 1;
                    size++;
                }
                else
                {
                    seafloor[i].timer -= 1;
                }
            }
            //print(i);  //comment out for pt2
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

/*
long long school::get_amount()
{
    return amount;
}
*/
