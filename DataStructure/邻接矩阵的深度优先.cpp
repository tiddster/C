#include<iostream>
using namespace std;

typedef char V;
typedef int E;

//�ڽӾ��� �ṹ�� 
typedef struct{
	V vexs[20];   //���㼯  
	E edges[20][20];   //�߼� 
	int numOfV, numOfE;   //�������ͱ��� 
}MGragh;

typedef int Boolean;
Boolean True = 1;
Boolean False = 0;
Boolean visited[20];   //������������㷨���жϸö����Ƿ񱻷��ʹ� 

//�����ڽӾ���
void CreateMGragh(MGragh *G){
	int i,j,k,w;
	cout<<"���붥�����ͱ���"<<endl;
	cin>>G->numOfV>>G->numOfE;
	
	for(i=0; i<G->numOfV; i++){
		cin>>G->vexs[i];
	} 
	
	for(i=0; i<G->numOfV; i++){
		for(j=0; j<G->numOfV; j++){
			G->edges[i][j] = 0   //��ʼ���ڽӾ������ж�Ϊ0��   ��Ϊ������Ӧ��Ϊ�����������һ���ϴ��ֵ���������� 
		}
	}
	
	for(k=0;k<G->numOfE;k++){
		cout<<"�����������������ֵ����ӱߣ�"
		cin>>i>>j;
		G->edges[i][j] = 1;
		G->edges[j][i] = 1;   //����ͼ����Գ� 
	}
	
	/*
	��Ҫ���Ȩֵ����ʱΪ�������� �������ѭ�� ���������ѭ�����ɣ� 
	for(k=0;k<G->numOfE;k++){
		int weight;
		cout<<"�����������������ֵ��Ȩֵ����ӱߣ�"
		cin>>i>>j>>weight;
		G->edges[i][j] = weight;
		G->edges[j][i] = weight;   //����ͼ����Գ� 
	}
	*/
} 

//�ڽӾ���������ȵݹ��㷨 
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

//�ڽӾ������ȱ�������
void DFSTraverse(MGragh G){
	int i;
	for(i=0; i<G.numOfV;i++){
		visited[i] = False;   //��ʼ�����ж���״̬����δ���ʵ�״̬ 
	}
	
	for(i=0; i<G.numOfV;i++) {
		if(visited[i]) DFS(G,i);  //��δ���ʵĶ������DFS 	
	}
} 
