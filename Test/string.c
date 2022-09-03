#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int size; // parameter for size of words
    printf("Input number of strings : ");
    scanf("%d", &size);
    printf("\nInput %d strings: \n", size);

    // make array for word bank of size 'size'
    char words[25][50];
    // input data by console
    for (int i = 0; i < size; i ++)
    {
        scanf("%s", words[i]);
    }

    // bubble sort algorithm
    for (int i = size; i > 0; i--) {
        for (int j = 0; j < i-1; j++) {
            // cmp = 1 if words[j] > words[j+1]
            // cmp = 0 if words[j] = words[j+1]
            // cmp = -1 if words[j] < words[j+1]
            int cmp = strcmp(words[j], words[j+1]);
            printf("----------------------------------\n");
            for (int k = 0; k < size; k++) {
                    printf("%s\n", words[k]);
            }
            if (cmp > 0) {
            // swap two words if words[j] > words[j+1]
                char temp[50];
                strncpy(temp, words[j], 24);
                strncpy(words[j], words[j+1], 24);
                strncpy(words[j+1], temp, 24);
            }
        }
    }

    printf("The reversed order of words are below.\n");
    // print result
    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }
}
