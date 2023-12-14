#include <stdio.h>
#include<stdlib.h>
int FRONT=-1,REAR=-1;
int q[25];

int V,type,E;
		//Adjacenc Matrix
//int graph[5][5] = {{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,1},{0,1,0,1,0}};  //Hard code

int graph[5][5];
		//Visit Array (0 :- not represent , 1:- Visited)
int visit[5]={0,0,0,0,0};


struct AdjList
{
	int key;
	struct AdjList *next;
};
struct AdjList *Vtx[5];

void createList(int v,int e)
{
	int i;

	struct AdjList *newnode,*ptr;	
	
	newnode = (struct AdjList *)malloc(sizeof(struct AdjList));
	newnode->key= e;
	newnode->next=NULL;

	if(Vtx[v]== NULL)
		Vtx[v] = newnode;
	else
	{
		ptr= Vtx[v];
		while(ptr->next !=NULL)	
			ptr = ptr->next;	
		ptr->next = newnode;
	}
	
}

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


void createMatrix()
{
	int i,j, E1, E2;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
			graph[i][j] = 0;
	}

	for(i=0;i<E;i++)
	{
		scanf("%d", &E1);
		scanf("%d",&E2);
		graph[E1][E2] = 1;
		if(type == 2)
			graph[E2][E1] = 1;
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

void bfslist(int S)
{
	int X;
	struct AdjList *ptr;
	enqueue(S);
	while((FRONT != -1) && (REAR != -1))
	{
		X= dequeue();
		if(!isVisited(X))	
		{
			visit[X] =1;
			printf("%d\t",X);
			ptr=Vtx[X];
			while(ptr != NULL)
			{
				enqueue(ptr->key);
				ptr = ptr->next;
			}
		}	
	}
	printf("\n");

}



int main ()
{
	//display_graph();
	//bfs(0);
	int E1,E2,i;
	printf("Enter the number of vertices : \t");
	scanf("%d",&V);
	//getMatrix(V);

	printf("Enter the type of graph (Enter 1. directed graph\t 2. undirected)");
	scanf("%d",&type);

	printf("Enter the number of Edges : \t");
	scanf("%d",&E);
	printf("Enter the edges : ");
	//	Initialize Pointer Array	
	for(i=0;i<V;i++)
		Vtx[i] = NULL;
	for(i=0;i<E;i++)
	{
		scanf("%d", &E1);
		scanf("%d",&E2);
		createList(E1, E2);
		if(type==2)
			createList(E2, E1);
	//createMatrix();
	}
	
	printf("<---BFS Traversal--->\n");
	bfslist(0);
	
	

	return 0;
}	


	
