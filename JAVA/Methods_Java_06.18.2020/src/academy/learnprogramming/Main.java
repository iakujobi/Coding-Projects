package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {

        //all the statements under main code block is a method
        boolean gameOver = true;
        int score = 800;
        int levelCompleted = 5;
        int bonus = 100;

        int highScore = calculateScore(true, score, levelCompleted, bonus);
        System.out.println("Your final score was " + highScore);

        score = 10000;
        levelCompleted = 8;
        bonus = 200;

        highScore = calculateScore(true, score, levelCompleted, bonus);
        System.out.println("Your final score was " + highScore);

    }

    //we are creating our own METHOD, outside of the METHOD CALLED MAIN.
    //WE CAN'T HAVE TWO METHODS, ONE INSIDE ANOTHER

    public static int calculateScore(boolean gameOver, int score, int levelCompleted, int bonus) {

        if(gameOver) {
            int finalScore = score + (levelCompleted * bonus);

            finalScore += 2000;

            return finalScore;
        }

        return -1;
    }
}
