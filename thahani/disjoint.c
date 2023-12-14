#include<stdio.h>


int parent[7],rank[7];
int k,z;

void makeset(int n)
{
    int i;
    for(i=1;i<(n+1);i++)
    {
        parent[i]=i;
        rank[i]=0;
    }

}

int findset(int n)
{
    if (parent[n]==n)
    {
        return n;
    }
    else
    {
         return parent[n]=findset(parent[n]);
    }
}

void un(int x,int y)
{
    int root1 = findset(x);
    int root2 = findset(y);
   
    if (root1!=root2)
    {    
        if(rank[root1]>rank[root2])
        {
                parent[root2]=root1;
              
        }
        else{
             parent[root1]=root2;
             
        }
        if(rank[root1]==rank[root2])
        {  rank[root2]++; }


    }

}

void disp(int n)
{
    int i;
    printf("\n index array : ");
     for(i=1;i<(n+1);i++)
    {
        printf("%d ",i);
       
    }
    printf("\n parent array: ");
    for(i=1;i<(n+1);i++)
    {
        printf("%d ",parent[i]);
       
    }
    printf("\n rank   array: ");
     for(i=1;i<(n+1);i++)
    {
        
        printf("%d ",rank[i]);

    }
}


int main()
{ 	int c;
   
	printf("enter the limit(max 7)\n");
    scanf("%d",&c);
    makeset(c);
    disp(c);
    un(1,2);
    printf("\n\n\nafter union(1,2):\n");
     disp(c);
    un(2,3);
    un(4,5);
    un(6,7);
    printf("\n\n\nafter union(2,3),union(4,5),union(6,7):\n");
     disp(c);
    un(5,6);
    printf("\n\n\nafter union(5,6):\n");
    disp(c);
    un(3,7);
    printf("\n\n\nafter union(3,7):\n");
    disp(c);
    
    
    
	return 0;
}
