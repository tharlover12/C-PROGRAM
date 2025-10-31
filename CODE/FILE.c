#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *f;
char ch;
int characters = 0, words = 0, lines = 0, in_word = 0;
f = fopen("sample.txt", "r");
if (f == NULL) {
printf("Unable to open file.\n");
return 1;
}
while ((ch = fgetc(f)) != EOF) {
characters++;
if (ch == '\n')
lines++;
if (ch == ' ' || ch == '\t' || ch == '\n') {
in_word = 0;
} else if (in_word == 0) {
in_word = 1;
words++;
}
}
fclose(f);
printf("\nNumber of characters = %d", characters);
printf("\nNumber of words = %d", words);
printf("\nNumber of lines = %d\n", lines);
return 0;
}


