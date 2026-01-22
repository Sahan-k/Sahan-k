// This program implements  First Come First Serve (FCFS) CPU Scheduling
// and calculate Waiting Time (WT), Turn around time (TAT),
// Average Waiting Time(AWT), and Average Turn Around Time (ATAT)
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
     if(i<=n-1)                      // calculate waiting time 
     {
      Time+=b[i];                   // use one varibale to store the sum of burst time
      WT+=Time;                     // use one varibale to store the WT 
     } 
     total+=b[i];                   //total variable used to store the sum of burst time
     TAT+=total;                    // TAT variable used to store the TAT
   }
   
   printf("Total Turn Tround Time is %.2f\n",TAT);      //prints the TAT with a 2 decimal part
   ATAT=TAT/n;                             // Calculate Average turn around time
   printf("Average Turn Around Time  is %.2fms\n",ATAT);  // Prints the value of TAT
   printf("Waiting Time is %.2f\n",WT);      //Prints the WT with 2 decimal part
   AWT=WT/n;                                // Caclulate average Waiting time 
   printf("Avereage Waitinf Time is %.2f\n",AWT);     //Prints Average Waiting time with 2 decimal part
}


