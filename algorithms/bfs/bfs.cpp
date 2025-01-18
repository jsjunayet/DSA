#include<bits/stdc++.h>
using namespace std;
vector<int>mat[1000];
vector<bool>vist(1000, false);
vector<int>level(1000, -1);

void bfs(int start){
queue<int>q;
q.push(start);
 vist[start]= true;
level[start]=0;
 while (!q.empty())
 {
  int node = q.front();
  q.pop();
  cout<<"this is node : "<<node<<" "<<"this is level: "<<level[node]<<endl;
    // for(int i =0; i<mat[node].size(); i++){
  //   cout<<mat[node][i]<<endl;
  // }
  for(int child: mat[node])
  if(!vist[child]){
    vist[child]=true,
    level[child]= level[node] + 1;
    q.push(child);
  }
 }
  

};
int main ()
{
  int n,e;
  cin>>n>>e;
  while (e--)
  {
   int a,b;
   cin>>a>>b;
   mat[a].push_back(b);
   mat[b].push_back(a);
  }
  int startNode;
  cout<<"scr node in graph : ";
  cin>>startNode;
  bfs(startNode);
    
  return 0;  
}