#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct lanternfish
{
    int timer;
    lanternfish(int time)
    {
        timer = time;
    }
};

class school
{
    public:
        school();
        int run();
        void print();
    
    private:
        vector<lanternfish> seafloor;
}; 