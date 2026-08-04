#include <iostream>
#include <string>
using namespace std;
// if there are 3 number of empty spaces in a row then the whole string can be filled with water in 2 actions no matter how many empty spaces are otherwise it will take action equal to the number of the empty spaces
 
int numOfActions(string s) {
	int noOfEmpty = 0, maxLenOfEmpty = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '.') {
			noOfEmpty++;
			maxLenOfEmpty++;
		}
		else
			maxLenOfEmpty = 0;
		if (maxLenOfEmpty >= 3)
			return 2;
	}
	return noOfEmpty;
}
 
 
 
int main() {
	int t;
	cin >> t;
	while (t) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << numOfActions(s) << endl;
		t--;
	}
}