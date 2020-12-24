#include<iostream>
using namespace std;

char keypad[][10] = {
    "",
    "",
    "ABC",
    "DEF",
    "GHI",
    "JKL",
    "MNO",
    "PQRS",
    "TUV",
    "WXYZ"
};

void generate(char *in, char *out, int i, int j){
	//base case 
	if(in[i] == '\0'){
		out[j] = '\0';
		cout << out << endl;
	}
	//recursive case
	int digit = in[i] - '0';
	//special case 
	// if(digit == 1 || digit == 0)
	// 	generate(in, out, i + 1, j );
	
	int k = 0;
	while(keypad[digit][k] != '\0'){
		out[j] = keypad[digit][k];
		generate(in, out, i + 1, j + 1);
		k++;
	}
}


int main(){

	char in[100];
	char out[100];
	cin >> in;

	generate(in, out, 0, 0);

	return 0;
}