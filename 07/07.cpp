#include "07.h"

swarm::swarm()
{
    ifstream in("input_07.txt");
    int input;
    while(!in.eof())
    {
        in >> input;
        in.ignore();
        crab newcrab(input);
        group.push_back(newcrab);
    }

    for(int x = 1; x < group.size(); x++)
    {
        //cout << "Crab " << x+1 << endl;
        if(x == 1)
        {
            minimum = min(group[x-1].position, group[x].position);
            maximum = max(group[x-1].position, group[x].position);   
        }
        else
        {
            minimum = min(minimum, group[x].position);
            maximum = max(maximum, group[x].position); 
        }
        //cout << "Max: " << maximum << endl;
        //cout << "Min: " << minimum << endl;
        //cout << endl;
    }
    
}

int swarm::run()
{
    int minfuel = group.size() * group.size() * group.size();

    int pos = 0;

    //display();

    for(int x = 0; x < group.size(); x++)
    {
        int currentfuel = 0;
        for(int y = 0; y < group.size(); y++)
        { 
            currentfuel += abs(group[y].position-x);
        }
        minfuel = min(minfuel, currentfuel);
    }


    return minfuel;
}

void swarm::display()
{
    for(int i = 0; i < group.size(); i++)
    {
        cout << "Crab " << i+1 << " - > Pos: " << group[i].position << endl;
    }
    cout << endl;
}