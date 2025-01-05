#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int search;
    cout<< "which digit your find in this array : ";
    cin>>search;
    int left=0;
    int right = n-1;
    int mid ;
    bool found = false;
    while (left<=right)
    {
       mid = left+right/2;
       if(a[mid]==search){
        found = true;
        cout<<"found : "<<a[mid]<<endl;
        break;
       }if(search<a[mid]){
        right = mid+1;
        
       }else{
        left = mid-1;
       }

    }
    if(!found){
        cout<< "not found"<<endl;
    }
    
    return 0;
}