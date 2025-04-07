#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for(int i=0;i<=n-1;i++){
        product = product * arr[i];


    }
    printf("Product of a number is: %d",product);
    return 0;
}
