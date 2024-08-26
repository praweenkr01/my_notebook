public class j_02loop {

    public static void main(String[] args) {
        boolean correct=true;
        int count=0;
        while(correct){
            System.out.println(count);
            if (count==5)
                break;
            count++;
            
        }

        int i = 0;
        do {
        System.out.println(i);
        i++;
        }while(i<5);

        for (int j = 0; j < 5; j++) {
            System.out.print(j);
        }
 
        //for Each

        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        for (String y : cars) {
        System.out.println(y);
        }


    }
}
