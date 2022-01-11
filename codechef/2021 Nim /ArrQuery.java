import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ArrQuery {
    public static int findCount(int n,long arr[], int l, int r, long x) {
        int left = l , right = r;
        if(arr[l] >= x) {
            return r-l+1;
        }
        if(arr[r] < x) {
            return 0;
        }
        while(l<=r) {
            int mid = (r-l)/2+l;
            if(arr[mid] >= x) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        return (right - l + 1) + (arr[r] >= x ? 1: 0);
    }
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt() , q = s.nextInt();
        long arr[] = new long[n];
        int i;
        for(i=0;i<n;i++) {
            arr[i] = s.nextInt();
        }
        for(i=0;i<q;i++) {
            System.out.println("Ans = "+findCount(n,arr,s.nextInt()-1,s.nextInt()-1,s.nextLong()));
        }
    }
}
