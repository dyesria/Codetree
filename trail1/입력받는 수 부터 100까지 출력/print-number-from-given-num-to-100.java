import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Please write your code here.
        Scanner scanner = new Scanner(System.in);

        String num = scanner.next();

        int toNum = Integer.parseInt(num);

        for(int i = toNum; i <= 100; i++) {
            if (i == 100) {
                System.out.print(i);    
                break;
            }
            System.out.print(i + " ");
        }
    }
}