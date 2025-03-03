#include <iostream>
using namespace std;

void generateSubseq(char *in, char *out, int i, int j){
    //base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }    

    //recursive case
    //include current char
    out[j] = in[i];
    generateSubseq(in, out, i + 1, j + 1);

    //exclude current char 
    generateSubseq(in, out, i + 1, j);
}

int main(){

    char input[] = "abc";
    char output[10];

    generateSubseq(input, output, 0, 0);

    return 0;
}