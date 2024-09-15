import java.util.Scanner;

public class ArithmeticOperations {
    private int num1, num2;
    private int sum, multiplication;
    private float divide;

    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Ask the user for the first number
        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt(); // Store first number

        // Ask the user for the second number
        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt(); // Store the second number

        // Output the entered numbers
        int sum = num1 + num2; // Sum of the numbers
        int multiplication = num1 * num2; // Multiplication of the numbers

        float divide;
        // Checks the num2 if it is zero
        if(num2 != 0){
            // num2 is not a zero, continue with division
            divide = (float) num1 / num2;
        }else{
            // num2 is zero, close the program and scanner to prevent resource leaks
            System.out.println("Division by zero is not allowed");
            scanner.close();
            return;
        }

        System.out.println("You entered: " + num1 + " and " + num2 + "\n");

        System.out.println("Sum is: " + sum + "\n");
        System.out.println("multiplication is: " + multiplication + "\n");

        System.out.println("divide is: " + String.format("%.2f", divide));

        // Close the scanner to prevent resource leaks
        scanner.close();
    }

    public int getNum1(){
        return num1;
    }
    public int getNum2(){
        return num2;
    }
    public int getSum(){
        return sum;
    }
    public int getMultiplication(){
        return multiplication;
    }
    public float getDivision(){
        return divide;
    }
}
