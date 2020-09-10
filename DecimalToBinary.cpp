#include<iostream>
using namespace std;
#define max 100
int main() {
    cout<<endl;
    cout<<"*******************************************************************"<<endl<<endl;
    int i=0,j=0,num,a[max],b[max],maximum=0,c=0;
    cout<<"Enter decimal number : ";
    cin>>num;
    while(num>0) {
        a[i] = num%2;
        num = num/2;
        i++;
    }
    cout<<"Binary representation is a[i] :   ";
    for(j=i-1;j>=0;j--) {
        cout<<"|"<<a[j];
    }
    cout<<"|";
    //COPY ARRAY
    for(j=i-1;j>=0;j--) {
        b[j] = a[j];
    }
    cout<<endl;
    cout<<"copied Binary representation is : ";
    for(j=i-1;j>=0;j--) {
        cout<<"|"<<b[j];
    }
    cout<<"|";
    cout<<endl;
    //COUNT MAXIMUM NUMBER OF ONE'S
    for(j=i-1;j>=0;j--) {
        if(b[j]==1) {
            c++;
            if(maximum<c)
                maximum=c;
        }
        else if(b[j]==0)
            c=0;
    }
    cout<<"\nMaximum sequence of 1 is : "<<maximum<<endl;
    cout<<"\n*******************************************************************"<<endl<<endl<<endl;
}