package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {

        byte myByteValue = 10;
        short myShortValue = 20;
        int myIntValue = 50;

        long myNewLongValue = 50000 + 10 * (myByteValue + myShortValue + myIntValue);
        System.out.println(myNewLongValue);

        short shortTotal = (short) (1000 + 10 *
                (myByteValue + myShortValue + myNewLongValue));
        System.out.println(shortTotal);
    }
}
