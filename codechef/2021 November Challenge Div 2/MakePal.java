import java.util.Scanner;

public class MakePal {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t > 0) {
            int n = s.nextInt();
            int count = 0;
            while(n>0) {
                long temp = s.nextLong();
                count+=(temp%2);
                n--;
            }
            System.out.println((int)(count/2));
            t--;
        }

    }
}
