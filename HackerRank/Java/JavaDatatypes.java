import java.util.Scanner;

public class JavaDatatypes {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int t = in.nextInt();

            for (int i = 0; i < t; i++) {
                long value = in.nextLong();
                System.out.println(value + " can be fitted in:");
                if (Byte.MIN_VALUE <= value && value <= Byte.MAX_VALUE) {
                    System.out.println(" * byte");
                }
                if (Short.MIN_VALUE <= value && value <= Short.MAX_VALUE) {
                    System.out.println(" * short");
                }
                if (Integer.MIN_VALUE <= value && value <= Integer.MAX_VALUE) {
                    System.out.println(" * int");
                }
                if (Long.MIN_VALUE <= value && value <= Long.MAX_VALUE) {
                    System.out.println(" * long");
                }
                if (!(Byte.MIN_VALUE <= value && value <= Byte.MAX_VALUE) &&
                    !(Short.MIN_VALUE <= value && value <= Short.MAX_VALUE) &&
                    !(Integer.MIN_VALUE <= value && value <= Integer.MAX_VALUE) &&
                    !(Long.MIN_VALUE <= value && value <= Long.MAX_VALUE)) {
                    System.out.println(" can't be fitted anywhere.");
                }
            }
        }
    }
}