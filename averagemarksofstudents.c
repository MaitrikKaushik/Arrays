//Program to find average marks obtained by students in a class
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[30];
    for(int i = 0; i < 30; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < 30; i++)
    {
        sum += arr[i];
    }
    int avg = sum/30;
    printf("The average marks obtained by students in the class is: %d", avg);
    return 0;
}
