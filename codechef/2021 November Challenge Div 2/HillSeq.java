import java.util.HashMap;
import java.util.Map;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class HillSeq {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t > 0) {
            int n = s.nextInt();
            List<Long> list1 = new LinkedList<Long>(), list2 = new LinkedList<Long>();
            Map<Long, Integer> hash = new HashMap<Long, Integer>();
            boolean inValid = false;
            while(n>0) {
                long temp = s.nextLong();
                if(!inValid) {
                    if (hash.containsKey(temp)) {
                        int val = hash.get(temp);
                        if (val == 2) {
                            inValid = true;
                        }
                        hash.put(temp, val + 1);
                        list2.add(temp);
                    } else {
                        list1.add(temp);
                        hash.put(temp, 1);
                    }
                }
                n--;
            }
            if(inValid) {
                System.out.println(-1);
                t--;
                continue;
            }
            list1.sort((a,b) -> (int)(b - a));
            list2.sort((a,b) -> (int)(a-b));
            if(hash.get(list1.get(0)) == 2) {
                System.out.println(-1);
                t--;
                continue;
            }
            list2.addAll(list1);
            for(Long val: list2) {
                System.out.print(val.longValue() +" ");
            }
            System.out.println();
            t--;
        }

    }
}
