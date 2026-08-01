#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[4] , noOfPlayers = 0;
        for(int i = 0 ; i < 4 ; i++)
        {
            cin >> arr[i];
            if(i > 0)
            {
                if(arr[i] > arr[0])
                    noOfPlayers++;
            }
        }
        cout << noOfPlayers << endl;
    }
    return 0;
}