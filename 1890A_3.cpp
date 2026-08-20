#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t) {
        int n ;
        cin >> n;
        map<int,int>mapp;
        for(int j = 1 ; j <= n ; j++){
            int num;
            cin >> num;
            mapp[num]++;
        }
        if(mapp.size() == 1)
            cout << "Yes" << endl;
        else if(mapp.size() > 2)
            cout << "No" << endl;  
        else {
            vector<int>fr;
            for(auto it : mapp){
                fr.push_back(it.second);
            }    
            if(fr[0] == n / 2 || fr[0] == (n + 1) / 2 && fr[1] == n / 2 || fr[1] == (n + 1) / 2)
                cout << "Yes" << endl;
            else    
                cout << "No" << endl;    
        }      
        t--;
    }
    return 0;
}