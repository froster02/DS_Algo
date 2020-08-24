#include <iostream>
#include <cstdio>
#include <string>
#define max 100
#define endl "\n"
using namespace std;
//**************************************           || CUSTOM STRTOK() (string tokenization) ||          ****************************************

char *myStrtok(char * str, char delim) {

    //string and single char acts as delimiter
    static char *input = NULL;

    //maintaning the first call
    if (str != NULL)
        input = str;

    //checking base case after the final token has been returned
    if (input == NULL)
        return NULL;

    //start extracting tokens and store then in a dynamic array
    char * output = new char[strlen(input + 1)];

    int i = 0;
    for (; input[i] != '\0'; i++) {

        if (input[i] != delim)
            output[i] = input[i];

        else {
            output[i] = '\0';
            input = input + i + 1;
            //cout << "|" << input << "|";
            return output;
        }
    }

    //cornor case
    output[i] = '\0';
    input = NULL;

    return output;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[max] = "Today is Sunday, let's chill";
    char *ptr = myStrtok(s, ' ');
    cout << ptr << endl;

    while (ptr != NULL) {
        ptr = myStrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}