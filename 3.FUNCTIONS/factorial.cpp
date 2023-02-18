#include <iostream>

using namespace std;

int ans = 1;
 double findfact(int num)
{
    for (int i = 1; i <= num; i++)
    {
        ans=ans*i;
    }
    return ans ;
}

int main()
{
    int num;
    cin >> num;

    double finalans = findfact(num);
    cout<<"the factorial of the given number is "<<finalans<<endl;
    return 0;
}