#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int>nums(n);
        for(auto& num : nums){
            cin >> num;
        }
        int oper = 0 , consecEven = 0 , consecOdd = 0;
        for(auto num : nums){
            if(num % 2 == 0){
                consecEven++;
                consecOdd = 0;
            }
            else{
                consecEven = 0;
                consecOdd++;
            }
            if(consecOdd >= 2){
                oper++;
                consecOdd  = 1;
            }
            if(consecEven >= 2){
                oper++;
                consecEven  = 1;
            }
        }
        cout << oper << endl;
        t--;
    }
    return 0;
}