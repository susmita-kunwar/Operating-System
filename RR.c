#include<stdio.h>

void main(){
    int bj[4],b[4],a[4],c[4],t[4],w[4],i,wt=0,z,avg1=0,x,count=0,avg2=0,tt=0;
    for(i=0;i<4;i++){
        printf("Enter Arrival time for p%d \n",i+1);
        scanf("%d",&a[i]);
        printf("Enter burst time for p%d\n",i+1);
        scanf("%d",&b[i]);
    }

for(i=0;i<4;i++)
{
    bj[i]=b[i];
}    
while(1){

        for(i=0;i<4;i++){
            if(b[i]!=0){
                for(x=1;x<=5;x++){
                    b[i]--;
                    count++;
                    if(b[i]==0){
                        printf("process:%d ended at %d\n",i+1,count);
                        c[i]=count;
                        goto aq;
                    }
                
                }
            }
            aq:
            z++;
        }
        if(b[0]==0 && b[1]==0 && b[2]==0 && b[3]==0){
            goto out;
        }
}
out:

for(i=0;i<4;i++)
{
    printf("%d\n",c[i]);
}


    for(i=0;i<4;i++){
        t[i]=c[i]-a[i];

    }
    for(i=0;i<4;i++){
        w[i]=t[i]-bj[i];
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