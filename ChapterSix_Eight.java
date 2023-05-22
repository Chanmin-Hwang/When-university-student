import java.util.Scanner;

public class ChapterSix_Eight {
    public static void main(String[] args){
        System.out.println("문자열을 입력하세요. 빈칸이나 있어도 되고 영어 한글 모두 됩니다.");
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        String str1,str2;
        for (int i=1;i<str.length();i++){
            str1 = str.substring(i,str.length());
            str2 = str.substring(0,i);
            System.out.println(str1+str2);
        }
        System.out.println(str);
    }
}
