
//Implement linear search to find key k in an array. Count and display the number of comparisons performed.
/*
Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3
*/

#include<stdio.h>
int main(){
    int n, x, c=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter number you want to search for: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        c+=1;
        if (arr[i]==x) {
            printf("number %d Found at index %d\n", x, i);
            break;
        }
        else{
            if(i==n-1){
                printf("Element not found!\n");
            }
        }
    }
    printf("No. of comparisions: %d", c);
    return 0;
}
