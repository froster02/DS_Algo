#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int y;
    cin >> y;
    string result, str1, str2;

    if(y > 1918){
    
        if(((y % 400) == 0) || (((y % 4) == 0) && ((y % 100) != 0))){
            ostringstream str1;
            str1 << y;
            string yr = str1.str();
            result = "12.09." + yr;
        }   
        else {
            ostringstream str2;
            str2 << y;
            string yr = str2.str();
            result = "13.09." + yr;
        }
    }

    else if((y >= 1700) && (y <= 1917)){

        if((y % 4) == 0){
            ostringstream str3;
            str3 << y;
            string yr = str3.str();
            result = "12.09." + yr;
        }
        else {
            ostringstream str4;
            str4 << y;
            string yr = str4.str();
            result = "13.09." + yr;
        }
    }
    else
        result = "26.09.1918";

    cout << result;
}