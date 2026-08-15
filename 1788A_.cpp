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
        int twos = 0 ;
        for(auto num : nums){
            if(num == 2)
                twos++;
        }
        if(twos == 0)
            cout << 1 << endl;
        else if(twos % 2 != 0)
            cout << -1 << endl;
        else{
            int temp = twos / 2 , k = 1;
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[j] == 2)
                    temp--;
                if(!temp)
                    break;
                k++;    
            }
            cout << k << endl;
        }    
        t--;
    }
    return 0;
}