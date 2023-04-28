import java.util.Scanner;

public class Menu {
    static Seat seat = new Seat();
    static int position,number;
    static String str;
    static Scanner scanner = new Scanner(System.in);
    static void reserve(){
        do{
            System.out.print("좌석구분 S(1), A(2), B(3)>>");
            position = scanner.nextInt();
            if ((position < 1) || (position > 3)){
                System.out.println("없는 좌석입니다. 다시 입력하시십시오.");
            }
        }while((position < 1) || (position > 3));

        seat.seat_Print(position);

        System.out.print("이름>>");
        str = scanner.next();

        do {
            System.out.print("번호>>");
            number = scanner.nextInt();
            if ((number < 0) || (number >= 10)) {
                System.out.println("없는 번호입니다. 다시 입력하십시오.");
            }
        } while ((number < 0) || (number >= 10));

        seat.save(position,str,number);
    }

    static void research(){
        for (int i=1;i<=3;i++){
            seat.seat_Print(i);
        }
        System.out.println("<<<조회를 완료하였습니다.>>>");
    }

    static void cancellation(){
        boolean flag;

        do{
            System.out.print("좌석 S:1, A:2, B:3>>");
            position = scanner.nextInt();
            if ((position < 1) || (position > 3)){
                System.out.println("잘못된 취소입니다. 다시 입력하시십시오.");
            }
        }while((position < 1) || (position > 3));

        seat.seat_Print(position);

        do {
            System.out.print("이름>>");
            str = scanner.next();
            flag = seat.delete(position, str);
            if (flag){
                System.out.println("없는 이름입니다. 다시 입력하십시오.");
            }
        }while(flag);
    }
}
