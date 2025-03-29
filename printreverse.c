#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr [5];
    for (int i = 0; i <= 4; i++){
        int a = i+1;
        printf("Enter the element number %d = ",a);
        scanf("%d",&arr[i]);
    }
    for (int i = 4 ; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
