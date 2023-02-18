#include <iostream>

using namespace std;

int main()
{
    // pattern for solid rectangle
    int row, column;

    cin >> row;
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}