#include<stdio.h>
int main(){
char upper,lower;
printf("Enter a upper case letter:");
scanf("%c",&upper);
lower= tolower(upper);
printf("lower case letter is %c",lower);
getch();
}
