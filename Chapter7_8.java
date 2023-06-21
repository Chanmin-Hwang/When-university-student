import java.util.*;

public class Chapter7_8 {
    public static void main(String[] args){
        System.out.println("** 포인트 관리 프로그램입니다 **");
        String str;
        int value;
        HashMap<String,Integer> hashMap = new HashMap<>();
        Scanner scanner = new Scanner(System.in);
        while(true){
            System.out.print("이름과 포인트 입력>> ");
            str = scanner.next();
            if(str.equals("그만")){break;}
            value = scanner.nextInt();
            if (hashMap.get(str) == null){
                hashMap.put(str,value);
            }
            else{
                int tmp = hashMap.get(str)+value;
                hashMap.put(str,tmp);
            }
            Set<String> set = hashMap.keySet();
            Iterator<String> it = set.iterator();
            while (it.hasNext()){
                str = it.next();
                System.out.print("("+str+","+hashMap.get(str)+")");
            }
            System.out.println();
        }
    }
}
