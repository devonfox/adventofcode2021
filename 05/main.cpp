#include "05.h"

int main()
{
    point newone = point(3,4);
    point newtwo = point(9,3);

    line newline = line(newone, newtwo);



    newline.display();
    cout << endl;

    return 0;
}