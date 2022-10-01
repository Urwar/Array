/*Questions of GeeksforGeeks
Checking Maximum number or biggest number in c.*/


#include<stdio.h>
int main(){

    // Variable Defined
    
    int arr[5],i,min;
    for(int i=0;i<5;i++){
    printf("Enter the Array elements: ");
    scanf("%d",&arr[i]);
    }

    //  FINDING minimum Elements.
    min=arr[0];
    for(i=0;i<5;i++){
    if(arr[i]<min)
    min=arr[i];
    }
    printf("The Minimum no is %d",min);
    return 0;
}