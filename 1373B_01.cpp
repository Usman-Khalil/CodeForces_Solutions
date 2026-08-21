#include <iostream>
using namespace std;
int main() {
        
    int t;
    cin >> t;
    while(t){
        string s;
        cin >> s;
        int ones = 0 , zeros = 0;
        for(auto ch : s){
            if(ch == '1')
                ones++;
            else
                zeros++;
        }
        int moves = min(ones , zeros);
        if(moves % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
        t--;
    }
    return 0;
}