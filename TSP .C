#include <stdio.h>
#include <limits.h>

#define N 4
#define VISITED_ALL (1 << N) - 1

int dist[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int dp[1 << N][N];

// Function for TSP using DP + Bitmasking
int tsp(int mask, int pos) {
    // If all cities visited, return to start
    if (mask == VISITED_ALL)
        return dist[pos][0];

    // If already computed
    if (dp[mask][pos] != -1)
        return dp[mask][pos];

    int ans = INT_MAX;

    // Try visiting unvisited cities
    for (int city = 0; city < N; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] +
                         tsp(mask | (1 << city), city);

            if (newAns < ans)
                ans = newAns;
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    // Initialize dp table
    for (int i = 0; i < (1 << N); i++)
        for (int j = 0; j < N; j++)
            dp[i][j] = -1;

    int result = tsp(1, 0); // Start from city 0
    printf("Minimum travelling cost: %d\n", result);

    return 0;
}
