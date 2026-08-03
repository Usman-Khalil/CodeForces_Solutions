#include <iostream>
using namespace std;
 
void determineWinner(int n) {
	if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
		cout << "First" << endl;
	else
		cout << "Second" << endl;
}
 
int main() {
	int t; 
	cin >> t;
	while (t) {
		int n;
		cin >> n;
		determineWinner(n);
		t--;
	}
	return 0;
}