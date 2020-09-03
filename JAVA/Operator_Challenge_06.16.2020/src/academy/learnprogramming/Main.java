package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {

        double num1 = 20.00d, num2 = 80.00d;
        double sumProduct = (num1 + num2) * 100.00d;
        System.out.println("My Total Value is " + sumProduct);

        double remainder = sumProduct % 40.00d;
        System.out.println("The Remainder is " + remainder);

        boolean isNoRemainder = (remainder == 0) ? true : false;
        System.out.println("NO remainder is " + isNoRemainder);

        if (!isNoRemainder) {
            System.out.println("Got some remainder");
        }



    }
}
