#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int minDays , maxDays , temp;
    temp = n / 7;
    maxDays = temp * 2;
    minDays = temp * 2;
    if(n % 7 >= 2)
    {
        maxDays = maxDays + 2;
        if(n % 7 == 6)
            minDays += 1;
    }
    else 
        maxDays = maxDays + (n % 7);
    cout << minDays << " " << maxDays ;
    return 0;
}