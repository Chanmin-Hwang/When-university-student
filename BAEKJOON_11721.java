import java.util.Scanner;

public class BAEKJOON_11721 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        int start = 0;
        int end = 10;
        if (end > str.length()){
            end = str.length();
            System.out.println(str.substring(start,end));
            return;
        }
        while (true){
            System.out.println(str.substring(start,end));
            if (end == str.length()){
                break;
            }
            start += 10;
            end += 10;
            if (end > str.length()){
                end = str.length();
            }
        }
    }
}
