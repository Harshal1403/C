#include <stdio.h>
int main(){


    //identifier declaration
    int a[10],i,min=99999,max=0,sum=0;

    //inserting values in array
    for ( i = 0; i < 10; i++){
        printf("\nEnter element no %d of array : ",i);
        scanf("%d",&a[i]);
    }

    //finding min and max values
    for ( i = 0; i < 10; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }

        if (a[i]>max)
        {
            max=a[i];
        }
        sum += a[i];
    }

    //printing values
    printf("\nThe value of min element : %d",min);
    printf("\nThe value of max element : %d",max);
    printf("\nThe value of avg element : %d",sum/10);
}