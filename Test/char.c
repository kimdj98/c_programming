#include <stdio.h>
#include <stdbool.h>

// function prototype
int string_length(char str[]);
void string_concatenate(char result[], const char str1[], const char str2[]);
bool string_compare(const char str1[], const char str2[]);

// gloabl variables


int main ()
{
    char str1[] = "This is an example string. ";
    char str2[] = "second example string. ";
    char result[50];
    // testing function string_length
    printf("The length of the examples string is %d", string_length(str1));
    // testing function string_concatenate
    string_concatenate(result, str1, str2);
    printf("\nTher result of concatenation string is |%s|", result);
    // testing function string_compare
    printf("\nCheck if two strings are identical,(true case) %d", string_compare(str1, str1));
    printf("\nCheck if two strings are identical,(false case) %d", string_compare(str1, str2));
}

int string_length(char str[])
{
    int count;
    for(count = 0; str[count] != '\0'; count++);
    return count;
}

void string_concatenate(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != 0; ++i) {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != 0; ++j) {
        result[i+j] = str2[j];
    }
    result[i+j] = '\0';
}

bool string_compare(const char str1[], const char str2[])
{
    bool flag = true;
    if (string_length(str1) != string_length(str2)) {
        flag = false;
    } else {
        int l = string_length(str1);
        for (int i = 0; i < l; i++) {
            if (str1[i] != str2[i]) {
                flag = false;
            }
        }
    }
    return flag;
}
