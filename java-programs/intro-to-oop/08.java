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

        double fenceCost = perimeter * 500;
        double grassCost = area * (430 / 10);

        System.out.println("Cost of fence : "+ fenceCost);
        System.out.println("Cost of laying grass : "+ grassCost);
    }
}