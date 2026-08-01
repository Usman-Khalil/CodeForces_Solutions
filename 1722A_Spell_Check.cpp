#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        string s , arr = "Timru";
        int n;
        cin >> n >> s;
        sort(s.begin() , s.end()) ;
        sort(arr.begin() , arr.end());
        if(n == 5)   
        {
            if( s == arr)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}