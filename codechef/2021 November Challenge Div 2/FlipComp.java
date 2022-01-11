import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FlipComp {
    public static class Point {
        public char ch;
        public int len;
        public Point(char ch, int len) {
            this.ch = ch;
            this.len = len;
        }
        public String toString() {
            return "[ch - "+ch+" , len = "+len+"]";
        }
    }
    public static int findCount(List<Point> list , char ch) {
        int ans = 0 , len = list.size();
//        System.out.println("ch - " + ch);
        for(int i=0;i<len;i++) {
            if(list.get(i).ch != ch && i > 0 && i < len-1 && list.get(i).len == 1 && list.get(i-1).len>1 && list.get(i+1).len>1) {
                ans++;
//                System.out.print(i +", ");
            }
        }
//        System.out.println();
        return ans;
    }
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while(t>0) {
            int val1 = 0 , val0 = 0;
            List<Point> list = new ArrayList<Point>();
            String str = s.nextLine();
            int n = str.length();
            for(int i=0;i<n;i++) {
                int j = i+1;
                while(j <n && str.charAt(j) == str.charAt(i)) {
                    j++;
                }
                list.add(new Point(str.charAt(i) , j-i));
                if(str.charAt(i) == '0') {
                    val1+=((j-i ==1) ? 1: 2 );
                } else {
                    val0+=((j-i ==1) ? 1: 2 );
                }
                i=j-1;
            }
//            System.out.println(list.toString());
//            System.out.println(val1+ " " + val0);
            val0-=findCount(list,'0');
            val1-=findCount(list,'1');
//            System.out.println(val1+ " " + val0);
            System.out.println(val0<val1? val0:val1);
            t--;
        }
    }
}
