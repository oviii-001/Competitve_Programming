#include <stdio.h>
#include <string.h>

void greetUser(void) {
    char name[50];
    printf("Hello! What's your name? ");
    scanf("%s", name);
    printf("Nice to meet you, %s!\n", name);
}

void askHowAreYou(void) {
    char response[50];
    printf("How are you doing today? ");
    scanf("%s", response);
    printf("I'm glad to hear that, %s.\n", response);
}

void askWhereDoYouLive(void) {
    char city[50];
    printf("Where do you live? ");
    scanf("%s", city);
    printf("Interesting! I've always wanted to visit %s.\n", city);
}

int main(void) {
    greetUser();
    askHowAreYou();
    askWhereDoYouLive();
    return 0;
}
