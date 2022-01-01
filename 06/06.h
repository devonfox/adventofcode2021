#include <iostream>
#include <fstream>
#include <vector>

// includes pt 1 and 2

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
        //long long get_amount();
    
    private:
        vector<lanternfish> seafloor;
        //long long amount;
}; 