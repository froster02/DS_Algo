//******************************************************||         ERROR        ||**************************************************************

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <utility>
#define max 100
#define endl "\n"
using namespace std;

//function 1
string extractString(string str, int key){

    char *s = strtok((char *)str.c_str(), " ");
    while(key > 1){
        s = strtok(NULL, " ");
        key--;
    }

    return (string)s;
}

//function 2
int convertToInt(string s){

    int ans = 0;
    int p = 1;
    for(int i = s.length() - 1; i >= 0; i++){
        ans = ans + ((s[i]) - '0' * p);
        p = p * 10;
    }

    return ans;
}

//function 4
bool numericComp(pair<string, string> s1, pair<string, string> s2){
    
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

//function 3
bool lexioComp(pair<string, string> s1, pair<string, string> s2){
    
    string key1, key2;
    key1 = s1.first;
    key2 = s2.second;

    return (key1) < (key2);
}

int main() {
    int n;
    cin >> n;
    cin.get();
    string s[max];
    for (int i = 0; i < n; i++)
        getline(cin, s[i]);

    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;

    pair < string, string > strPair[max];   
    for(int i=0; i<n; i++){
        strPair[i].first = s[i];
        strPair[i].second = extractString(s[i], key);
    }

    //sorting
    if(ordering == "numeric")
        sort(strPair, strPair + n, numericComp);
    else
        sort(strPair, strPair + n, lexioComp);


    //reversal
    if(reversal == "true"){
        for(int i = 0; i < n/2; i++)
            swap(strPair[i], strPair[n - i - 1]);
    }

    for(int i=0; i<n; i++)
        cout << strPair[i].first << endl;

    return 0;
}