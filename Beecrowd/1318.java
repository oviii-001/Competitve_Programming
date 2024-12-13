import java.util.Scanner;
public class 1318 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int M = scanner.nextInt();

        boolean[] SeenTickets = new boolean[N + 1];

        int FakeTickets = 0;

        for (int i = 0; i < M; i++) {
            int TicketNumber = scanner.nextInt();
            
            if (SeenTickets[TicketNumber]) {
                FakeTickets++;
            } else {
                SeenTickets[TicketNumber] = true;
            }
        }
        System.out.println(FakeTickets);

        input.close();
    }
}
