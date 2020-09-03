public class Main {

    public static void main(String[] args) {

        boolean found = PlayingCat.isCatPlaying(true, 10);
        System.out.println(found);

        found = PlayingCat.isCatPlaying(false, 36);
        System.out.println(found);

        found = PlayingCat.isCatPlaying(true, 10);
        System.out.println(found);

        found = PlayingCat.isCatPlaying(true, 45);
        System.out.println(found);

        found = PlayingCat.isCatPlaying(true, 46);
        System.out.println(found);

        found = PlayingCat.isCatPlaying(false, 45);
        System.out.println(found);


    }
}
