import java.util.Scanner;

public class SelectionSortIterations 
{
    public static void main(String[] args) 
{

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        
        for (int i = 0; i < n - 1; i++) 
{
            int minIndex = i;

            System.out.println("\nIteration " + (i + 1));

            for (int j = i + 1; j < n; j++) 
{
                if (arr[j] < arr[minIndex]) 
{
                    minIndex = j;
                }
            }

            
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;

            
            for (int k = 0; k < n; k++) 
{
                System.out.print(arr[k] + " ");
            }
        }
    }
}
