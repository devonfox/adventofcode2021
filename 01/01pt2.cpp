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
    int current = 0;
    int num[3] = {0,0,0};
    int prev = 0;
    int sum = 0;
    while(!in.eof())
    {   
        if(counter == 0)
        {
            for(int i = 0; i < 3; i++)
            {
                in >> current;
                num[i] = current;
                counter++;
            }
            sum = num[0] + num[1] + num[2];
            prev = sum;
        }
        else
        {
            in >> current;
            num[counter % 3] = current;
            sum = num[0] + num[1] + num[2];
            if(sum > prev)
            {
                increase++;
            }
            prev = sum;
        }
        counter++;
    }

    std::cout << "Count: " << increase << endl;

    return 0;
}