#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 char mat[55][55];
 while(n--){
    int M,N,K;
    cin>>M>>N>>K;
    vector<int> bulb(M,0); ///array of m elements with all valued to 0
    for(int r=0;r<M;r++){
        for(int c=0;c<N;c++){
            cin>>mat[r][c];
            if(mat[r][c]=='*') ++bulb[r];
        }
    }
    sort(bulb.begin(),bulb.end(),less<int>());
    int idx = 0;
    while(K>0 && idx < M && N- bulb[idx] > bulb[idx]){
        bulb[idx] = N - bulb[idx];
        --K;
        ++idx;
    }
    while(K!=0 && K%2==1){
        vector<int>::iterator it = min_element(bulb.begin(),bulb.end());
        *it = N-*it;
    }
    cout<< accumulate(bulb.begin(),bulb.end(),0)<<"\n";
 }
}
