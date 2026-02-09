//Problem: A secret system stores code names in forward order. 
//To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
/*
Example:
Input:
hello

Output:
olleh
*/
#include<stdio.h>
#include<string.h>
int main(){
  char x[100];
  printf("Enter a string: ");
  scanf("%s", &x);
  for (int i = strlen(x); i >=0; i--){
     printf("%c", x[i]);
  }
return 0;
}
  
