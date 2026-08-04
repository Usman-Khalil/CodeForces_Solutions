#include <iostream>
#include <vector>
#include <algorithm> 
 
using namespace std;
 
int count(char arr[][10]) {
	int points = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == 'X') {
				if (i < 5 && j < 5)
					points += min(i + 1, j + 1);
				else if (i >= 5 && j < 5)
					points += min(10 - i, j + 1);
				else if (i < 5 && j >= 5)
					points += min(i + 1, 10 - j);
				else if (i >= 5 && j >= 5)
					points += min(10 - i, 10 - j);
			}
		}
	}
	return points;
}
 
int main() {
	int t;
	cin >> t;
	while (t) {
		char arr[10][10];
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cin >> arr[i][j];
			}
		}
		cout << count(arr) << endl;
		t--;
	}
}