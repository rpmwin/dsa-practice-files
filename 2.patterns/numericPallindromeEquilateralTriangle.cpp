#include<iostream>
 
using namespace std;
 
int main()
{
    int row;
    cin>>row;

    for (int rowcount = 0; rowcount < row; rowcount++)

    {
        //for spaces
        for (int space = row; space >rowcount-1 ; space--)
        {
            cout<<"  ";
        }
        //front half numbers triangle
        for (int num = 0; num <=rowcount; num++)
        {
            cout<<num+1<<" ";
        }
        //for next half numbers in reverse order
        for (int afternum = rowcount; afternum > 0; afternum--)
        {
            /* code */
            cout<<afternum<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}