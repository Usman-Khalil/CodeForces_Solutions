#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
 
bool check(vector<int>nums, int k) {
	for (auto num : nums) {
		if (num == k)
			return true;
	}
	return false;
}
 
int main() {
	int t;
	cin >> t;
	while (t) {
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for (auto& num : nums) {
			cin >> num;
		}
		if (check(nums, k))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		t--;
	}
}