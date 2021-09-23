#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int V,E;
 cout<<"Enter Number of Vertex and Edges : ";
 cin>>V>>E;
 vector<int>adj[V];
 for(int i=0;i<E;i++){
      cout<<"Enter Adjecents of "<<i<<" : "<<endl;
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
 }
 for(int i=0;i<V;i++){
  cout<<i<<"--> ";
  for(auto it : adj[i])
     cout<<it<<" ";
     cout<<endl;
 }
 return 0;
}
