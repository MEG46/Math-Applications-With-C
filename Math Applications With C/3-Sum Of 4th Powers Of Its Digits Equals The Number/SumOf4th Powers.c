#include <stdio.h>
void invalid(){
	printf("Invalid Process!\n");
}
int main(){
	int counter,temp=0,temp1[4],c=0,res;
	for(int i=1000;i<=9999;i++){
		c=i;
		res=0;
		counter=0;
		while(c!=0){
			temp1[counter]=c%10;
			counter++;
			c/=10;
		}
		for(int j=0;j<4;j++){
			res+= (temp1[j]*temp1[j]*temp1[j]*temp1[j]);
		}
		if(res==i){
			printf("%d\t",i);
		}
}
}