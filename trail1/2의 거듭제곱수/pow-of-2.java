import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int count = 0;

        while (N != 1) {
            if (N % 2 == 0) {
                N /= 2;
                count++;
            }
        }

        System.out.print(count);
    }
}