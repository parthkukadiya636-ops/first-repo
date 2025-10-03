#include <stdio.h>

// Struct definition here

int main() {
    FILE *ptr;
    // Open the file before entering the loop
    ptr = fopen("record.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file can't be opened
    }

    // Array definition and printf
    // Loop to read and write data
    
    for(int i=0; i<100; i++) {
        // Your scanf statements here
        printf("\nid:");
        scanf("%d", &comp[i].id);

        printf("name:");
        // Corrected scanf with a space before %s
        scanf(" %s", comp[i].name);

        // fprintf statement inside the loop with newline
        fprintf(ptr, "id:%d name:%s\n", comp[i].id, comp[i].name);
    }

    // Close the file after the loop finishes
    fclose(ptr);

    return 0;
}