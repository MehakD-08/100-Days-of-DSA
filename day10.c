//Problem: Read a string and check if it is a palindrome using two-pointer comparison.
/*
Example:
Input:
level

Output:
YES
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
  char s[1000];
  printf("Enter string:");
  scanf("%s", &s);
  int left=0;
  int right=strlen(s);
  bool isPalindrome= true;
  while(left<right){
   if(s[left]!=s[right-1]){
     isPalindrome= false;
     break;
   }
   left++;
   right--;
  }
  printf("%s\n", isPalindrome ? "YES" : "NO");
return 0;
}
