#include <stdio.h>
#include <string.h>

void processCommand(char* command) {
    if (strcmp(command, "greet") == 0) {
        printf("Hello Motherboard, tomar jonno ki korte pari?\n");
    } else if (strcmp(command, "farewell") == 0) {
        printf("vaag motherboard, duree jaiya mor!\n");
    } else {
        printf("motherboard ki koili bujhlam na..\n");
    }
}

int main(void) {
    char command[50];

    while (1) {
        printf("Enter a command (greet, farewell, or exit): ");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) {
            break;
        }

        processCommand(command);
    }

    return 0;
}
