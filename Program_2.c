#include <stdio.h>
#include <string.h>

void printSize(char dataType[]) {
    if (strcmp(dataType, "Integer") == 0) {
        printf("4\n");
    } else if (strcmp(dataType, "Long") == 0) {
        printf("8\n");
    } else if (strcmp(dataType, "Float") == 0) {
        printf("4\n");
    } else if (strcmp(dataType, "Double") == 0) {
        printf("8\n");
    } else if (strcmp(dataType, "Character") == 0) {
        printf("1\n");
    } else {
        printf("Unknown data type\n");
    }
}

int main() {
    char dataType[20];
    printf("Enter data type: ");
    scanf("%s", dataType);
    
    printSize(dataType);

    return 0;
}

