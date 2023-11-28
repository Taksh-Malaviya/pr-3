#include<stdio.h>
#include<conio.h>



main(){
		int n;
		int first,last,sum;
		clrscr();
	
		printf("enter any number :");
		scanf("%d",&n);
             last=n%10;
		while(n>=10){	
		n=n/10;
			printf("%d\n",n);
		}
		  
		sum=first+last;
  printf("sum=%d",sum);
  getch();


		}

