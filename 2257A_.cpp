#include <iostream> 
#include <vector> 
#include <string>
#include <unordered_map>
using namespace std;
 
 
bool valid(unordered_map<char , int>& mapp , vector<string>& abb){
 
    for(int i = 0 ; i < abb.size() ; i++){
        for(int j = 0 ; j < abb[i].length() ; j++){
            int cnt = mapp[abb[i][j]];
            if(!cnt)
                return false;
        }
    }
    return true;
}
 
 
int main() {
    
    int t;
    cin >> t;
    while(t){
        int n  , m ;
        cin >> n >> m;
        vector<string>words(n);
        unordered_map<char,int>mapp;
        for(int i = 0 ; i < n ; i++){
            cin >> words[i];
        words[i][0] = tolower(words[i][0]);
            mapp[words[i][0] - 32]++;
        }
        vector<string>abb(m);
        for(int i = 0 ; i < m ; i++){
            cin >> abb[i];
        }
 
        if(valid(mapp , abb))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
 
        t--;
    }
    return 0;
}