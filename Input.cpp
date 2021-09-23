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
/*
9
11
0 1
0 3
1 2
1 3
2 6
3 4
4 5
5 6
6 7
6 8
7 8
0--> 1 3
1--> 0 2 3
2--> 1 6
3--> 0 1 4
4--> 3 5
5--> 4 6
6--> 2 5 7 8
7--> 6 8
8--> 6 7
*/
