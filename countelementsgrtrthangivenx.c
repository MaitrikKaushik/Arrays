#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number which is to be checked: ");
    scanf("%d",&n);
    int a;
    printf("Enter the size of an array: ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0; i < a; i++){
        printf("Enter the element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < a; i++){
        if(arr[i]>n){
            count+=1;
        }

    }
    printf("Number of elements which are greater than %d are %d.",n,count);
    return 0;
}
