#include <iostream>
#include <vector>
using namespace std;

int reverseArray(vector<int> arr,int n){
    vector<int> brr(0);
    for (int i = n-1; i >= 0; i--)
    {
        brr.push_back(arr[i]);
    }
    cout<<"the reverse array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<brr[i]<<endl;
    }
    return 0;
}



int main()
{
    int n;
    cout << "enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr,n);

    return 0;
}