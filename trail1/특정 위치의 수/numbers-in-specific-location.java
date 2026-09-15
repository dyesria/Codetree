import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] arr = new int[10];
        int sum = 0;

        for (int i = 0; i < 10; i++) {
            arr[i] = scanner.nextInt();

            if (isTrue(i)) {
                sum += arr[i];
            }
        }

        System.out.print(sum);
        
    }

    private static boolean isTrue(int n) {
        if (n == 2) {
            return true;
        }
        if (n == 4) {
            return true;
        }
        if (n == 9) {
            return true;
        }
        return false;
    }
}