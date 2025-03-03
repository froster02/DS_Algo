#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map<string, vector<string> > phonebook;

    phonebook["rahul"].push_back("1");
    phonebook["rahul"].push_back("123");
    phonebook["hella"].push_back("1234");
    phonebook["hella"].push_back("12345");
    phonebook["hella"].push_back("123456");

    for(auto p : phonebook){
        cout << "Name : " << p.first << "->";
        for(string s : p.second){
            cout << s << ", ";
        }
        cout << endl;
    }

    string name;
    cin >> name;

    if(phonebook.count(name) == 0)
        cout << "absent";
    else {
        for(string s:phonebook[name])
            cout << s << endl;
    }
    cout << "\n";
    return 0;
}