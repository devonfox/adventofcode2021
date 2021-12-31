#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>
#include <cstring>

using namespace std;

// x1,y1 -> x2,y2

class point
{
    public:
        point();
        point(int ex, int wai);
        point(const point&);
        void set_x(int newx);
        int get_x();
        void set_y(int newy);
        int get_y();
        void display();

    private:
        int x;
        int y;
};

class line
{
    public:
        line();
        line(const line&);
        line(point firstone, point secondone);
        void display();
        bool find(int &vert, int &horiz);

    private:
        point first;
        point second;
};

class graph
{
    public:
        graph();
        void lineitup(); // marking the matrix
        int countitup(); //overlapping count

    private:
        int size = 10;
        int matrix[10][10];
        
};