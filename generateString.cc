#include<iostream>
#include<string>
using namespace std;

char alpha[26] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z'
};

void generateString(char *in, char *out, int i, int j){
    //base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
    }
    //recursive case 
    int digit = in[i] - '0';

    if(digit < 10){
        generateString(in, out, i+1, j + 1);
    }
    int k = 0;
    while(in[i] != '\0'){
        out[j] = alpha[k];
        generateString(in, out, i + 1, j + 1);
        k++;
    }
}

int main() {

    char in[26];
    cin >> in;
    
    char out[26];
    generateString(in, out, 0, 0);

    return 0;

}