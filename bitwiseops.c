#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caseConverter(char letter){

    char res = letter ^ 32;

    printf("Converted %c to %c\n", letter, res);
}

void clearBit(int num, int pos){
    //A mask is a binary number where specific bits are set to 1 or 0
    int mask =  ~(1 << pos); //here we are shiting 1(0001) by the position so if pos was 1, it would shift to 0010.
    //we then flip the numbers using the compliment symbol so its now 1101.
    // next we use & to clear the bit as the one we wanted off will not be on
    int res = num & mask;
    printf("%d\n", res);
}

void setBit(int num, int pos){
    int mask = 1 << pos;
    int res = num | res;
    printf("%d\n", res);
}

int main(){
    // char letter;
    // printf("Enter a letter to conver to lower or upper case:\n");
    // scanf("%c", &letter);
    // caseConverter(letter);

    int num;
    int pos;
    printf("Enter a num:\n");
    scanf("%d", &num);
    printf("Enter the bit position to clear:\n");
    scanf("%d", &pos);
    // clearBit(num, pos);
    setBit(num, pos);
}