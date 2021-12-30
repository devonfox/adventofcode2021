#include <iostream>
#include <fstream>
#include <cstring>

const int MAX = 100;

using namespace std;

int main()
{
    ifstream infile("input_02.txt");
    int count = 0;
    string input;
    int amount = 0;

    int horizontal = 0;
    int depth = 0;
    int aim = 0;

    int finalmult = 0;

    while(!infile.eof())
    {
        infile >> input;
        infile.ignore(100, ' ');
        infile >> amount;
        //cout << amount << endl;

        if(input.compare("forward") == 0)
        {
            horizontal += amount;
            depth += (aim * amount);
        }
        else if(input.compare("up") == 0)
        {
            aim -= amount;
        }
        else if(input.compare("down") == 0)
        {
            aim += amount;
        }

        count++;
    }
    cout << "Horizontal: " << horizontal << endl;
    cout << "Depth: " << depth << endl;
    cout << "Aim: " << aim << endl;
    cout << "Mult: " << horizontal * depth << endl;
    return 0;
}