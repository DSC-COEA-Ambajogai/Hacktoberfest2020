import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int x = 0 ;
        int y = 1;
        int count = 2;

        while(count <=num){
            int temp = y;
            y = y + x;
            x = temp;
            count++;
        }
        System.out.println(y);

    }
}
