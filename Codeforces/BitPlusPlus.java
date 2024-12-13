<<<<<<< HEAD
import java.util.Scanner;

public class BitPlusPlus {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();
    input.nextLine();

    int x = 0;
    
    for(int i=0;i<n;i++) {
        String statement = input.nextLine();

        if(statement.charAt(1)=='+'){
            x++;
        }
        else{
            x--;
        }
  } 
  System.out.println(x);
  
  input.close();
}
=======
import java.util.Scanner;

public class BitPlusPlus {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();
    input.nextLine();

    int x = 0;
    
    for(int i=0;i<n;i++) {
        String statement = input.nextLine();

        if(statement.charAt(1)=='+'){
            x++;
        }
        else{
            x--;
        }
  } 
  System.out.println(x);
  
  input.close();
}
>>>>>>> cf62158 (13/12/2024 | 05:40 PM)
}   