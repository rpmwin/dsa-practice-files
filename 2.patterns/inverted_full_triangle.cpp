#include <iostream>

using namespace std;

int main()
{
    int rowcount;
    cin >> rowcount;

    for (int i = 1; i <= rowcount; i++)
    {
        for (int k = 0; k < i; k++)
        {
            /* code */
            cout << " ";
        }

        /* code */
        for (int j = rowcount*2-i; j >=i; j--)
        {
            /* code */
            if (j % 2 == 0)
            {
                /* code */
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}