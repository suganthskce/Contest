import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class AlpDiff {
    public static void main(String args[]) {
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        s.nextLine();
        while(t-->0) {
            String a = s.nextLine(), b = s.nextLine();
            int i,aLength  = a.length(), bLength = b.length();
            Map<Character,Boolean> mapperA = new HashMap<>(), mapperB = new HashMap<>();
            for(i=0;i<aLength;i++) {
                mapperA.put(a.charAt(i),true);
            }
            for(i=0;i<bLength;i++) {
                mapperB.put(b.charAt(i),true);
            }
            boolean has = false;
            for(i=0;i<26;i++) {
                if(!mapperA.containsKey((char)('a'+i)) && mapperB.containsKey((char)('a'+i))) {
                    System.out.print((char)('a'+i));
                    has = true;
                }
            }
            if(has)
                System.out.println();
            else
                System.out.println(-1);
        }
    }
}
