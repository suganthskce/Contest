import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

public class WildRepl {
    public static void setBractIndex(int n, char arr[], int pos[]) {
        Stack<Integer> stack = new Stack<Integer>();
        for(int i = n-1 ; i >= 0; i--) {
            if(arr[i] == ')') {
                stack.push(i);
                pos[i] = -1;
            } else if(arr[i] == '(') {
                pos[i] = stack.pop();
            } else {
                pos[i] = -1;
            }
        }
    }
    public static int findAns(int n,int pos[],char arr[], int l, int r) {
        int ans = 1 , i, len = r-l+1;
        char []newArray = new char[len];
        for(i = 0; i < len; i++) {
            newArray[i] = arr[l+i];
        }
        for(i=0;i<len;i++) {
            if(newArray[i] == '-' && pos[i+1] != -1) {
                for(int j = i+2; j < len; j++) {
                    if(newArray[j] == '+')
                        newArray[j] = '-';
                    else if(newArray[j] == '-')
                        newArray[j] = '+';
                    if(newArray[j] == '(')
                        j = pos[j] -1;
                }
            } else if(newArray[i] == '+')
                ans++;
        }
        return ans;
    }
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();

        while (t>0) {
            s.nextLine();
            String pattern = s.nextLine();
            char []arr = pattern.toCharArray();
            int q , n = arr.length;
            q = s.nextInt();
            int index[] = new int[n];
            setBractIndex(n,arr,index);
            while(q > 0) {
                System.out.print(findAns(n,index,arr,s.nextInt() -1,s.nextInt() - 1)+" ");
                q--;
            }
            System.out.println();
            t--;
        }
    }
}
