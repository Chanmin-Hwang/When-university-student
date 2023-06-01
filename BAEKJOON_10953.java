import java.util.Scanner;

public class BAEKJOON_10953 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int T,A,B;
        T = scanner.nextInt();
        for (int i=0;i<T;i++){
            String str = scanner.next();
            String[] arr = str.split(",");
            A = Integer.parseInt(arr[0]);
            B = Integer.parseInt(arr[1]);
            System.out.println(A+B);
        }
    }
}
