#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int findMinVol(vector<int>& arr, int x) {
	int minVol = 0 , num = 0;
	for (int i = 0; i < arr.size(); i++) {
		minVol = max(minVol, arr[i] - num);
		num = arr[i];
	}
	return max(minVol, (x - arr[arr.size() - 1]) * 2);
}
 
int main()
{
	int t;
	cin >> t;
	while (t) {
		int n, x;
		cin >> n >> x;
		vector<int>arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << findMinVol(arr, x) << endl;
		t--;
	}
	return 0;
}