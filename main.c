#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char item[100]="";

    printf("Enter an item: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;  // Remove newline character
    printf("You entered: %s\n", item);
    return 0;
}