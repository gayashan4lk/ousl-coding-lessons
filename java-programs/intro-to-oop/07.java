import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the length: ");
        double length = scanner.nextDouble();

        System.out.println("Enter the width: ");
        double width = scanner.nextDouble();

        double perimeter = 2 * length + 2 * width ;
        double area = length * width;

        System.out.println("Perimeter : "+ perimeter);
        System.out.println("Area : "+ area);
    }
}