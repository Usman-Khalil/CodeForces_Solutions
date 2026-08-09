#include <iostream>
#include <vector>
#include <cmath>
#include <array>
// #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while(t) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int maxd = max(a, max(b, c));
 
        if(maxd == a) {
            if(a > b + c)
                a = b + c;
        }
        else if(maxd == b) {
            if(b > a + c)
                b = a + c;
        }
        else {
            if(c > a + b)
                c = a + b;
        }
 
        cout << max(a, max(b, c)) - min(a, min(b, c)) << endl;
 
        t--;
    }
 
    return 0;
}