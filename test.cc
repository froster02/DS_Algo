#include <stdio.h>

// void sum(int a[],int i, int j, int k){

// 	while (j <= k){
// 		if(j == k)
// 			return sum(a, 0, 1, k--);
// 		else if((a[i] + a[j]) == a[k]) {
// 			printf("%d, %d, %d", i ,j , k);
// 			return sum(a, i+1, j+1, k);
// 		}
// 	}

// }

int main() {

	int a[] = {24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
	int n = sizeof(a) / sizeof(a[0]);

	//sum(a, 0, 0, n - 1);
	int i =0, j = 1, k = n -1;
	for(int l = n -1; k >= j; l--){
		if(a[i] + a[j] == a[k]){
			printf("%d, %d, %d", i, j, k);
			i++;
			j++;
			k--;
		}
	}
	
	return 0;
}