import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class DivClass {
    public static boolean isValid(int n, int uniqueCount) {
        if(uniqueCount <=12 && n >= 12)
            return true;
        return false;
    }
    public static void main(String args[]) {
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        while(t-->0) {
            int n = s.nextInt() , uniqueCount = 0 , ele;
            Map<Integer, Boolean> mapper = new HashMap<>();
            for(int i = 0; i< n; i++) {
                ele = s.nextInt();
                if(!mapper.containsKey(ele)) {
                    mapper.put(ele,true);
                    uniqueCount++;
                }
            }
            if(isValid(n,uniqueCount))
                System.out.println("yes");
            else
                System.out.println("no");
        }
    }
}
