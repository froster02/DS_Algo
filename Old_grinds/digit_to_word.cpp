#include <iostream>

using namespace std;

char words[][10] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

void printSpelling(int n) {
    //base case
    if (n == 0)
        return;

    //recursive case to first print (204)
    printSpelling(n / 10);

    int digit = n % 10;

    cout << words[digit] << " ";
    return;
}

void printSpelling_reverse(int n) {
    //base case 
    if (n == 0)
        return;
    //recursive case to first print (048)
    printSpelling_reverse(n / 10);

    int digit = n % 10;

    cout << words[digit] << " ";
    return;
}


int main() {

    int n;
    cin >> n;

    cout << "Print String to Digit : " << endl;
    printSpelling(n);

    cout << "Print String to Digit in Reverse : " << endl;
    printSpelling_reverse(n);

    return 0;
}