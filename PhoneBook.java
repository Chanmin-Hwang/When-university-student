import java.util.Scanner;

public class PhoneBook {
    public static void main(String[] args){
        String str;
        Scanner scanner = new Scanner(System.in);
        System.out.print("인원수>>");
        int n = scanner.nextInt();

        Phone[] arr = new Phone[3];
        for (int i=0;i<n;i++){
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸없이 입력)>>");
            arr[i] = new Phone();
            arr[i].name = scanner.next();
            arr[i].callNumber = scanner.nextLine();
        }
        System.out.println("저장되었습니다...");
        while (true){
            System.out.print("검색할 이름>>");
            str = scanner.nextLine();
            if (str.equals("그만")){
                break;
            }
            else {
                for (int i=0;i<n;i++){
                    if (str.equals(arr[i].name)) {
                        System.out.println(str + "의 번호는 " + arr[i].callNumber + " 입니다.");
                        break;
                    }
                    if (i==n-1){
                        System.out.println(str+"이 없습니다.");
                    }
                }
            }
        }
    }
}
