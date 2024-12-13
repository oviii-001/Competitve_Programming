<<<<<<< HEAD
import java.util.Scanner;
public class YogurtSale {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int TestCasa = input.nextInt();
        for(int i=0; i<TestCasa; i++){
            int NumberOfYogurtToBuy = input.nextInt();
            int PriceOfOne = input.nextInt();
            int PriceOfTwo = input.nextInt();

            int Case1 = NumberOfYogurtToBuy * PriceOfOne;
            int Case2 = ((NumberOfYogurtToBuy/2) *PriceOfTwo) + ((NumberOfYogurtToBuy%2) * PriceOfOne);

            System.out.println(Math.min(Case1, Case2));
        }
        input.close();
    }
}
=======
import java.util.Scanner;
public class YogurtSale {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int TestCasa = input.nextInt();
        for(int i=0; i<TestCasa; i++){
            int NumberOfYogurtToBuy = input.nextInt();
            int PriceOfOne = input.nextInt();
            int PriceOfTwo = input.nextInt();

            int Case1 = NumberOfYogurtToBuy * PriceOfOne;
            int Case2 = ((NumberOfYogurtToBuy/2) *PriceOfTwo) + ((NumberOfYogurtToBuy%2) * PriceOfOne);

            System.out.println(Math.min(Case1, Case2));
        }
        input.close();
    }
}
>>>>>>> cf62158 (13/12/2024 | 05:40 PM)
