#include <iostream>
using namespace std;
 
int main()
{
    int w , x , y , z , max = 0;
    cin >> w ;
    if(w > max)
        max = w;
    cin >> x;
    if(x > max)
        max = x;
    cin >> y;
    if(y > max)
        max = y;
    cin >> z;
    if(z > max)
        max = z;
    int a = max - w , b = max - x , c = max - y , d = max - z;
    if(a > 0 && b > 0 && c >> 0)
        cout << a << " " <<  b << " " << c;
    else if(a > 0 && b > 0 && d >> 0)
        cout << a << " " <<  b << " " << d;
    else if(a > 0 && c > 0 && d >> 0)
        cout << a << " " <<  d << " " << c;
    else if(c > 0 && b > 0 && d >> 0)
        cout << c << " " <<  b << " " << d;
    return 0;
}