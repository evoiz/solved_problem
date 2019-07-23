import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String sn = s.nextLine();
        int n = Integer.valueOf(sn);
        String a = s.nextLine();
        String b = s.nextLine();

        int[] c = new int[n];
        int[] d = new int[n];
        int[] e = new int[n];

        for (int i = 0; i < n; i++) {
            c[i] = a.charAt(i) - 'a';
            d[i] = b.charAt(i) - 'a';
        }

        for (int i = 0; i < n; i++) {
            e[i] = d[i] - c[i];
            if (e[i] < 0) {
                e[i - 1]--;
                e[i] += 26;
            }
        }

        for (int i = 0; i < n; i++) {
            int k = e[i] % 2;
            e[i] /= 2;
            if (i < n - 1) {
                e[i + 1] += k * 26;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            e[i] += c[i];
            if (e[i] >= 26) {
                e[i] -= 26;
                e[i - 1] += 1;
            }
            if (e[i] < 0) {
                e[i] += 26;
                e[i - 1] -= 1;
            }
        }

        for (int value : e) {
            char cc = (char)('a' + value);

            System.out.print(cc);
        }
    }
}