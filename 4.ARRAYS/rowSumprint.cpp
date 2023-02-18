#include<iostream>
 #include<vector>
using namespace std;
 int  printrowwisesum (int arr[3][4],int rows,int coloums){
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < coloums; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"the "<<i<<"th row's sum is : "<<sum<<endl;
    }
    return 0;
 }
int main()
{


    int arr[3][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11}};
    int rows=3;
    int coloums=4;
 
    printrowwisesum (arr,rows,coloums);
    return 0;
}