#include <stdio.h>

struct item 
{
    int profit;
    int weight;
    float ratio;
};

int main() 
{
    int n, capacity;
    float totalProfit = 0.0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct item items[n];

    printf("Enter profit and weight of each item:\n");
    for(int i = 0; i < n; i++) 
{
        scanf("%d %d", &items[i].profit, &items[i].weight);
        items[i].ratio = (float)items[i].profit / items[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

  
    for(int i = 0; i < n - 1; i++) 
{
        for(int j = i + 1; j < n; j++) 
{
            if(items[i].ratio < items[j].ratio)
{
                struct item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }

    
    for(int i = 0; i < n; i++) 
{
        if(capacity >= items[i].weight) 
{
            capacity -= items[i].weight;
            totalProfit += items[i].profit;
        } 
else 
{
            totalProfit += items[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum Profit = %.2f\n", totalProfit);

    return 0;
}
