#include<iostream>
using namespace std;
int main(){
    int a[] ={1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
 for(int i=0;i<n-2;i+=1){
    for(int j=i+1;j<n-1;j+=1){
        for(int k=j+1;k<n;k+=1){
                 cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
        }
    }
 }
}
