#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int c = a;
        int minReturn = (c - a) + (b - c);
        while(c <= b)
        {
            int temp = (c - a) + (b - c);
            if(temp < minReturn)
                minReturn = c;
            c++;
        }
        cout << minReturn << endl;
    }
    return 0;
}