import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Hydrated {
    public static void main(String args[]) {
        int t;
        Scanner s  = new Scanner(System.in);
        t = s. nextInt();
        for(int i = 1; i <=t;i++) {
            long n = s.nextLong() , x1,x2,y1,y2 , temp;
            temp = n;
            List<Long> xList = new ArrayList<Long>(), yList = new ArrayList<Long>();
            while(temp>0) {
                x1 = s.nextLong();y1 = s.nextLong();x2 = s.nextLong();y2 = s.nextLong();
                xList.add(x1);
                xList.add(x2);
                yList.add(y1);
                yList.add(y2);
                temp--;
            }
            xList.sort((a,b) -> (int)(a-b));
            yList.sort((a,b) -> (int)(a-b));
            System.out.println(xList);
            System.out.println(yList);
            long xAns = xList.get((int)n-1) , yAns = yList.get((int)n-1);
            System.out.println("Case #" + i + ": "+xAns + " " + yAns);
        }
    }
}
