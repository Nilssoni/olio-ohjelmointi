import java.util.Scanner;

public class userInfo {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        // Get user's name
        System.out.print("Type your name: ");
        String name = scanner.nextLine();

        // Get user's age
        System.out.print("Type your age: ");
        int age = scanner.nextInt();

        // Print welcome message
        System.out.println("Welcome " + name + "! You are " + age + " years old.");
        scanner.close();
    }
}
