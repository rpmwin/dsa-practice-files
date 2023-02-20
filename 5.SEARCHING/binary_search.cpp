#include <iostream>
#include <vector>
using namespace std;

int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;
    

    while (start <= end)
    {
        int element = arr[mid];
        /* code */
        if (element == target)
        {
            return mid;
        }
        else if (element > target)
        {
            /* code */
            end = mid + 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

   
    int arr[] = {1, 4, 7, 8, 9};
    int size = 5;
    int target=7 ;

    

    int indexoftarget = binarysearch( arr , size, target);
    if (indexoftarget == -1)
    {
        /* code */
        cout << "target not found " << endl;
    }
    else
    {
        cout << "target found at " << indexoftarget+1
         << endl;
    }

    return 0;
}