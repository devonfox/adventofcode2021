#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct key
{
    string key;
    int value;
};

class display
{
    public:
        display();
        int decoder();
        int decoder(int index);
        void print();

    private:
        vector<vector<string>> output;
        // external vector is for each line
        // internal vector is for
};