#include<stdio.h>
int main()
{
   int i,n,a[10],b[10];
   float total=0,TAT=0,ATAT,Time=0,WT=0,AWT;
   printf("Enter the number of process: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("Enter the process: ");
     scanf("%d",&a[i]);

     printf("Enter the Burst time: ");
     scanf("%d",&b[i]);
     if(i<=n-1)
     {
      Time+=b[i];
      WT+=Time;
     }
     total+=b[i];
     TAT+=total;
   }
   
   printf("Total TAT is %.2f\n",TAT);
   ATAT=TAT/n;
   printf("Average TAT is %.2fms\n",ATAT);
   printf("Waiting time is %.2f\n",WT);
   AWT=WT/n;
   printf("Avereage WT is %.2f\n",AWT);
}
