public class BarkingDog {

    public static boolean shouldWakeUp(boolean barking, int hourOfDay) {

        if (hourOfDay < 0 || hourOfDay > 23) {
            return false;
        }

        while (barking) {
            if (hourOfDay < 8 || hourOfDay > 22) {
                return true;
            } else
                return false;
        }

        return false;
    }

}
