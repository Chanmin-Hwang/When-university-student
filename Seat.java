public class Seat {
    String[] S = {" --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "};
    String[] A = {" --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "};
    String[] B = {" --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "," --- "};


    String idx = "SAB";
    void seat_Print(int position){
        System.out.print(idx.charAt(position-1)+">> ");

        for (String str : ReserveSystem.judgement(position)){
            System.out.print(str);
        }

        System.out.println();
    }

    void save(int position,String name,int number){
        String[] arr = ReserveSystem.judgement(position);
        arr[number-1] = name;
    }

    boolean delete(int position,String name){
        boolean flag = true;
        String[] arr = ReserveSystem.judgement(position);

        for (int i=0;i<10;i++){
            if (arr[i].equals(name)){
                arr[i] = " --- ";
                flag = false;
                break;
            }
        }
        return flag;
    }
}
