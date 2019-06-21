
#include<iostream>
using namespace std;

void multiply(int *arr,int &n,int no){
    int carry = 0;
for(int i=0;i<n;i+=1){
    int prod = arr[i] * no + carry;
    arr[i] = prod%10;
    carry = prod/10;

}
while(carry){
    arr[n] = carry%10;
    carry = carry/10;
    n++;
}
}
void big_factorial(int number){
 ///answer contains at max 1000 digits;
 int *arr = new int[1000]{0};
  arr[0] = 1;
  int n = 1; /// which denotes the index of the array before which we have stored some digits;
  for(int i=2;i<=number;i+=1){
    multiply(arr,n,i);
  }

  for(int i=n-1;i>=0;i-=1){
    cout<<arr[i];
  }
  cout<<endl;
}

int main(){
    big_factorial(4);
}
