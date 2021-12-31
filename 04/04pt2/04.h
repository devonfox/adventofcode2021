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
        bool won = false;
};

class game
{
    public:
        game();
        int run();
        void test_input();
        void display_boards();


    private: 
        int find_score(int index);
        void mark(int marked);
        bool victory_check(int &score);
        int last_board();
        vector<board> data;
        vector<int> input;
};

