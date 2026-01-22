import java.util.Scanner;

public class BubbleSortIterations 
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

            System.out.println("\nPass " + (i + 1));

            for (int j = 0; j < n - 1 - i; j++) 
{
                if (arr[j] > arr[j + 1]) 
{
                    
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }

            
            for (int k = 0; k < n; k++) 
{
                System.out.print(arr[k] + " ");
            }
        }
    }
}
