#include <stdio.h>
#include <string.h>

void processCommand(char* command) {
    if (strcmp(command, "greet") == 0) {
        printf("হ্যালো মাদারবোর্ড, তোর জন্য কি করতে পারি?\n");
    } else if (strcmp(command, "farewell") == 0) {
        printf("ভাগ মাদারবোর্ড, দূরে যাইয়া মর!\n");
    } else {
        printf("মাদারবোর্ড কি কইলি বুঝলাম না\n");
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
