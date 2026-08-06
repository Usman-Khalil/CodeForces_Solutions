#include <iostream> 
#include <vector> 
 
using namespace std;
  
int main() {
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(auto& num : arr){
            cin >> num;
        }
        int countOf1 = 0 , countOfNeg1 = 0;
        for(auto num : arr){
            if(num == 1)
                countOf1++;
            else    
                countOfNeg1++;
        }
        int noOfOper = 0;
        if(countOfNeg1 > countOf1){
            if(n % 2 == 0){
                noOfOper = n / 2 - countOf1;
                countOfNeg1 = n  - n / 2;;
            }
            else{
                noOfOper = n / 2 + 1 - countOf1;
                countOfNeg1 = n - (n / 2 - 1);
            }
        }
        if(countOfNeg1 % 2 != 0)
            noOfOper++;
        cout << noOfOper << endl;
        t--;
    }
    return 0;
}