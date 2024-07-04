// no of positive and negative no in array
#include <stdio.h>

int main(){
    //declaration
    int a[10],i,pov=0,neg=0;

    //array input
    for ( i = 0; i < 10; i++)
        printf("Enter element no.%d of array : \n",i);
        scanf("%d",&a[i]);

    //code of counting of pos and neg
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            pov++;
        }
        else
        {
            neg++;
        }
    }

    //printing pos and neg count
    printf("\nno of positive ele : %d",pov);
    printf("\nno of negative ele : %d",neg);
}