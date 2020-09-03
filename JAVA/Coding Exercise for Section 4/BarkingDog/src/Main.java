public class Main {

    public static void main(String[] args) {
        //type 'psvm' to initiate the 'main' method

        boolean isFound = BarkingDog.shouldWakeUp(true, 1);
        System.out.println(isFound);

        isFound = BarkingDog.shouldWakeUp(false, 2);
        System.out.println(isFound);

        isFound = BarkingDog.shouldWakeUp(true, 8);
        System.out.println(isFound);

        isFound = BarkingDog.shouldWakeUp(true, -1);
        System.out.println(isFound);
    }
}
