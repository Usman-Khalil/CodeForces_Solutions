#include <iostream> 
#include <vector> 
using namespace std;
 
int main() {
    
    int t;
    cin >> t;
    while(t){
        int n  , m ;
        cin >> n >> m;
        vector<int> bo(n);
        for(auto& num : bo){
            cin >> num;
        }
        vector<int> ber(m);
        for(auto& num : ber){
            cin >> num;
        }
        long long boAttack = bo[bo.size() - 1];
        for(int i = bo.size() - 1 ; i > 0 ; i--){
            boAttack += (bo[i - 1] - bo[i]) + 1;
        }
        long long berAttack = ber[ber.size() - 1];
        for(int i = ber.size() - 1 ; i > 0 ; i--){
            berAttack += (ber[i - 1] - ber[i]) + 1;
        }
        if(boAttack < berAttack)
            cout << 2 << endl;
        else 
            cout << 1 << endl;
        t--;
    }
    return 0;
}