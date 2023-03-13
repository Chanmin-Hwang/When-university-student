#include <stdio.h>
#include <stdlib.h>

int pc[101][101];
int visited[101];
int virus;

void check_connect(int n, int k);

int main (void)
{
    int n, con;
    int x, y;
    
    scanf("%d", &n);
    scanf("%d", &con);
    for(int i=0; i<con; i++)
	{
        scanf("%d %d", &x, &y);
        pc[x][y] = 1;
        pc[y][x] = 1;
        
    }
    visited[1] = 1;
    check_connect(n, 1);
    
    printf("%d\n", virus);
}
void check_connect(int n, int k)
{
    for(int i=1; i<=n; i++)
	{
        if(visited[i] == 0 && pc[k][i] == 1)
		{
            visited[i] = 1;
            check_connect(n, i);
            virus ++;
            
        }
    }
}
