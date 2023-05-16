import java.util.Scanner;

public class GraphicEditor{
    private Shape start,end; // 시작 끝 래퍼런스
    private int itemCount; // 저장된 아이템 개수
    GraphicEditor(){
        start = null; // 초기화
        end = null;
        itemCount = 0;
    }
    private void insert(int flag){
        Shape shape; // 먼저 틀 생성
        shape = null;

        if (flag == 1){shape = new Line();} // 케이스 별로 분기
        else if (flag == 2){shape = new Rect();}
        else if (flag == 3){shape = new Circle();}

        if (start == null){ // 원래 시작점이 없었으면 시작 끝의 래퍼런스를 설정
            start = shape;
            end = shape;
        }
        else { // 있었다면 끝을 바꿈
            end.setNext(shape);
            end = shape;
        }
        itemCount++; // 아이템 개수 증가
    }
    private void delete(int flag){
        if ((flag == 1) && (itemCount > flag)){ // 아이템 개수가 위치보다 큰데 시작점을 지우는 케이스
            itemCount--;
            start = start.getNext();
            return;
        }
        if (flag > itemCount){ // 위치가 아이템 개수보다 많으면 삭제할 수 없다고 출력
            System.out.println("삭제할 수 없습니다.");
            return;
        }
        else if (flag == itemCount){ //위치와 아이템개수가 같은 케이스를 분기
            if (start == end){start = end = null;} // 시작과 끝이 같은 케이스
            else { // 끝만 지우려는 케이스
                Shape current = start,former = null;
                while (true){
                    former = current;
                    current = current.getNext();
                    if (current == end){break;}
                }
                end = former;
                former.setNext(null);
            }
        }
        else { // 그 외에 케이스
            Shape current = start,former = null;
            for (int i=1;i<flag;i++){
                former = current;
                current = current.getNext();
            }
            former.setNext(current.getNext());
        }
        itemCount--;
    }
    private void print(){ // 모두 출력
        Shape current;
        current = start;
        while (current != null){
            current.draw(); // 구현한 메소드 사용
            current = current.getNext();
        }
    }
    public static void main(String[] args){
        System.out.println("그래픽 에디터 beauty을 실행합니다.");
        int flag;
        GraphicEditor ge = new GraphicEditor(); // 핸들러
        Scanner scanner = new Scanner(System.in);
        while (true){
            System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4)>>");
            flag = scanner.nextInt();

            if (flag == 1){
                System.out.print("Line(1), Rect(2), Circle(3)>>");
                int shapeNumber = scanner.nextInt(); // 원래 밖에서 스캐너 래퍼런스 생성하고 해당 메소드 안에서 구현하려 했는데 static에서 초기화하면 그럴 수 없어서 못함
                ge.insert(shapeNumber);
            }
            else if (flag == 2){
                System.out.print("삭제할 도형의 위치>>");
                int deleteNumber = scanner.nextInt();
                ge.delete(deleteNumber);
            }
            else if (flag == 3){ge.print();}
            else if (flag == 4){
                System.out.println("beauty을 종료합니다.");
                break;
            }
        }
    }
}