#include<stdio.h>

void main(){
 char str[101];

  printf("Enter a string: ");
  fgets(str, sizeof str, stdin);

  printf("You entered: %s\n", str);
}