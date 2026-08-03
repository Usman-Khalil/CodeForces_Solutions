#include <iostream>
#include <string>
using namespace std;
 
int check(string x, string m) {
	int cnt = 0 , temp = 0;
	while (temp <= 5) {
		if (x.find(m) != string::npos) {
			return cnt;
		}
		else if (x.length() > m.length()) {
			temp++;
			cnt++;
			x += x;
		}
		else {
			cnt++;
			x += x;
		}
		
	}
	return -1;
}
 
int main() {
	int t;
	cin >> t;
	while (t) {
		int n, m;
		cin >> n >> m;
		string x, s;
		cin >> x >> s;
		cout << check(x, s) << endl;
		t--;
	}
}