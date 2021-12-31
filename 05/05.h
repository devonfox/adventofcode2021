#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

// x1,y1 -> x2,y2

class point
{
    public:
        point();
        point(int ex, int wai);
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
        line(point firstone, point secondone);
        void display();

    private:
        point first;
        point second;
};

class graph
{
    public:
        
};