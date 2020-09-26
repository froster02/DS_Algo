#include<iostream>
#include<algorithm>
#include<cstdio>
#define maximum 1000
using namespace std;

bool canPlaceCows(int stall[], int n, int c, int min_sep){
	int last_cow = stall[0];
	int count = 1;
	for(int i=1; i<n; i++){
		if(stall[i] - last_cow >= min_sep){
			last_cow = stall[i];
			count++;
			if(count == c)
				return true;
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int stall[] = {1,2,4,8,9};
	int n = 5, cows = 3, ans = 0;
	int s = 0, e = stall[n - 1] - stall[0];

	while(s <= e){
		int mid = (s + e) / 2;
		bool cowRakhPaye = canPlaceCows(stall, n, cows, mid);
		if(cowRakhPaye) {
			ans = mid;
			s = mid + 1;
		}
		else 
			e = mid - 1;
	}
	cout << ans << endl;

	return 0;
}