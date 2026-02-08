//Problem: Given integers a and b, compute a^b using recursion without using pow() function.
/*
Example:
Input:
2 5

Output:
32
*/
#include<stdio.h>
int power(int x, int y){
   if y==1:
     return x;
   elif y==0:
     return 1;
   else:
     return x * power(x, y-1);
}
int main(){
  int a, b;
  printf("Enter a raised to power b:");
  scanf("%d %d", &a, &b);
  printf("%d", power( a, b));
return 0;
}
  
