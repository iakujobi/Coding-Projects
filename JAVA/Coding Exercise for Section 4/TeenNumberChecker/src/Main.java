public class Main {

    public static void main(String[] args) {

        boolean found = TeenNumberChecker.hasTeen(9, 99, 19);
        System.out.println(found);

        found = TeenNumberChecker.hasTeen(23, 15, 42);
        System.out.println(found);

        found = TeenNumberChecker.hasTeen(22, 23, 34);
        System.out.println(found);

        found = TeenNumberChecker.hasTeen(0, 0, 0);
        System.out.println(found);

        boolean isFound = TeenNumberChecker.isTeen(9);
        System.out.println(isFound);

        isFound = TeenNumberChecker.isTeen(13);
        System.out.println(isFound);
    }
}
