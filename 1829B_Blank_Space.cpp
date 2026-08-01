#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int arr[n] , maxCount = 0, countOf0 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                countOf0++;
            }
            else
            {
                if(countOf0 > maxCount)
                    maxCount = countOf0;
                countOf0 = 0;
            }
            if(countOf0 > maxCount)
                maxCount = countOf0;
        }
        cout << maxCount << endl;
    }
    return 0;
}