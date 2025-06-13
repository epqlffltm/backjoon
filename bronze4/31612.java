import java.util.Scanner;

public class 31612 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String S = sc.next();

        int sum = 0;
        for (int i = 0; i < N; i++) {
            char c = S.charAt(i);
            if (c == 'j' || c == 'i') sum += 2;
            else if (c == 'o') sum += 1;
        }

        System.out.println(sum);
        sc.close();
    }
}
