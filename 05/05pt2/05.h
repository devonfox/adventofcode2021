#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>
#include <cstring>

using namespace std;

// x1,y1 -> x2,y2

class graph
{
    public:
        graph();
        void lineitup(); // marking the matrix
        void print();
        int countitup(); //overlapping count

    private:
        int size = 1000; // example size is 10
        int matrix[1000][1000];  //int matrix[10][10] for example
        
};