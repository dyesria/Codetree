import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int count = 0;

        while (true) {
            if (N == 1) {
                break;
            }
            count++;

            if( isOdd(N) ) {
                N = N * 3 + 1;
            } else if ( isEven(N) ) {
                N = N / 2;
            }
        }

        System.out.print(count);
    }

    private static boolean isOdd(int N) {
        return N % 2 != 0;
    }

    private static boolean isEven(int N) {
        return N % 2 == 0;
    }
}