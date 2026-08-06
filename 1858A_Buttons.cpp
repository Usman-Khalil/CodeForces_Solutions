#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	while (n) {
		int a, b, c;
		cin >> a >> b >> c;
		if (c % 2 == 1)
			a++;
		if (a <= b)
			cout << "Second" << endl;
		else
			cout << "First" << endl;
		n--;
	}
	return 0;
}