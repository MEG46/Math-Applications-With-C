#include <stdio.h>
void invalid(){
	printf("Invalid Process!\n");
}
int main(){
	int num1,num2,temp=0,res=0;
	printf("Please enter the start point of the range : ");
	scanf("%d",&num1);
	printf("Please enter the end point of the range : ");
	scanf("%d",&num2);
	if(num1<=0||num2<=0){
		invalid();
		printf("Please enter the start point of the range : ");
	    scanf("%d",&num1);
	    printf("Please enter the end point of the range : ");
	    scanf("%d",&num2);
	}else{
	for(int i=num1;i<=num2;i++){
		if(i==1){
			printf("1\t");
		}else{
		res=1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				res+=j;
			}
		}
		if(res==i){
			printf("%d\t",i);
		}
	}
}
}
}