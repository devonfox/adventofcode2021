#include "08.h"

int main()
{
    display panel;
    panel.print();
    int total = panel.decoder();
    
    cout << "Total output: " << total << endl;

    return 0;
}