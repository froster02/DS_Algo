#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string s; 
    long long int n;
    int res = 0;
    getline(cin,s);
    cin>>n;
    string s1 = s;
    for(int i=0;i<n;i++){
        s.append(s1);
    }
    s.resize(n);
    cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a')
            res++;
    }
    cout<<res;
    return 0; 
} 

