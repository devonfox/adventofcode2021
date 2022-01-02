#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class display
{
    public:
        display();
        int decoder();

    private:
        vector<string> output;
};