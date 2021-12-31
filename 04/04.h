#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>
#include <cctype>
#include <iomanip>

using namespace std;

struct spot
{
    bool marked = false;
    int value;
};

struct board 
{
        spot player[5][5];
};

class game
{
    public:
        game();
        void run();
        void test_input();
        void display_boards();


    private: 
        bool victory_check();
        vector<board> data;
        vector<int> input;
};

