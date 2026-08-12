#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n ;
        cin >> n ;
        vector<int>nums(n);
        for(auto& num : nums){
            cin >> num;
        }
        vector<int>arr;
        if(is_sorted(nums.begin() , nums.end())){
            int mini = INT_MAX;
            for(int i = 1 ; i < nums.size() ; i++){
                mini = min(mini , abs(nums[i] - nums[i - 1]));
            }
            cout << mini / 2 + 1 << endl;
        }
        else
            cout << 0 << endl;
        t--;
    }
    return 0;
}