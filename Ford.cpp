// Code taken from geeks for geeks link to code : https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/

#include <iostream>
#include <limits.h>
#include <queue>
#include <string.h>
#include<chrono>
#include <iostream>
#include <fstream>

using namespace std;

#define V 1200

int count = 0;
int vertArr[V][V] ; 

	
bool bfs(int rGraph[V][V], int s, int t, int parent[])
{
	
	bool visited[V];
	memset(visited, 0, sizeof(visited));

	
	queue<int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;

	
	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int v = 0; v < V; v++) {
			if (visited[v] == false && rGraph[u][v] > 0) {
				
				if (v == t) {
					parent[v] = u;
				
					return true;
					
				}
				q.push(v);
				parent[v] = u;
				visited[v] = true;
			}
		}
	}

	
	return false;
}
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v,int w) {       
   vertArr[u][v] = w;
   
}

int fordFulkerson(int graph[V][V], int s, int t)
{
	int u, v;



	int rGraph[V][V]; 


	for (u = 0; u < V; u++){
		for (v = 0; v < V; v++){

			rGraph[u][v] = graph[u][v];
}
}

	int parent[V]; 

	int max_flow = 0; 
	while (bfs(rGraph, s, t, parent)) {
		
		int path_flow = INT_MAX;
	

		for (v = t; v != s; v = parent[v]) {
			u = parent[v];
			path_flow = min(path_flow, rGraph[u][v]);
		}

		
		for (v = t; v != s; v = parent[v]) {
			u = parent[v];
			rGraph[u][v] -= path_flow;
			rGraph[v][u] += path_flow;
		}

		max_flow += path_flow;
	}

	return max_flow;
}


int main()

{

	
      
   int v = V;   
   ifstream inputData;
   int fn,tn,cap;
   inputData.open("data1200.dat"); 
   while(!inputData.eof()){
        inputData >> fn;
        inputData >> tn;
        inputData >> cap;
       
        add_edge(fn,tn,cap);
    }
   inputData.close();
 

	
	
	
      auto a = std::chrono::high_resolution_clock::now();
	cout << "The maximum possible flow is for nodes :"<< v <<" value :"
		<< fordFulkerson(vertArr, 0, V-1)<<endl;


	auto b = std::chrono::high_resolution_clock::now();

	cout<<"Time Taken By Ford Fulkersons Algorithm: "<<std::chrono::duration_cast<std::chrono::microseconds>(b-a).count()<<" microseconds"<< endl;	

	return 0;
}

