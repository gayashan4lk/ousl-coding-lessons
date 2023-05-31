import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a whole number: ");
        int number = scanner.nextInt();

        if ((number % 2) == 0) {
            System.out.println("The number you entered is a even number");
        } else {
            System.out.println("The number you entered is a odd number");
        }
    }
}