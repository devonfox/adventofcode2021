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
        void print(int index);
    
    private:
        vector<lanternfish> seafloor;
}; 