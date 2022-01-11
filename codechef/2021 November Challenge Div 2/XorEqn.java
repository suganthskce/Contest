import java.util.Scanner;

public class XorEqn {
    public static long getOrValue(int n, long arr[]) {
        long value = 0;
        for(int i=0;i<n;i++)
            value^=arr[i];
        return value;
    }
    public static void shiftArray(int n, long arr[]) {
        for(int i = 0; i < n; i++) {
            arr[i]>>=1;
        }
    }
    public static void addValue(int n, long arr[]) {
        for(int i=0;i < n; i++) {
            arr[i]+=1;
        }
    }
    public static void main(String args[]) {
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        while(t > 0) {
            int n = s.nextInt() , i;
            long arr[] = new long[n], xorValue = 0 , sum = 0, pow = 1;
            for(i=0;i<n;i++) {
                arr[i] = s.nextLong();
                xorValue = xorValue^arr[i];
            }
            while(xorValue > 1) {
                long lasBit = (xorValue & 1);
                if(lasBit == 1) {
                    addValue(n,arr);
                    sum+=pow;
                }
                shiftArray(n,arr);
                pow<<=1;
                xorValue = getOrValue(n,arr);
            }
            if(xorValue == 1) {
                System.out.println(-1);
            } else {
                System.out.println(sum);
            }
            t--;
        }
    }
}
