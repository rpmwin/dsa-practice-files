#include <iostream>

using namespace std;

int main()
{
    int rowcount;

    cin >> rowcount;

    for (int i = 1; i <= rowcount; i++)
    {
        /* code */
        for (int j = 0; j < rowcount-i ; j++)   
        {
            /* code */
            cout<<" ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            /* code */
            if (k%2==0)
            {
                /* code */
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    

return 0;



}