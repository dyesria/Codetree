import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scanner = new Scanner(System.in);

        String numString = scanner.next();

        int num = Integer.parseInt(numString);

        for (int i = 1; i <= num; i++) {

            if (i != num) {
                printList(i);
                continue;
            }

            printLast(i);
        }
    }

    private static void printList(int i) {
        System.out.print(i + " ");
    }

    private static void printLast(int i) {
        System.out.print(i);
    }
}