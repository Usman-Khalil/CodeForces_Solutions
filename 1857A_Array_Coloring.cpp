#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t){
        int n , sum = 0;
        cin >> n;
        vector<int>arr(n);
        for(auto& num : arr){
            cin >> num;
            sum += num;
        }
        if(sum % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No"  << endl;
        t--;
    }
    return 0;
}