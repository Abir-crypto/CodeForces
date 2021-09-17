#include<bits/stdc++.h>

using namespace std;

int *visited;

vector<int> v;

void DFS(vector<int> graph[], int source){
    visited[source] = 1;
    for (int i = 0; i < graph[source].size();i++){
        int next = graph[source][i];
        if(visited[next]==0){
            DFS(graph, next);
            
        }
    }
    v.push_back(source);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n++;
        vector<int> graph[n + 1];
        int x;
        for (int i = 1; i < n;i++){
            cin >> x;
            if(x==0){
                graph[i].push_back(n);
            }
            else{
                graph[n].push_back(i);
            }
        }
        for (int i = 1; i < n - 1;i++){
            graph[i].push_back(i + 1);
        }

        int varr[n + 1] = {0};
        visited = varr;
        DFS(graph, 1);

        for (auto it = v.rbegin(); it != v.rend(); it++){
            cout << *it << " ";
        }
        v.clear();
        cout << endl;
    }
}