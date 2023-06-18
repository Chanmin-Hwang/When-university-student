import java.util.*;

public class Chapter7_2 {
    public static void main(String[] args) {
        ArrayList<String> arrL = new ArrayList<>();
        String str;
        double sum = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("6개의 학점을 빈 칸으로 분리 입력(A/B/C/D/F)>>");
        str = scanner.nextLine();
        StringTokenizer sT = new StringTokenizer(str, " ");
        while (sT.hasMoreTokens()) {
            arrL.add(sT.nextToken());
        }
        Iterator<String> it = arrL.iterator();
        while (it.hasNext()) {
            String tmp = it.next();
            if (tmp.equals("A")) {
                sum = sum + 4.0;
            }
            else if (tmp.equals("B")) {
                sum = sum + 3.0;
            }
            else if (tmp.equals("C")) {
                sum = sum + 2.0;
            }
            else if (tmp.equals("D")) {
                sum = sum + 1.0;
            }
            else if (tmp.equals("F")) {
                sum = sum + 0.0;
            }
        }
        System.out.println(sum/6);
    }
}
