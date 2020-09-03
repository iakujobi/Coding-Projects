public class Main {

    public static void main(String[] args) {

        boolean leapYear = LeapYear.isLeapYear(-1600);
        System.out.println(leapYear);

        leapYear = LeapYear.isLeapYear(1600);
        System.out.println(leapYear);

        leapYear = LeapYear.isLeapYear(2017);
        System.out.println(leapYear);

        leapYear = LeapYear.isLeapYear(2000);
        System.out.println(leapYear);

        leapYear = LeapYear.isLeapYear(1700);
        System.out.println(leapYear);
    }
}
