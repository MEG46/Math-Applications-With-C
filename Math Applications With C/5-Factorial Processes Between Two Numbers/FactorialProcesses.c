#include <stdio.h>
#include "factpro.h"

int main(){
	char ch;
	long long int num1,num2;
	while(1){
		entrance(&num1,&num2);
		if(num1>num2||num1==num2){
			invalid();
			entrance(&num1,&num2);
		}else if(num1<0||num1<0){
			invalid();
			entrance(&num1,&num2);
		}
		menubar();
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch){
			case '1':
			        fac(num1,num2);
			        break;
			case '2':
				    fac(num1,num2);
				    perm(num1,num2);
			        break;
			case '3':
				    fac(num1,num2);
				    comb(num1,num2);
			        break;
			case '4':
				    fac(num1,num2);
				    perm(num1,num2);
				    comb(num1,num2);
			        break;	
			case '5':
				ch='N';
		}
		fflush(stdin);
		printf("Do you want to continue? (Y / N) : ");
		scanf("%c",&ch);
		if(ch=='N'||ch=='n'){
			break;
		}
	}
	
	
}