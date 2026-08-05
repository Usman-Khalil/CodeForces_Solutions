#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
	int n;
	cin >> n;
	vector<int>arr(n);
	int mini = INT_MAX;
	for (auto& num : arr) {
		cin >> num;
		mini = min(mini, abs(num));
	}
	cout << abs(mini - 0) << endl;
 
	return 0;
}
              