//*************************************did not understood************************************

#include <iostream>
using namespace std;

void permute(char *in, int i){
    //base case
    if(in[i] == '\0'){
        cout <<"||"<< in <<"||"<< " ";
        cout << endl;
        return;
    }

    //recursive case 
    for(int j = i; in[j] != '\0'; j++){
        swap(in[j], in[i]);
        permute(in, i + 1);
        cout << in << " ";
        //backtracking, to restore the orignal array while returning 
        swap(in[i], in[j]);
    }
}

int main(){

    char in[10];
    cin >> in;
    
    permute(in, 0);

    cout << endl;

    return 0;
}