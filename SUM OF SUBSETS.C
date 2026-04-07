#include <stdio.h>

int w[10], x[10];
int n, target;

// Function to find subsets
void subset(int sum, int k) {
    if (sum == target) {
        printf("Subset: ");
        for (int i = 0; i < k; i++) {
            if (x[i] == 1)
                printf("%d ", w[i]);
        }
        printf("\n");
        return;
    }

    if (k >= n || sum > target)
        return;

    // Include current element
    x[k] = 1;
    subset(sum + w[k], k + 1);

    // Exclude current element
    x[k] = 0;
    subset(sum, k + 1);
}

int main() {
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &w[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    subset(0, 0);

    return 0;
}
