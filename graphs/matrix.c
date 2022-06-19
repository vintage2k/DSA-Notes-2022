#include <stdio.h>

int main(int argc, char **argv){
	int a,b,v1,v2;
	// number of vertices and number of edges, from 1 to a and 1 to b respectively
	scanf("%d %d",&a,&b);
	adj[a][a]; 	
	// adjacency matrix
	for(int i=0;i<b;i++){
		scanf("%d %d",&v1,&v2);
		adj[v1-1][v2-1] = 1; 
		//adjusted for zero-indexing
	}
	
	return 0;
}

