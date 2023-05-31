import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        double num1 = scanner.nextDouble();

        System.out.println("Enter the second number: ");
        double num2 = scanner.nextDouble();

        double sum = num1 + num2;

        double product = num1 * num2;

        double average = (num1 + num2) / 2;

        System.out.println("Sum : "+ sum);
        System.out.println("Product : "+ product);
        System.out.println("Average : "+ average);
    }
}