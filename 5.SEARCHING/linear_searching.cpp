#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int size;
    cout<<"enter the size of the array :"<<endl;
    cin>>size;
    vector<int> arr(size);
    cout<<"enter the elements of the array :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int findnum;
    cout<<"enter the number you need to find"<<endl;
    cin>>findnum;

    //linear search code important

    bool ans=0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i]==findnum)
        {
            cout<<"at "<<i+1<<" target found";
            break;
        } 
        else if (i==size-1)
        {
            /* code */
            ans=1;
        }
        
    }
    if (ans==1)
    {
        /* code */
        cout<<"invalid number";
    }
    
    return 0;
}