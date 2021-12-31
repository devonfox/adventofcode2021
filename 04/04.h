#include <iostream>
#include <vector>
#include <fstream>

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
        int run();
        void test_input();
        void display_boards();


    private: 
        void mark(int marked);
        bool victory_check(int &score, int &called);
        vector<board> data;
        vector<int> input;
};

