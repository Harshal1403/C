// reverse of an array
#include <stdio.h>
int main(){
    int n;

    //input size of array 
    printf("\nenter no of elements in array : ");
    scanf("%d",&n);

    int a[n],i;

    //for input of array
    for ( i = 0; i < n; i++)
        printf("\nenter %d element of array : ",i);
        scanf("%d",&a[i]);

    printf("\n");

    //reverse of array
    for ( i = n-1; i >= 0; i--)
        printf("\t%d",a[i]);
    
    return 0;
    
}