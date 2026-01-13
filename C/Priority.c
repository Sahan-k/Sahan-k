// Write a C program that takes the number of persons and calls them based on their arrival time (who comes first). Also, give priority to senior citizens. if there are two or more senior citizens, prioritize them based on their age.(Older one first)



#include <stdio.h>
int main() {
    int n,i,a[100];       //n=number of persons ,i= loop variable , a[] = array to store the value
                  
    printf("enter the no of person: ");
    scanf("%d",&n);

    printf("enter the age: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // Stores the persons age by using array 
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>60)                   //checking and giving priority for senior citizen
        {
            printf("% d get in",a[i]); // prints who has high priority
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=60)               // checking and giving priority for 1st comer
        {
            printf("% d get in ",a[i]); //prints who comes first
        }
    }
    return 0;
}