//Problem: A secret system stores code names in forward order. 
//To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
/*
Example:
Input:
hello

Output:
olleh
*/
#inlude<stdio.h>
int main(){
  char x[100];
  printf("Enter a string: ");
  scanf(" %c", &x);
  for (int i = len(x); i >=0; i--){
     printf("%c", i);
  }
return 0;
}
