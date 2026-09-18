import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[10];

        int sum = 0;
        double avg = 0.0;

        for (int i=0; i < 10; i++) {
            arr[i] = scanner.nextInt();

            if (i % 2 != 0) {
                sum += arr[i];  
            }
        }

        int cnt = 0;
        int divide = 0;

        for (int i=0; i < 10; i++) {
            cnt++;

            if (cnt % 3 == 0) {
                avg += arr[i];
                divide++;
            }
        }

        avg /= divide;

        System.out.print(sum + " " + String.format("%.1f", avg));
    }
}