#include <stdio.h>
int main()
{
    int startH, startM, endH, endM;
    scanf("%d%d%d%d", &startH, &startM, &endH, &endM);

    int game_time_minute=((endH-startH)*60)+(endM-startM);

    if(game_time_minute<0){
        game_time_minute += 24*60;
    }
    int game_time_hour=game_time_minute/60;
    game_time_minute%=60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", game_time_hour, game_time_minute);



return 0;



}
