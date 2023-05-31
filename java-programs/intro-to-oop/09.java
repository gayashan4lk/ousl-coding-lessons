import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Marks for lab 1: ");
        double lab1 = scanner.nextDouble();

        System.out.println("Marks for lab 2: ");
        double lab2 = scanner.nextDouble();

        System.out.println("Marks for lab 3: ");
        double lab3 = scanner.nextDouble();

        System.out.println("Marks for lab 4: ");
        double lab4 = scanner.nextDouble();

        double average = (lab1 + lab2 + lab3 + lab4) / 4;

        System.out.println("Average lab mark" + average);
    }
}