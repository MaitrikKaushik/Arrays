#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int a = 6;
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        if(a==arr[i]){
            printf("%d ",i);
        }
    }
    //printf("The average marks obtained by students in the class is: %d", avg);
    return 0;
}