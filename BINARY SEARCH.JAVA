import java.util.Scanner;

public class BinarySearchUserInput 
{
    public static void main(String[] args) 
{

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter sorted array elements:");
        for (int i = 0; i < n; i++) 
{
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter element to search: ");
        int key = sc.nextInt();

        int low = 0, high = n - 1;
        int pos = -1;

        
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == key) 
{
                pos = mid;
                break;
            }
else if (key < arr[mid])
{
                high = mid - 1;
            } 
else 
{
                low = mid + 1;
            }
        }

        if (pos != -1)
            System.out.println("Element found at index: " + pos);
        else
            System.out.println("Element not found");
    }
}
