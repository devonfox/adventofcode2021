#include "05.h"

int main()
{
    graph object;
    object.lineitup();
    object.print();  // just to test example output
    int count = object.countitup();

    cout << "Intersecting points: " << count << endl;

    return 0;
}