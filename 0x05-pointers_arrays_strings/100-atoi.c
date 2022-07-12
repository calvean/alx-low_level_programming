#include <stdio.h>
#include <conio.h>
 
int main(){
    char inputString[20];
    int sign = 1, number = 0, index = 0;
    printf("Enter a String for Integer conversion \n");
    gets(inputString);
    /* Check for negative numbers */
    if(inputString[0] == '-'){
        sign = -1;
        index = 1;
    }
     
    while(inputString[index] != '\0'){
        if(inputString[index] >= '0' && inputString[index] <= '9'){
            number = number*10 + inputString[index] - '0';
        } else {
            break;
        }
        index++;
    }
    /* multiply number with sign to make it negative number if sign < 0*/
    number = number * sign;
    printf("String : %s \n", inputString);
    printf("Integer: %d \n", number);
    getch();
    return 0;
}
