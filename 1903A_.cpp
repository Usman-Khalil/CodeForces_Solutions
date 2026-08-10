#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n , k; 
        cin >> n >> k;
        vector<int>nums(n);
        for(auto& num : nums){
            cin >> num;
        }
        if(is_sorted(nums.begin() , nums.end()))
            cout << "Yes" << endl;
        else if(k > 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        t--;
    }
    return 0;
}