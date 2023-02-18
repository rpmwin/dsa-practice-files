#include <iostream>

using namespace std;

// bool tempresult(int giventempnumcount){
//     for (int i = 2; i <= numcount / 2; i++)
//         {
//             if (numcount % i == 0)
//             {
//                 break;
//             }
//         }
// }

bool tempresult(int giventempnumcount){
    for (int i = 2; i <= giventempnumcount/2; i++)
    {
        if ((giventempnumcount)%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;    
}

int findprimenumbers(int num)
{
    for (int numcount = 2; numcount <= num; numcount++)
    {
        bool result = tempresult(numcount);
        if (result == 1)
        {
            cout<<numcount;
            cout<<endl;
        }
        
    }
}

int main()
{
    int num;
    cout << "enter the number upto : " << endl;
    cin >> num;

    findprimenumbers(num);

    return 0;
}