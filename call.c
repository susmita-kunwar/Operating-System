#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	// // fork();
	// int a,b;
	// printf("Hello World\n");
	// printf("Enter 2 numbers");
	// scanf("%d %d",&a,&b);
	// a=a+b;
	// printf("\nThe sum is %d\n",a);
	int pid;
	pid=fork();
	while(1){
	if(pid>0){
		printf("Parent Proces\nParent ID=%d\n",getpid());
	}
	else{
		printf("Child Process. \nChild ID=%d\nParent ID=%d\n",getpid(),getpid());
	}
	}
	return 0;
}