#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int num;
        cin >> num;
        int noOfDigits = 0, lastDigit;
        while(num > 0){
            lastDigit = num % 10;
            num /= 10;
            noOfDigits++;
        }
        cout << (10 * (noOfDigits - 1)) - (noOfDigits - 1) + lastDigit << endl;
        t--;
        
    }
    return 0;
}