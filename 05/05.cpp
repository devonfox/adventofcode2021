#include "05.h"

point::point(): x(0), y(0)
{

}

point::point(int ex, int wai)
{
    x = ex;
    y = wai;
}

void point::display()
{
    cout << "(" << x << "," << y << ")";
}

void point::set_x(int newx)
{
    x = newx;
}

int point::get_x()
{
    return x;
}

void point::set_y(int newy)
{
    y = newy;
}

int point::get_y()
{
    return y;
}

line::line()
{

}

line::line(point firstone, point secondone)
{
    first.set_x(firstone.get_x());
    first.set_y(firstone.get_y());
    second.set_x(secondone.get_x());
    second.set_y(secondone.get_y());
}

void line::display()
{
    first.display();
    cout << " -> ";
    second.display();
}