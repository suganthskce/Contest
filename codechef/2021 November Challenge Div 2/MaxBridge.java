import java.util.Scanner;

public class MaxBridge {
    public static void main(String args[]) {
        long t;
        Scanner s = new Scanner(System.in);
        t = s.nextLong();
        while(t > 0) {
            long n = s.nextLong() , m = s.nextLong();
            long temp = n-1 , temp2 = 1;
            while(temp > 0) {
                System.out.println(temp2 + " " + (++temp2));
                temp--;
                m--;

            }
            temp2 = 3;
            while(m>0 && temp2<=n) {
                for(long i = 1; i <= temp2-2 && m>0; i++) {
                    System.out.println(i + " " + temp2);
                    m--;
                }
                temp2++;
            }
            t--;
        }
    }
}
