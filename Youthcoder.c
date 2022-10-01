/*Questions of GeeksforGeeks
Checking Maximum number or biggest number in c.*/


#include<stdio.h>
int main(){
    // Variable Defined
    int arr[10],i,max;
    for(int i=0;i<10;i++){
    printf("Enter the Array elements:8");
    scanf("%d",&arr[i]);
    }


    //  FINDING maximum Elements.
    max=arr[0];
    for(i=0;i<10;i++){
    if(arr[i]>max)
    max=arr[i];
    }
    printf("The Maximum no is %d",max);
    return 0;
}