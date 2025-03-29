#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int arr [5] = {20,5,46,5,9};
    // arr[4] = 100; //updating array element using index
    // printf("%d",arr[4]); //printing array element using index
    // char arr[4] = {'a','b','c','d'};
    // printf("%c",arr[2]); //printing array element using index
    int arr[5];
    for(int i = 0; i <= 4 ; i++){
        printf("Enter the element number %d\n",i+1);
        scanf("%d ",&arr[i]);

    } 
    for(int i = 0; i < 5 ; i++) printf("%d ",arr[i]);
    return 0;
}
