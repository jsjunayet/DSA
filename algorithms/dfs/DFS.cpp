#include<bits/stdc++.h>
using namespace std;
vector<int> Mat[1000];
vector<int> vist(1000, false);

void dfs(int src){
    cout<<src<<endl;
    vist[src]=true;
    for(int child: Mat[src]){
        if(vist[child]==false) dfs(child);
    }
};
int main ()
{
    int n,e;


















































































































































































































    
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        Mat[a].push_back(b);
        Mat[b].push_back(a);
    }
    int src;
    cout<<"enter your source";
    cin>>src;
    dfs(src);

    return 0;
}