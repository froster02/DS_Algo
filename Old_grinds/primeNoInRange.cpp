#include <iostream>
#define max 10000
using namespace std;

void prime_sieve(int *p){
	//mark all odd number as prime
	for(int i=3; i<=max; i+=2)
		p[i] = 1;
	//if not marked then its prime
	for(int i=3; i<=max; i+=2){
		if(p[i] == 1)	
		//mark all multiples of i as not prime
			for(int j=i*i; j<=max; j+=i)
				p[j] = 0;
	}
	//special case
	p[0] = p[1] = 0;
	p[2] = 1;
}

int main(){
	int p[max] = {0};
	prime_sieve(p);
	int csum[max] = {0};

	for(int i = 1; i<= max; i++)
		csum[i] = csum[i-1] + p[i];	
	
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		cout << csum[b] - csum[a-1] << endl;
	}
	return 0;
}