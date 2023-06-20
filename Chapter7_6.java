import java.util.*;
public class Chapter7_6 {
    public static void main(String[] args){
        HashMap<String,Location> hashMap = new HashMap<>();
        System.out.println("도시경도,위도를 입력하세요.");
        Scanner scanner = new Scanner(System.in);
        for (int i=0;i<4;i++){
            System.out.print(">> ");
            String str = scanner.nextLine();
            StringTokenizer sT = new StringTokenizer(str,",");
            String tmp = sT.nextToken().trim();
            int l = Integer.parseInt(sT.nextToken().trim());
            int h = Integer.parseInt(sT.nextToken().trim());
            Location location = new Location();
            location.l = l;
            location.h = h;
            location.city = tmp;
            hashMap.put(tmp,location);
        }
        System.out.println("--------------------------");
        Set<String> set = hashMap.keySet();
        Iterator<String> it = set.iterator();
        while (it.hasNext()){
            String tmp = it.next();
            System.out.println(tmp+" "+hashMap.get(tmp).l+" "+hashMap.get(tmp).h);
        }
        System.out.println("--------------------------");
        while (true){
            System.out.print("도시이름 >> ");
            String tmp = scanner.nextLine();
            if (tmp.equals("그만")){
                break;
            }
            if (hashMap.get(tmp) == null){
                System.out.println(tmp+"는(은) 없습니다.");
            }
            else {
                System.out.println(tmp+" "+hashMap.get(tmp).l+" "+hashMap.get(tmp).h);
            }
        }
    }
}
