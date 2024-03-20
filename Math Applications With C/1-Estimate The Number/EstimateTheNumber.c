#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char ch;
	int a,b,counter=0,num,range=0,j=0,ran=0,est;
	printf("Please enter the start point of the range : ");
	scanf("%d",&a);
	printf("Please enter the end point of the range : ");
	scanf("%d",&b);
	if(a>b){
		int c;
		c=b;
		b=a;
		a=c;
	}else if(a==b){
		printf("\n\nThe numbers can't be same! Please enter again!\n\n");
		printf("Please enter the start point of the range : ");
	    scanf("%d",&a);
	    printf("Please enter the end point of the range : ");
	    scanf("%d",&b);
	}
	range=b-a+1;
	int nums[range];
	for(int i=a;i<=b;i++){
		nums[j]=i;
		printf("%d\t",nums[j]);
		j++;
	}
	ran = rand();
	ran %= range;
	num = nums[ran];
	while(est!=num){
		printf("Hint : The range is between %d and %d\n",a,b);
		printf("Please enter your estimated number : ");
		scanf("%d",&est);
		counter++;
	}
	printf("Well Done! You found the number %d. estimate!",counter);
	
}