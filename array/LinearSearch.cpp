#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<< " enter your array size : ";
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int search;
    cout<<"which number search please type :"; 
    cin>>search;
    bool found = false;
    for(int i =0; i<n; i++){
        if(a[i]==search){
            cout<<"found search : "<<a[i]<<endl;
            found =true;
            break;
        }
    }
    if(!found){
        cout<<"not Found\n";
    }

}