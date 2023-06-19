import java.util.*;
public class Chapter7_4 {
    public static void main(String[] args){
        Vector<Integer> v = new Vector<>();
        Scanner scanner = new Scanner(System.in);
        int sum = 0;
        while(true){
            System.out.print("강수량 입력 (0 입력시 종료)>> ");
            int k = scanner.nextInt();
            if (k == 0){
                break;
            }
            v.add(k);
            sum = sum+k;
            Iterator<Integer> it = v.iterator();
            while (it.hasNext()){
                System.out.print(it.next()+" ");
            }
            System.out.println();
            System.out.println("현재 평균 "+sum/v.size());
        }
    }
}
