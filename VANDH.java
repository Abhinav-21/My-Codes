
class VANDH {

    public static int fact(int number) {
        int factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        return factorial;
    }

    public static void main(String[] args) throws java.lang.Exception {
        int num = 1;
        for (int i = 1; i <= 20; i++) {
            num *= fact(i);
        }
        System.out.print(num);
        // for (int j = 0; j <= 20; j++) {
        // if (java.lang.Math.sqrt(num / fact(j)) % 1 == 0) {
        // System.out.println(j + "! is to be removed");
        // }
        // }
    }
}
