#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caseConverter(char letter){

    char res = letter ^ 32;

    printf("Converted %c to %c\n", letter, res);
}

int main(){
    char letter;
    printf("Enter a letter to conver to lower or upper case:\n");
    scanf("%c", &letter);
    caseConverter(letter);
}