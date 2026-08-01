#include <iostream>
using namespace std;
 
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int len ;
        string arr;
        cin >> len >> arr;
        int start = 0  , end = len - 1;
        while(arr[start] != arr[end] && start < end)
        {
            len -= 2;
            start++;
            end--;
        }
        cout << len << endl;
    }
    return 0;
}