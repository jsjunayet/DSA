#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>x = {10,20,30};
    vector<int>y = {10,20,30};
    x.insert(x.begin()+1, x.begin(), x.end());
  for(int p:x){
    cout<<p<<" ";
  }

}