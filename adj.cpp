#include<iostream>
using namespace std;
int vertArr[6][6]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v, int w) {       //function to add edge into the matrix
   vertArr[u][v] = w;
   vertArr[v][u] = w;
}
main(int argc, char* argv[]) {
   int v = 6;    //there are 6 vertices in the graph
/* 
	add_edge(0, 1, 3 );
	add_edge(0, 2, 7 ) ;
	add_edge(1, 3, 9);
	add_edge(1, 4, 9 );
	add_edge(2, 1, 9 );
	add_edge(2, 4, 9);
	add_edge(2, 5, 4);
	add_edge(3, 5, 3);
	add_edge(4, 5, 7 );
	add_edge(0, 4, 10);
*/

	add_edge(0, 1, 10);
	add_edge(0, 2, 10);
	add_edge(1, 3, 4 );
	add_edge(1, 4, 8 );
	add_edge(1, 2, 2 );
	add_edge(2, 4, 9 );
	add_edge(3, 5, 10 );
	add_edge(4, 3, 6 );
	add_edge(4, 5, 10 );	

   	displayMatrix(v);
}