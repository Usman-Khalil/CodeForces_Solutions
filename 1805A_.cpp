#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n , ans = 0;
        cin >> n;
        vector<int>nums(n);
        for(auto& num : nums){
            cin >> num;
            ans ^= num;
        }    
        for(auto& num : nums){
            num = ans ^ num;
        }
        int bitwiseXor = 0;
        for(auto num : nums)
            bitwiseXor = bitwiseXor ^ num;
        if(!bitwiseXor)
            cout << ans << endl;
        else
            cout << -1 << endl;        
        t--;
    }
    return 0;
}