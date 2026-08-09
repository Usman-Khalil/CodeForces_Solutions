#include<iostream>
#include<vector>
#include<stack>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n , k; 
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>freq(26);
        for(auto ch : s){
            freq[ch - 'a']++;
        }
        int nonPairChars = 0;
        for(auto f : freq){
            if(f % 2 != 0)
                nonPairChars++;
        }
        nonPairChars -= 1;
        if(k >= nonPairChars)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
        t--;
    }
    return 0;
}