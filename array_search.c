#include <stdio.h>

int main(){
    int n;

    //inserting size of the array
    printf("\nenter no of elements : ");
    scanf("%d",&n);

    int a[n],i,num;

    //inserting no to search
    printf("\nenter no to search : ");
    scanf("%d",&num);

    //inserting values in array
    for ( i = 0; i < n; i++)
    {
        printf("\nenter element no %d in array : ",i);
        scanf("%d",&a[i]);
    }
    

    //searching for element
    for ( i = 0; i < n; i++)
    {
        if (a[i]==num)
        {
            printf("\nnumber found :D at index : %d",i);
        }
    }

    return 0;
    
}