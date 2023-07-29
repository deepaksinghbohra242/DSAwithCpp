#include <bits/stdc++.h>
using namespace std;

class Graph{
        list<int>* l;
        int V;

    public:
        Graph(int V){
		this->V = V;
		l = new list<int>[V];
	}

    void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}

    bool dfs(int node,vector<bool>& visited, int parent){
        visited[node] = true;
        for(auto nbr : l[node]){
            if(!visited[nbr]){
                bool nbrFoundCycle = dfs(nbr,visited,node);
                if(nbrFoundCycle){
                    return true;
                }
            }
            else if(nbr!=parent){
                return true;
            }
        }
        return false;
    }

    bool contains_cycle(){
		//Graph is single component
		vector<bool> visited(V,false);
		return dfs(0, visited, -1);
	}


}

int main()
{
    Graph g(3);
	g.addEdge(0,1);
	g.addEdge(1,2);
	//g.addEdge(2,0);

	cout << g.contains_cycle() <<endl;

    return 0;
}