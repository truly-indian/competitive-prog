
#include<bits/stdc++.h>
using namespace std;

int main(){
 typedef pair<int,int> ii;
 map<ii,string> table;
 int n;
 cin>>n;
 while(n--){
    ii code;
    string name;
    cin>>code.first>>code.second;
    cin>>name;
    table[code] = name;
 }
 int q;
 cin>>q;
 while(q--){
    ii code;
    cin>>code.first>>code.second;
    cout<<table[code]<<endl;
 }
}
