
import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {

    public static void rockPaperScissors(int i, char winner, String choice) {
        if (i == choice.length()) {
            System.out.print(winner);
            return;
        } else if (winner == 'R' && choice.charAt(i) == 'P') {
            winner = 'P';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == 'R' && choice.charAt(i) == 'S') {
            winner = 'R';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == 'S' && choice.charAt(i) == 'P') {
            winner = 'S';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == 'S' && choice.charAt(i) == 'R') {
            winner = 'R';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == 'P' && choice.charAt(i) == 'R') {
            winner = 'P';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == 'P' && choice.charAt(i) == 'S') {
            winner = 'S';
            rockPaperScissors(i + 1, winner, choice);
        } else if (winner == choice.charAt(i)) {
            winner = choice.charAt(i);
            rockPaperScissors(i + 1, winner, choice);
        } else {
            // pass
        }
        return;
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        String[] arr = new String[t];
        for (int i = 0; i < t; i++) {
            int players = in.nextInt();
            String choices = in.next();
            String res = "";

            for (int j = 0; j < players; j++) {
                char win = ' ';
                if (j == choices.length() - 1) {
                    System.out.println(choices.charAt(j));
                    break;
                } else if (choices.charAt(j) == choices.charAt(j + 1)) {
                    win = choices.charAt(j);
                } else if (choices.charAt(j) == 'R' && choices.charAt(j + 1) == 'P') {
                    win = 'P';
                } else if (choices.charAt(j) == 'R' && choices.charAt(j + 1) == 'S') {
                    win = 'R';
                } else if (choices.charAt(j) == 'P' && choices.charAt(j + 1) == 'S') {
                    win = 'S';
                } else if (choices.charAt(j) == 'P' && choices.charAt(j + 1) == 'R') {
                    win = 'P';
                } else if (choices.charAt(j) == 'S' && choices.charAt(j + 1) == 'P') {
                    win = 'S';
                } else if (choices.charAt(j) == 'S' && choices.charAt(j + 1) == 'R') {
                    win = 'R';
                }
                rockPaperScissors(j + 2, win, choices);
            }
            arr[i] = res;
        }

        in.close();
    }
}
