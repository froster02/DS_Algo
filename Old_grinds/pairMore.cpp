#include<iostream>
#define max 100
using namespace std;
int main(){
    long int i,j,c,count=0,a[max],b[max],n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n-1;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(a[i]==b[j]){
                c++;
                if(c==2){
                    count++;
                    b[j]=0;
                }
                if(c==3){
                    b[j]=0;
                }
            }
        }
    }
    cout<<count;
}