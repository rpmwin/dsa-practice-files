#include<iostream>
 
using namespace std;
 
int main()
{
    int a[500],n;
    cout<<"enter the number of num in array"<<endl;
    cin>>n;

    cout<<"enter the numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

  for (int i = 0; i < n; i++)
    {
      cout<<a[i]*2<<"  ";
    }

    

 
 
    return 0;
}