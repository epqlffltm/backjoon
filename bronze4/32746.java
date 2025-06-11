import java.util.Scanner;

public class 32746 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "SciComLove";
        int n = sc.nextInt();
        System.out.println(n % 2 == 0 ? s : new StringBuilder(s).reverse());
        sc.close();
    }
}
