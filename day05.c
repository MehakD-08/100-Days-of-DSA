//Merge array
#include<stdio.h>
int main(){
    int arr1[5], arr2[5];
    printf("Enter element for array1 in ascending order: ");
    for(int i=0; i<5; i++){
     scanf("%d", &arr1[i]);
    }
    printf("Enter element for array2 in ascending order: ");
    for(int i=0; i<5; i++){
     scanf("%d", &arr2[i]);
    }
    printf("Array 1\n");
    for(int i=0; i<5; i++){
     printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Array 2\n");
    for(int i=0; i<5; i++){
     printf("%d ", arr2[i]);
    }

    /*int arr3[10];
    for(int i=0; i<5; i++){
        arr3[i]= arr1[i];
    }
    for(int i=0; i<5; i++){
        arr3[i+5]= arr2[i];
    }

    printf("\n");
    printf("Array 3\n");
    for(int i=0; i<10; i++){
        printf("%d ", arr3[i]);
    }
    */
    int k=0;
    int arr4[10];
      for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr1[i]<=arr2[j]){
                arr4[k++]=arr1[i];
                break;
            }
            else{
                arr4[k++]=arr2[j];
                arr4[k++]=arr1[i];
                break;
            }
        }
      
    }

    printf("\n");
    printf("Array 4\n");
    for(int i=0; i<10; i++){
        printf("%d ", arr4[i]);
    }
    

return 0;
}

