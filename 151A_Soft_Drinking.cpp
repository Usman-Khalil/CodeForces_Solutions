#include <iostream>
using namespace std;
 
int main()
{
    int noOfFri , bottles , litres , limes , slices , salt , nl , np;
    cin >> noOfFri >> bottles >> litres >> limes >> slices >> salt >> nl >> np;
    int toast1 = (bottles * litres ) / nl;
    int toast2 = (limes * slices);
    int toast3 = salt / np;
    if(toast1 < toast2 && toast1 < toast3)
        cout << toast1 / noOfFri << endl;
    else if(toast2 < toast1 && toast2 < toast3)
        cout << toast2 / noOfFri << endl;
    else 
        cout << toast3 / noOfFri << endl;
    return 0;
}