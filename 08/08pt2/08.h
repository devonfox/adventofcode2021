#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class display
{
    public:
        display();
        int run();
        int decoder();

    private:
        vector<string> output[2];
        // index 0 is for parsing code
        // index 1 is for the final decoded output
};