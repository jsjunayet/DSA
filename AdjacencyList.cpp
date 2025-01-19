#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int e,n;
    cin>>e>>n;
    vector<int> mat[n];
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    for(int x: mat[0]){
        cout<<x;
    }
    
    return 0;
}