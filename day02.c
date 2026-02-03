/*Write a C program to delete the element at a given 1-based position pos from an array of n integers. 
Shift remaining elements to the left.

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50
*/

#include<stdio.h>
int main(){
    int n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter position to delete element: ");
    scanf("%d", &pos);
    for(int i=pos-1; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
return 0;

}
