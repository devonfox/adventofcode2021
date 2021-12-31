#include "05.h"

point::point(): x(0), y(0)
{

}

point::point(int ex, int wai)
{
    x = ex;
    y = wai;
}

point::point(const point &source)
{
    x = source.x;
    y = source.y;
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

line::line() {}

line::line(const line& source)
{
    first = source.first;
    second = source.second;
}

line::line(point firstone, point secondone)
{
    first.set_x(firstone.get_x());
    first.set_y(firstone.get_y());
    second.set_x(secondone.get_x());
    second.set_y(secondone.get_y());
}
        
bool find(int &vert, int &horiz)
{

}

void line::display()
{
    first.display();
    cout << " -> ";
    second.display();
}

graph::graph()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            matrix[i][j] = 0;
        }
    }
}



void graph::lineitup()
{
    ifstream in("input_05_sample.txt");
    int x = 0;
    int y = 0;
    string capture;

    while(!in.eof())
    {
        in >> x;
        in.ignore();
        in >> y;
        in >> capture;

        int x1 = x;
        int y1 = y;
        //point one(x, y);

        in >> x;
        in.ignore();
        in >> y;

        int x2 = x;
        int y2 = y;

        //point two(x,y);

        if(x1 == x2)
        {
            if(y1 == y2)
            {
                matrix[x][y]++;
            }
            else
            {
                for(int i = y1; i )
            }
        }

        //line newline(one, two);

        //newline.display();
        //cout << endl;



        for(int i = 0; i < size; i++)
        {
            for(int j = 0; i < size; j++)
            {

            }
        }

    }

}