#include<iostream>
using namespace std;

typedef char V;
typedef int E;

//邻接矩阵 结构体 
typedef struct{
	V vexs[20];   //顶点集  
	E edges[20][20];   //边集 
	int numOfV, numOfE;   //顶点数和边数 
}MGragh;

typedef int Boolean;
Boolean True = 1;
Boolean False = 0;
Boolean visited[20];   //用于深度优先算法，判断该顶点是否被访问过 

//建立邻接矩阵
void CreateMGragh(MGragh *G){
	int i,j,k,w;
	cout<<"输入顶点数和边数"<<endl;
	cin>>G->numOfV>>G->numOfE;
	
	for(i=0; i<G->numOfV; i++){
		cin>>G->vexs[i];
	} 
	
	for(i=0; i<G->numOfV; i++){
		for(j=0; j<G->numOfV; j++){
			G->edges[i][j] = 0   //初始化邻接矩阵，所有都为0，   若为网，则应该为正无穷（或者用一个较大的值来替代正无穷） 
		}
	}
	
	for(k=0;k<G->numOfE;k++){
		cout<<"输入两个顶点的序列值以添加边："
		cin>>i>>j;
		G->edges[i][j] = 1;
		G->edges[j][i] = 1;   //无向图矩阵对称 
	}
	
	/*
	若要添加权值（此时为无向网） 则将上面的循环 换成下面的循环即可： 
	for(k=0;k<G->numOfE;k++){
		int weight;
		cout<<"输入两个顶点的序列值与权值以添加边："
		cin>>i>>j>>weight;
		G->edges[i][j] = weight;
		G->edges[j][i] = weight;   //无向图矩阵对称 
	}
	*/
} 

//邻接矩阵深度优先递归算法 
void DFS(MGragh G, int i){
	int j;
	visited[i] = True;
	cout<<G.vexs[i];
	for(j=0; j<G.numOfV; j++){
		if(G.edges[i][j] == 1 && !visited[j]){
			DFS(G,j);
		}
	}
} 

//邻接矩阵的深度遍历操作
void DFSTraverse(MGragh G){
	int i;
	for(i=0; i<G.numOfV;i++){
		visited[i] = False;   //初始化所有顶点状态都是未访问的状态 
	}
	
	for(i=0; i<G.numOfV;i++) {
		if(visited[i]) DFS(G,i);  //对未访问的顶点调用DFS 	
	}
} 
