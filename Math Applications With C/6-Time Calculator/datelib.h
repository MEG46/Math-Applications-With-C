#include <stdio.h>
void invalid(){
	printf("Invalid Process! Please try again!\n");
}
void menu1(){
	printf("Options:\n\n1- Hour1:Min1:Sec1 - Hour2:Min2:Sec2\n\n2- Day1:Hour1:Min1:Sec1 - Day2:Hour2:Min2:Sec2\n\n3- Year1:Month1:Day1 - Year2:Month2:Day2\n\nChoose your option : ");
}
void menu2(){
	printf("Options:\n\n1- Hour1:Min1:Sec1 + Hour2:Min2:Sec2\n\n2- Day1:Hour1:Min1:Sec1 + Day2:Hour2:Min2:Sec2\n\n\n\nChoose your option : ");
}
void fir(){
	printf("\n\n1. Time Length\n\n");
}
void scd(){
	printf("\n\n2. Time Length\n\n");
}
int mo1(int a){
   if(a>=1&&a<=31){
   	return 1;
   }
   return 0;
}
int mo2(int a){
   if(a>=1&&a<=30){
   	return 1;
   }
   return 0;
}
int mo3(int a,int b){
	if(a>=1&&a<=28&&(b%4)!=0){
		return 1;
	}else if(a>=1&&a<=29&&(b%4)==0){
		return 1;
	}
	return 0;
}

void ch3(int y1,int m1,int d1,int y2,int m2,int d2){
	long long int counter=0;
	int a,b,c;
	if(y1<=y2){
	   a=y1;
	   y1=y2;
	   y2=a;
	   b=m1;
	   m1=m2;
	   m2=b;
	   c=d1;
	   d1=d2;
	   d2=c;
	   	
	}
	if(y1>y2){
		a=y2;
		b=m2;
		c=d2;
		while(1){
			if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
				if(mo1(c)){
					counter++;
					c++;
				}else{
					if(b==12){
						c=1;
						b=1;
						a++;
					}else{
					b++;
					c=1;}
				}
				}
			else if(b==4||b==6||b==9||b==11){
				if(mo2(c)){
					counter++;
					c++;
				}else{
					b++;
					c=1;
				}
			}else if(b==2){
				if(mo3(c,a)){
					counter++;
					c++;
				}else{
					b++;
					c=1;
				}
			}else{
				invalid();
			}
		   	if(a==y1&&b==m1&&c==d1){
		   		break;
			   }
		}
		printf("\nDays Between %d.%d.%d and %d.%d.%d : %lld\n",d2,m2,y2,d1,m1,y1,counter);
	}
}
int hr(int a){
	if(a>=3600){
		return 1;
	}
	return 0;
}
int da(long long int a){
	if(a>=86400){
		return 1;
	}
	return 0;
}
int mn(int a){
	if(a>=60){
		return 1;
	}
	return 0;
}
int sc(int a){
	if(a<60){
		return 1;
	}
	return 0;
}
void ent1(int* h1, int* m1,int* s1){
	printf("Enter the hour of first time length : ");
	scanf("%d",h1);
	printf("Enter the minute of first time length : ");
	scanf("%d",m1);
	printf("Enter the second of first time length : ");
	scanf("%d",s1);
}
void ent2(int* h2, int* m2,int* s2){
	printf("Enter the hour of second time length : ");
	scanf("%d",h2);
	printf("Enter the minute of second time length : ");
	scanf("%d",m2);
	printf("Enter the second of second time length : ");
	scanf("%d",s2);
}
void ent3(int* d1){
	printf("Enter the day of first time length : ");
	scanf("%d",d1);
}
void ent4(int* d2){
	printf("Enter the day of second time length : ");
	scanf("%d",d2);
}
void ent5(int* d1, int* m1,int* y1){
	printf("Enter the day of first time length : ");
	scanf("%d",d1);
	printf("Enter the month of first time length : ");
	scanf("%d",m1);
	printf("Enter the year of first time length : ");
	scanf("%d",y1);
}
void ent6(int* d2, int* m2,int* y2){
	printf("Enter the day of second time length : ");
	scanf("%d",d2);
	printf("Enter the month of second time length : ");
	scanf("%d",m2);
	printf("Enter the year of second time length : ");
	scanf("%d",y2);
}
void ch1(int hour1,int min1,int sec1,int hour2,int min2,int sec2,int c){
	int hour=0,min=0,sec=0;
	long long int result=0;
	if(c==0){
	result= (hour1 * 3600) + (min1 * 60) + (sec1) - (hour2 * 3600) - (min2 * 60) - (sec2);
    }else{
    result= (hour1 * 3600) + (min1 * 60) + (sec1) + (hour2 * 3600) + (min2 * 60) + (sec2);	
	}
	if(result<0){
		result=0-result;
	}
	
	while(result!=0){
	 if(result<3600){
	 	if((mn(result))){
	 		min++;
	 		result-=60;
		 }
	 	if(sc(result)){
	 		sec=result;
	 		result=sec-result;
		 }
	 }else{
	 	if((hr(result))){
	 		hour++;
	 		result-=3600;
		 }
	 }
	}
	printf("Hour : %d, Minute : %d, Second : %d\n",hour,min,sec);
}

void ch2(int day1,int hour1,int min1,int sec1,int day2,int hour2,int min2,int sec2,int c){
	int day=0,hour=0,min=0,sec=0;
	long long int result=0;
	if(c==0){
	result = (day1 * 86400) + (hour1 * 3600) + (min1 * 60) + (sec1) - (day2 * 86400) - (hour2 * 3600) - (min2 * 60) - (sec2);
}else{
	result = (day1 * 86400) + (hour1 * 3600) + (min1 * 60) + (sec1) + (day2 * 86400) + (hour2 * 3600) + (min2 * 60) + (sec2);
}
	if(result<0){
		result=0-result;
	}
	
	while(result!=0){
	 if(result<3600){
	 	if((mn(result))){
	 		min++;
	 		result-=60;
		 }
	 	if(sc(result)){
	 		sec=result;
	 		result=sec-result;
		 }
	 }else if(result>=3600&&result<86400){
	 	if((hr(result))){
	 		hour++;
	 		result-=3600;
		 }
	 }else{
	 	if(da(result)){
	 		day++;
	 		result-=86400;
		 }
	 }
	}
	printf("Day : %d, Hour : %d, Minute : %d, Second : %d\n",day,hour,min,sec);
}
