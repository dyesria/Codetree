import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int cnt = 0;

        while(N < 1000) {
            
            if (isEven(N)) {
                N = N * 3 + 1;
                cnt++;
                continue;
            } 

            if (isOdd(N)) {
                N = N * 2 + 2;
                cnt++;
                continue;
            }
        }
        
        System.out.print(cnt);
    }

    private static boolean isOdd(int N) {
        return N % 2 != 0;
    }

    private static boolean isEven(int N) {
        return N % 2 == 0;
    }
}