#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string filename = "input_01.txt";

int main()
{
    ifstream in;
    in.open(filename);

    int counter = 0;
    int increase = 0;
    int num = 0;
    int prev = 0;
    while(!in.eof())
    {
        in >> num;
        if(counter == 0)
        {
            prev = num;
        }
        else
        {
            if(prev<num)
            {
                increase++;
            }
            prev = num;
        }
        counter++;
    }

    std::cout << "Count: " << increase << endl;

    return 0;
}