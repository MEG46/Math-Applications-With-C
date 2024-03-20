#include <stdio.h>
long long int fact (long long int n){
	if(n==0||n==1){
		return 1;
	}
	return n * fact(n-1);
}
long long int per(long long int n,long long int r){
	return fact(n) / fact(n-r);
}
long long int com(long long int n,long long int r){
	return fact(n) / (fact(r) * fact(n-r));
}
void invalid(){
	printf("\n\nPlease enter valid process!\n\n");
}
void menubar(){
	printf("The Process Menu :\n\n1 - Just Print Factorials\n2 - Just Print Permutations\n3 - Just Print Combinations\n4 - Just Print All of Above\n5 - Exit");
	printf("\n\nPlease enter your process : ");
}
void entrance(long long int* num1,long long int* num2){
	printf("Please enter the start point of the range : ");
	scanf("%lld",num1);
	printf("Please enter the enter point of the range : ");
	scanf("%lld",num2);
}
void fac(long long int num1,long long int num2){
	printf("\n\nThe Factorials Between %d and %d\n\n",num1,num2);
	for(int i=num1;i<=num2;i++){
					printf("%d!=%d\n",i,fact(i));
		}
}
void perm(long long int num1,long long int num2){
	printf("\n\nThe Permutations Between %d and %d\n\n",num1,num2);
	for(int i=num1;i<=num2;i++){
					printf("P(%d,%d) = %d\n",num2,i,per(num2,i));
		}
}
void comb(long long int num1,long long int num2){
	printf("\n\nThe Combinations Between %d and %d\n\n",num1,num2);
	for(int i=num1;i<=num2;i++){
					printf("C(%d,%d) = %d\n",num2,i,com(num2,i));
		}
}