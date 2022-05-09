#include <iostream>
using namespace std;
//array of size 7 which is initialize to 0;
int Visited[10]={0,0,0,0,0,0,0};
//adjacency matrix of [7][7] which is marked as the graph edge
int A[7][7]={
            {0,0,0,1,0,1},
            {0,1,0,1,0,0},
            {1,0,0,1,0,0},
            {0,1,0,0,1,0},
            {0,0,1,0,0,1},
            {0,0,1,1,0,0},
            {0,0,0,0,1,0}
            };
 //creating a DFS function i which int i is the number whcih point to the starting edge
 //function itself is a stack
void DFS(int i)
{
    int j;
    //we will print that int i which is a visited
    cout<<i<<endl;
    Visited[i]=1;
    for(int j=0;j<7;j++)
    {
        //if array is having a edge and whxih is not in the visited list then 
        //call the function recursively for j
        if(A[i][j]==1&& !Visited[j])
        {
            DFS(j);
        }
    }
}


int main(){
    //DFS function called;
    // index 0 is the starting egde
    DFS(0);
    
    return 0;
}