//Program to display array usnign function
#include <stdio.h>
// int display(int m){
//     printf("%d ",m);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[3]={10,20,30,40};
//     for(int i = 0; i < 10; i++)
//     {
//         display(arr[i]);
//     }
//     return 0;
// }
int show(int **m){
    printf("%d ",**m);
    return 0;
}
int display(int *n)
{
    show(&n);
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[100]={10,20,30,40,50,60,70,80,90,100};
    
    for (int i = 0; i < 10; i++)
    {
        display(&arr[i]);
    }
    return 0;
}
