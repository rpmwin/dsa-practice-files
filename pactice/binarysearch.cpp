#include<iostream>
 
using namespace std;
 
int binarysearch(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int m=(s+((e-s)/2));

    while (s<=e)
    {
        int ele=arr[m];

        if (ele==target)
        {
            return m;
        }
        //left search
        if (target<ele)
        {
            e=m-1;
        }
        else  
        {
            s=m+1;
        }
        
        m = s + (e - s ) / 2;
        
    }
    
    return -1;
}



int main()
{
    
    int arr[]={1,4,7,8,9,10};
    int size=6;
    int target=4;

    int indexoftarget=binarysearch(arr,size,target);

    if (indexoftarget==-1)
    {
        cout<<"does not exist";
    }
    else
    {
        cout<<"num present in : "<<indexoftarget+1;
    }
    
 
    return 0;
}