#include <stdio.h>
#include <stdlib.h>
struct AdjList
{
	int key;
	struct AdjList *next;
};
srtuct AdjList *Vtx

int FRONT=-1,REAR=-1;
int q[25];

int V,E,type;
		//Adjacenc Matrix
//int graph[5][5] = {{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,1},{0,1,0,1,0}};  //Hard code

int graph[5][5];
		//Visit Array (0 :- not represent , 1:- Visited)
int visit[5]={0,0,0,0,0};

void enqueue(int item)
{	
	
	if(REAR>=25)
		printf("\nQueue is Full\n");
	else if(REAR==-1 && FRONT==-1)  
		{
			FRONT=REAR=0;
			q[REAR]=item;
		}
	else
		{
			REAR++;
			q[REAR]=item;
		}
}

int dequeue()
{
	int item;
	if(FRONT==-1)
	    printf("\nQueue is empty\n");
	else if(FRONT==REAR)
	    FRONT=REAR=-1;
	else
		item=q[FRONT];
	    FRONT++;		
	        
	return(item);	
}

//get edges from user

void getMatrix(int V)
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
			scanf("%d",&graph[i][j]);
	}		
}
void createList(int V,int E,int type)
{
	int i;
	struct AdjList *newnode;
	for(i=0;i<V;i++)
		Vtx[i] = NULL;
	
	newnode = (struct AdjList)*malloc(sizeof(struct AdjList));
	newnode->key
	newnode->next = NULL;
	if(Vtx[V]=NULL)
		Vtx[V]=newnode;
	else
	{
		ptr=Vtx[V];
		while(ptr->next !=NULL)
			ptr=ptr->next;
		ptr->next=newnode;
	}
}

void createMatrix(int E,int V, int type)
{
	int i,j;
	int E1,E2;
	for(int i=0;i<E;i++)
	{
		for(int j=0;j<V;j++)
		{
			graph[i][j] = 0;
		}
	}
	for(i=0;i<E;i++)
	{
		scanf("%d", &E1);
		scanf("%d", &E2);
		graph[E1][E2] = 1;
		if(type == 2)
			graph[E1][E2] = 1; 
		
		
	}
}





void display_graph()
{
	int i,j;
	for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				printf("%d\t",graph[i][j]);
			printf("\n");
		}

}

int isVisited(int Vtx)
{
	return(visit[Vtx]);
}
void bfs(int S)
{
	int Vtx;
	enqueue(S);
	printf("BFS traversal :\t");
	while((FRONT != -1) && (REAR != -1))
	{
		Vtx= dequeue();
		if(!isVisited(Vtx))	
		{
			visit[Vtx] =1;
			printf("%d\t",Vtx);
			for(int i=0;i<5;i++)
				{
				if(graph[Vtx][i]==1)
					enqueue(i);
				}
		}	
	}
	printf("\n");

}


int main ()
{
	//display_graph();
	//bfs(0);

	printf("Enter the number of vertices : ");
	scanf("%d",&V);
	//getMatrix(V);

	printf("Enter the type of graph(enter 1.  for directed graph\t 2. Undirected graph )");
	scanf("%d",&type);

	printf("Enter the number of edges: ");
	scanf("%d",&E);
	printf("Enter the edges: ");
	//createMatrix(V,E,type);
	for(i=0;i<E;i++)
	{
		
		scanf("%d", &E1);
		scanf("%d", &E2);
		createList(V,E,type);
		if(type==2)
			creatList(E2,E1,type);
	}

	//printf("<---BFS Traversal--->\n");
	//bfs(0);
	createList(V,E,type);
	

	return 0;
}	


	
