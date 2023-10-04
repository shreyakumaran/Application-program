#include<stdio.h>
 
int ary[10][10],completed[10],n,cost=0;
 
void takeInput()
{
int i,j;
 
printf("Enter the number of villages: ");
scanf("%d",&n);
 
printf("\nEnter the Cost Matrix\n");
 
for(i=0;i < n;i++)
{
printf("\nEnter Elements of Row: %d\n",i+1);
 
for( j=0;j < n;j++)
scanf("%d",&ary[i][j]);
 
completed[i]=0;
}
 
printf("\n\nThe cost list is:");
 
for( i=0;i < n;i++)
{
printf("\n");
 
for(j=0;j < n;j++)
printf("\t%d",ary[i][j]);
}
}
 
void mincost(int city)
{
int i,ncity;
 
completed[city]=1;
 
printf("%d--->",city+1);
ncity=least(city);
 
if(ncity==999)
{
ncity=0;
printf("%d",ncity+1);
cost+=ary[city][ncity];
 
return;
}
 
mincost(ncity);
}
 
int least(int c)
{
int i,nc=999;
int min=999,kmin;
 
for(i=0;i < n;i++)
{
if((ary[c][i]!=0)&&(completed[i]==0))
if(ary[c][i]+ary[i][c] < min)
{
min=ary[i][0]+ary[c][i];
kmin=ary[c][i];
nc=i;
}
}
 
if(min!=999)
cost+=kmin;
 
return nc;
}
 
int main()
{
takeInput();
 
printf("\n\nThe Path is:\n");
mincost(0); //passing 0 because starting vertex
 
printf("\n\nMinimum cost is %d\n ",cost);
 
return 0;
}
ALGORITHM:
Algorithm TSP
Travelling salesman problem takes a graph G {V, E} as an input and declare another graph as the output which will record the path the salesman is going to take from one node to another.

The algorithm begins by sorting all the edges in the input graph G from the least distance to the largest distance.

The first edge selected is the edge with least distance, and one of the two vertices (say A and B) being the origin node (say A).

Then among the adjacent edges of the node other than the origin node (B), find the least cost edge and add it onto the output graph.

Continue the process with further nodes making sure there are no cycles in the output graph and the path reaches back to the origin node A.

However, if the origin is mentioned in the given problem, then the solution must always start from that node only. Let us look at some example problems to understand this better.
