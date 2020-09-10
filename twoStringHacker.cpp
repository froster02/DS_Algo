#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<string> arr_Str(n*n);
    for(int i=0; i<arr_Str.size(); i++){
        cin >> arr_Str[i];
        cin >> arr_Str[i+1]; 
        i++;
    }
    int k = 0;
    for(int itr=0; itr<arr_Str.size(); itr++){
        string s1 = arr_Str[itr];
        string s2 = arr_Str[itr+1];
        bool flag = false;
        for (int i = 0; i < s1.length(); i++){
            for (int j = 0; j < s2.length(); j++){
                if(s2[j] == s1[i])
                    flag = true;
            }
        }
        if(flag == true)
            arr[k] = 1;
        else
            arr[k] = 0;
        k++;
        itr++;
    }
    for(int k=0; k<arr.size(); k++){
        if(arr[k] == true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}