#include<stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 6; 
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr);
    
    return 0;
}
