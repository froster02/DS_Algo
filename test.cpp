#include <iostream>
#define maxm 1000005
using namespace std;

int prime_sieve(int *p){
	p[0] = 0;
	p[1] = 0;
	p[2] = 1;
	
	for(int i=3; )

}

int main(){

	int n, p[maxm] = {0};
	cin >> n;

	prime_sieve(p);

	for(int i=0; i<n; i++){
		if(p[i]==1)
			cout << i << " ";
	}

	return 0;
}