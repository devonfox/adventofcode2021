#include "06.h"

school::school()
{
    int input = 0;
    ifstream in("input_06.txt");

    for(int i = 0; i < 9; i++)
    {
        seafloor[i] = 0;
    }

    while(!in.eof())
    {
        in >> input;
        in.ignore();
        seafloor[input]++; 
    }
    //amount = seafloor.size();
}

int school::run()
{
    int day = 1;
 
    while(day <= 256)
    {
        cout << "Day: " << day << endl;
        
            if(seafloor[0] > 0)
        {
            seafloor[7] += seafloor[0];
        }
        rotate(seafloor+0, seafloor+1, seafloor+9);
        print();
        cout << endl;
        day++;
    }
    

    return 0;
}

void school::print()
{
    for(int i = 0; i < 9; i++)
    {
        cout << i << ": " << seafloor[i] << endl;
    }
    cout << endl;
}



long long school::get_amount()
{
    long long sum = 0;
    for(long long i = 0; i < 9; i++)
    {
        sum += seafloor[i];
    }
    return sum;
}

