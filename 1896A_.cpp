#include<iostream>
#include<vector>
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
        if(nums[0] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        t--;
    }
    return 0;
}