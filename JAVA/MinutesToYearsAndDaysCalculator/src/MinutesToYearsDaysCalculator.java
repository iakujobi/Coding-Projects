public class MinutesToYearsDaysCalculator {

    public static void printYearsAndDays(long minutes) {

        if(minutes < 0) {
            System.out.println("Invalid Value");
        } else {

            long hours = minutes / 60;
            long days = hours / 24 ;
            long years = days / 365;

            long daysRemainder = (int) (minutes / 60 / 24) % 365;


            System.out.println(minutes + " min = " + years + " y and " + daysRemainder + " d");
        }
    }
}
