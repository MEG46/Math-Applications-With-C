#include <stdio.h>
#include <math.h>
void bar(){
	printf("1 - |x|+|y|=|z|\n2 - |x|-|y|=|z|\n3 - |x|*|y|=|z|\n4 - |x|/|y|=|z|\n");
}
void bar1(){
	printf("1 - =\n2 - >\n3 - <\n4 - >=\n5 - <=\n");
}
void invalid(){
	printf("Invalid Process!\n");
}
int main(){
	int x,y,z,k=1;
	int ch1,ch2;
	int c,d;
	printf("The options\n\n");
	bar();
	printf("Enter your option : ");
	scanf("%d",&ch1);
	printf("\n\nThe options\n\n");
	bar1();
	printf("Enter your option : ");
	scanf("%d",&ch2);
	printf("Please enter x : ");
	scanf("%d",&x);
	printf("Please enter y : ");
	scanf("%d",&y);
	printf("Please enter z : ");
	scanf("%d",&z);
	if(z<0){
		invalid();
	}else{
	c=0-x;
	d=0-y;
	if(ch1==1&&ch2==1){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)+abs(j))==z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==1&&ch2==2){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)+abs(j))>z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==1&&ch2==3){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)+abs(j))<z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==1&&ch2==4){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)+abs(j))>=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==1&&ch2==5){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)+abs(j))<=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==2&&ch2==1){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)-abs(j))==z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==2&&ch2==2){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)-abs(j))>z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==2&&ch2==3){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)-abs(j))<z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==2&&ch2==4){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)-abs(j))>=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==2&&ch2==5){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)-abs(j))<=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==3&&ch2==1){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)*abs(j))==z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==3&&ch2==2){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)*abs(j))>z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==3&&ch2==3){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)*abs(j))<z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==3&&ch2==4){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)*abs(j))>=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==3&&ch2==5){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)*abs(j))<=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==4&&ch2==1){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)/abs(j))==z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==4&&ch2==2){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)/abs(j))>z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==4&&ch2==3){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)/abs(j))<z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==4&&ch2==4){
	for(int i=-x;i<=x;i++){
		for(int j=-y;j<=y;j++){
		if((abs(i)/abs(j))>=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}else if(ch1==4&&ch2==5){
	for(int i=c;i<=x;i++){
		for(int j=d;j<=y;j++){
		if((abs(i)/abs(j))<=z){
			printf("%d. (%d , %d)\n",k++,i,j);
		}
	}
	}
}
}
}