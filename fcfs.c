#include<stdio.h>

void main(){
    int b[4],a[4],c[4],t[4],w[4],i,wt=0,avg1=0,avg2=0,tt=0;
    for(i=0;i<4;i++){
        printf("Enter Arrival time for p%d \n",i+1);
        scanf("%d",&a[i]);
        printf("Enter burst time for p%d\n",i+1);
        scanf("%d",&b[i]);
    }
    c[0]=b[0];
    for(i=1;i<4;i++){
        
        c[i]=c[i-1]+b[i];
    }
    for(i=0;i<4;i++){
        t[i]=c[i]-a[i];
    }
    for(i=0;i<4;i++){
        w[i]=t[i]-b[i];
    }
    for(i=0;i<4;i++){
        wt=wt+w[i];
    }
    for(i=0;i<4;i++){
        tt=tt+t[i];
    }
    avg1=wt/4;
    printf("Average waiting time is %d \n",avg1);
    avg2=tt/4;
    printf("Average turnaround time is %d \n",avg2);
    
}
