package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {

        //variable created outside the code block
        boolean gameOver = true;
        int score = 1000;
        int levelCompleted = 5;
        int bonus = 100;

//        if (score < 5000 && score > 1000) {
//            //the CURLY BRACES {} forms a CODE-BLOCK
//            System.out.println("Your score was less than 5000 but greater than 1000");
//            System.out.println("This was executed");
//        }
//        else if (score < 1000) {
//            System.out.println("Your score was less than 1000");
//        }
//        else {
//            System.out.println("Got here");
//        }

        if (gameOver) { //gameOver == true
            int finalScore = score + (levelCompleted * bonus);
            System.out.println("Your final score was " + finalScore);
        }


        boolean newGameOver = true;
        int newScore = 10000;
        int newLevelCompleted = 8;
        int newBonus = 200;

        if (gameOver) {
            int finalScore = newScore + (newLevelCompleted * newBonus);
            System.out.println("Your new final score " + finalScore);
        }

    }
}
