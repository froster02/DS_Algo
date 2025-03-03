#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);   //PROCESS STR IN SS(STIRNGSTREAM)
    vector<int> result;     //CREATE VECTOR TO HOLD RESULT
    char ch;                //A CHAR TO STORE THE WORD 
    int tmp;                //STORE TEMP VARIABLE
    while (ss >> tmp) {
        result.push_back(tmp);
        ss >> ch;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
