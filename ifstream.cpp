#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream of("test.txt", ios::trunc);
    of<< "John" << endl;
    of<< 25 << endl;
    of<< "CS" << endl;

    of.close();

    ifstream ifs("test.txt");
    string name;
    int roll;
    string branch;

    ifs>> name >> roll >> branch;
    cout << name << endl << roll << endl << branch << endl;
    ifs.close();
}