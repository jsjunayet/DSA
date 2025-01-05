#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"enter your array size: ";
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        cout<<"index" <<" "<<i<<"and value : "<<a[i]<<endl;
    }
    int index;
    cout<<"enter you index and you want to delelted in this array: ";
    cin>>index;
    int value ;
    if(index>=0&&index<n){
        value = a[index];
        for(int i = index; i<n-1; i++){
            a[i]=a[i+1];
        }
        n--;
    }
    cout<<"deleted item : "<<value<<endl;
    for(int i =0; i<n; i++){
        cout<<"index" <<" "<<i<<"and value : "<<a[i]<<endl;
    }
    return 0;
}