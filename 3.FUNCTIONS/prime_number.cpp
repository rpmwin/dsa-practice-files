#include<iostream>
 
using namespace std;
 
bool findprime(int givennum){
    for (int i = 2; i <= givennum/2; i++)
    {
        if ((givennum)%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;    
}

int main()
{
    int num;
    cout<<"enter the number : "<<endl;
    cin>>num;
    bool result=findprime(num);

        if (result==true)
        {
            cout<<"the number is prime";
        }
        else
        {
            cout<<"NOT a prime number!!!";
        }
        
 
    return 0;
}