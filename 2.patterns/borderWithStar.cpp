#include <iostream>

using namespace std;

int main()
{
    int row,column;

    cin >> row;
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        if (i==0||i==row-1)
        {
            for (int j = 0; j < column; j++)
            {
                cout<<"<> ";
            }
        }
        else
        {
            cout<<"<> ";
            for (int j = 0; j <=column-2; j++)
            {
                cout<<"  ";
            }
            cout<<"<> ";
        }
                cout<<endl;
    }
    
 
    return 0;
}