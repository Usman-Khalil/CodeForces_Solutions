#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n ;
        cin >> n;
        vector<int>nums(n);
        for(auto& num : nums){
            cin >> num;
        }
        vector<int>numsC(n);
        for(int k = 0 ; k < n ; k++){
            numsC[k] = (n + 1) - nums[k];
        }
        for(auto num : numsC){
            cout << num << ' ' ;
        }
        cout << endl;
        t--;
    }
    return 0;
}