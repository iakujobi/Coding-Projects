public class Main {

    public static void main(String[] args) {

        boolean found = EqualSumChecker.hasEqualSum(1, 1, 1);
        System.out.println(found);

        found = EqualSumChecker.hasEqualSum(1, 1, 2);
        System.out.println(found);

        found = EqualSumChecker.hasEqualSum(1, -1, 0);
        System.out.println(found);
    }
}
