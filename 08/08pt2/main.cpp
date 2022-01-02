#include "08.h"

int main()
{
    display panel;
    int decoded = panel.decoder();
    cout << "Digits in output with unique number of segments : " << decoded << endl;

    return 0;
}