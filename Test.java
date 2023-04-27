import java.util.Scanner;
import java.util.Random;

public class Test {

    public static void main(String[] args){
        int[] number = new int[101];
        Random random = new Random();
        int k,i=0;

        Scanner scanner = new Scanner(System.in);
        System.out.print("정수 몇개?");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        while (i < n){
            k = random.nextInt(99)+1;
            if (number[k] == 0){
                arr[i++] = k;
                number[k] = -1;
            }
        }

        for (i=0;i<n;i++){
            if ((i%10 == 0)&&(i != 0)){
                System.out.println();
            }
            System.out.print(arr[i]+" ");
        }
    }
}
