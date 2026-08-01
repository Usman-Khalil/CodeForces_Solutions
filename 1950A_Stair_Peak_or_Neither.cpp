#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(a < b && b < c)
            cout << "STAIR\n"; 
        else if(b > a && b > c)
                cout << "PEAK" << endl;
        else 
            cout << "NONE\n";
    }
    return 0;
}