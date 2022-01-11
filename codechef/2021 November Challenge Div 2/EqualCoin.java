import java.util.Scanner;

public class EqualCoin {
    public static boolean find(long x,long y) {
        long total = x+(y*2);
        if((total%2) != 0)
            return false;
        if((total/2)%2 != 0 && x==0)
            return false;
        return true;
    }
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t>0) {
            if(find(s.nextLong(), s.nextLong())) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            t--;
        }
    }
}