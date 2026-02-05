//Given an array of n integers, reverse the array in-place using two-pointer approach.
/* Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter elements: ");
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<((n+1)/2); i++){
        int temp= *(arr+i);
        *(arr+i)=*(arr+(n-1)-i);
        *(arr+(n-1)-i)=temp;
    }
    for(int i=0; i<n; i++){
        printf("%d", *(arr+i));
    }
return 0;
}