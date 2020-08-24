#include <iostream>
#include <cstring>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;

//input string and print 
char *myStrtok(char *s, char delim){
    
    static char *input = NULL;

    if(s != NULL)
        input = s;

    if(input == NULL)
        return NULL;
    
    char *output = new char[strlen (input + 1)];

    int i = 0;
    for(    ; input[i] != '\0'; i++){
        if(input[i] != delim)
            output[i] = input[i];

        else {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    output[i] = '\0';
    input = NULL;

    return output;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[max] = "today is the first day of the week";

    char *ptr = myStrtok(s, " ");
    cout << ptr << endl;

    while(ptr != NULL){
        ptr = myStrtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}