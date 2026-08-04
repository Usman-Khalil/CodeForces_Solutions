#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int sum(vector<int>nums) {
	int sum = 0;
	for (auto num : nums) {
		sum += num;
	}
	return sum;
}
 
int main() {
	int t;
	cin >> t;
	while (t) {
		int n;
		cin >> n;
		vector<int>nums(n - 1);
		for (auto& num : nums) {
			cin >> num;
		}
		cout << -1 * sum(nums) << endl;
		t--;
	}
	return 0;
}