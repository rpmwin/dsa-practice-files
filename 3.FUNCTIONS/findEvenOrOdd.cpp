#include <iostream>

using namespace std;

bool findit(int n)
{

    if (n% 2 == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    double num;
    cin >> num;

    bool ans = findit(num);

    if (ans==0)
    {
        cout<<"the number is odd";
    }
    else
    {
        cout<<"the number is even";
    }
    

    return 0;
}