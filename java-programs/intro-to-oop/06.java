import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the radius: ");
        double radius = scanner.nextDouble();

        double perimeter = 2 * Math.PI * radius;
        double area = Math.PI * radius * radius;

        System.out.println("Perimeter : "+ perimeter);
        System.out.println("Area : "+ area);
    }
}