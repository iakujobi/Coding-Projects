public class LeapYear {

    public static boolean isLeapYear(int year) {

        int days = 0;

        while (year >= 1 && year <= 9999) {
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        return true;
                    } else
                        return false;
                } else
                    return true;
            } else
                return false;

        }
        return false;
    }
}
