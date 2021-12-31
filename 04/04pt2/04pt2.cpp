#include "04.h"

int main()
{
    game bingo;
    //bingo.test_input();
    //bingo.display_boards();
    int answer = bingo.run();

    cout << "Final score: " << answer << endl;

    return 0;
}