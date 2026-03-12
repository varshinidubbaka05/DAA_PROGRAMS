#include<stdio.h>
#define INF 9999

int main()
{
    int n,i,j;
printf("ENTER NUMBER OF VERTICES:");
scanf("%d", &n);

 int cost[n][n], forward[n], backward[n];

    printf("Enter cost adjacency matrix (%d for no edge):\n", INF);
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &cost[i][j]);
        }
    }
    for(i = 0; i < n; i++)
        forward[i] = INF;

    forward[0] = 0;   

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(cost[i][j] != INF) 
            {
                if(forward[j] > forward[i] + cost[i][j]) 
                {
                    forward[j] = forward[i] + cost[i][j];
 }
            }
        }
    }

    printf("\nMinimum Cost using Forward Method: %d\n", forward[n-1]);
     
    for (i=0; i<n; i++)
    backward[i] = INF;

    backward[n-1] = 0;   

    for(i = n-2; i >= 0; i--) {
        for(j = i+1; j < n; j++) {
            if(cost[i][j] != INF) {
                if(backward[i] > cost[i][j] + backward[j]) {
                    backward[i] = cost[i][j] + backward[j];
                }
            }
        }
    }

    printf("Minimum Cost using Backward Method: %d\n", backward[0]);

    return 0;
}
