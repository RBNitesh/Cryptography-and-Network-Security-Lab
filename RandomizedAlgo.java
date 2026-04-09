import java.util.Random;
import java.util.Scanner;

public class RandomizedAlgo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        System.out.print("Enter the no. of Elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = rand.nextInt(100); // enter elements btw 0 to 99
        }

        System.out.print("Enter element to be searched: ");
        int key = sc.nextInt();

        System.out.print("Enter no. of attempts: ");
        int attempts = sc.nextInt();

        boolean found = false;
        for (int i = 0; i < attempts; i++) {
            int idx = rand.nextInt(n); // random index
            if (arr[idx] == key) {
                found = !found;
                break;
            }
        }

        if (found) {
            System.out.println("Element found using Randomized Algorithm.");
        } else {
            System.out.println("Element not found using Randomized Algorithm.");
        }
        
        sc.close();
    }
}