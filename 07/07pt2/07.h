#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct crab
{
    int position;
    crab(int newpos)
    {
        position = newpos;
    }
};

class swarm
{
    public:
        swarm();
        int run();
        void display();

    private:
        vector<crab> group;
        int maximum;
        int minimum;
};