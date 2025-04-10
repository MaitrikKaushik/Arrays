#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max =  arr[0];
    for(int i = 0; i <= 4;i++){
        if(max < arr[i]){
            max = arr[i]; 
        }
    }
    printf("Maximum number in an array is: %d",max);
    return 0;
}
