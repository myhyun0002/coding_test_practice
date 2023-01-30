#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
  int M,N;
  int s,a,t;
  int infinity = pow(2, 31)-1;
  vector<pair<int,int>> graph[101];
  int node[101];

  cin >> N >> M;
  cin >> s >> a >> t; // 시작노트, 경유노드, 도착노드

  for(int i = 0 ; i < M ; i++){
    int u; // 에지 시작 노드
    int v; // 에지 도착 노드
    int w; // 에지 가중치

    cin >> u >> v >> w;
    graph[u].push_back({v,w});
  }

  for (int i = 1; i <= N; i++) {
      node[i] = infinity;
  }

  node[s] = 0;

  for(int i = s ; i <= a ; i++){
    for(int j = 0 ; j < graph[i].size() ; j++){
      int nextV = graph[i][j].first;
      int nextW = graph[i][j].second;
      if (node[i] != infinity &&  node[nextV] > node[i] + nextW){
        node[nextV] = node[i] + nextW;
      }
    }
  }

  for (int i = a+1; i <= N; i++) {
      node[i] = infinity;
  }

  for(int i = a ; i <= t ; i++){
      for(int j = 0 ; j < graph[i].size() ; j++){
        int nextV = graph[i][j].first;
        int nextW = graph[i][j].second;
        if (node[i] != infinity &&  node[nextV] > node[i] + nextW){
          node[nextV] = node[i] + nextW;
        }
      }  
    }

  cout << node[t] << endl;

  return 0;
}