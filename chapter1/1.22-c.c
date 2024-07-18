#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXCOL 10

void cutline(void);

int main() {
    cutline();
    return 0;
}

void cutline(void) {
    int input;
    int col_count = 0;
    char word[MAXCOL + 1];
    int word_count = 0;

    while ((input = getchar()) != EOF) {
        if (isspace(input)) {
            if (word_count > 0) {
                word[word_count] = '\0';
                printf("%s", word);
                col_count += word_count;
                word_count = 0;
            }
            if (input == '\n') {
                putchar('\n');
                col_count = 0;
            } else {
                if (col_count >= MAXCOL) {
                    putchar('\n');
                    col_count = 0;
                }
                putchar(input);
                col_count++;
            }
        } else {
            if (col_count >= MAXCOL) {
                putchar('\n');
                col_count = 0;
            }
            if (col_count + word_count >= MAXCOL) {
                putchar('\n');
                col_count = 0;
            }
            word[word_count++] = input;
        }
    }
    if (word_count > 0) {
        word[word_count] = '\0';
        printf("%s", word);
    }
}
