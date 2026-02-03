/*Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6
*/

#include<stdio.h>
int main(){
    int n, x, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0; i<n; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d", &x);
    printf("Enter position to be inserted at: ");
    scanf("%d", &pos);
    for(int i=n+1; i>=pos; i--){
            arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    for(int i=0; i<n+1; i++){
        printf("%d ", arr[i]);
    }
return 0;
}