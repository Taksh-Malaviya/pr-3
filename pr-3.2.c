#include<stdio.h>
#include<conio.h>

main(){
		int n;
		int count=0;
		clrscr();
		printf("enter any number :");
		scanf("%d",&n);
	
		while(n>0){
			
		n=n/10;
		count++;
		}
        printf("count=%d",count);
        getch();
		}

