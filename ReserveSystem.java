import java.util.Scanner;

public class ReserveSystem {
    public static void main(String[] args){
        int code;
        Scanner scanner = new Scanner(System.in);

        System.out.println("명품콘서트홀 예약 시스템입니다.");

        while(true){
            do{
                System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4>>");
                code = scanner.nextInt();
                if ((code <= 0) || (code > 4)){
                    System.out.println("없는 메뉴입니다. 다시 입력하십시오.");
                }
            } while((code <= 0) || (code > 4));

            if (code == 4){
                break;
            }
            else if (code == 1){
                Menu.reserve();
            }
            else if (code == 2) {
                Menu.research();
            }
            else if (code == 3){
                Menu.cancellation();
            }
        }
    }

    static String[] judgement(int position){
        if (position == 1){
            return Menu.seat.S;
        }
        else if (position == 2){
            return Menu.seat.A;
        }
        return Menu.seat.B;
    }
}
