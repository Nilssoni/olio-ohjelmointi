public class ArithmeticOperations_2 {
    public static void main(String[] args) {

        ArithmeticOperations operations = new ArithmeticOperations();

        int num1 = operations.getNum1();
        int num2 = operations.getNum2();
        int sum = operations.getSum();
        int multiplication = operations.getMultiplication();
        float divide = operations.getDivision();

        System.out.println(num1 + " + " + num2 + " = " + sum);
        System.out.println(num1 + " * " + num2 + " = " + multiplication);
        System.out.println(num1 + " / " + num2 + " = " + String.format("%.2f", divide));

    }
}
