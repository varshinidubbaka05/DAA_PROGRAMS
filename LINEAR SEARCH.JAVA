import java.util.Scanner;

public class LinearSearchUserInput 
{
    public static void main(String[] args) 
{

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) 
{
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter element to search: ");
        int key = sc.nextInt();

        int pos = -1;

        
        for (int i = 0; i < n; i++) 
{
            if (arr[i] == key) 
{
                pos = i;
                break;
            }
        }

        if (pos != -1)
            System.out.println("Element found at index: " + pos);
        else
            System.out.println("Element not found");
    }
}
