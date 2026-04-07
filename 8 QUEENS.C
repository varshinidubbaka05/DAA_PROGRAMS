#include <stdio.h>

#define N 8

int board[N];

// Check if it's safe to place queen
int isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        // Same column or diagonal
        if (board[i] == col || 
            abs(board[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

// Solve using backtracking
void solve(int row) {
    if (row == N) {
        // Print solution
        for (int i = 0; i < N; i++)
            printf("%d ", board[i]);
        printf("\n");
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    solve(0);
    return 0;
}
