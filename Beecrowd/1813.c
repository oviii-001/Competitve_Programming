#include <stdio.h>

int main()
{
    int N, M, count = 0;
    int Tickets[10001] = {0};

    scanf("%d %d", &N, &M);

    for (int i=0; i<M; i++){
        int TicketNumber;
        scanf("%d", &TicketNumber);

        Tickets[TicketNumber]++;

        if(Tickets[TicketNumber] > 1){
            count++;
        }

    }
    printf("%d\n", count);

    return 0;
}
