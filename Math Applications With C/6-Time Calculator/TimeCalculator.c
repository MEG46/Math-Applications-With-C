#include <stdio.h>
#include "datelib.h"
void menubar(){
	printf("Options:\n\n1-Time Difference Calculator\n\n2-The Time Advancer By The Given Date\n\n3-Exit\n\nChoose your options : ");
}
int main(){
	char ch,chc;
	while(1){
		menubar();
		fflush(stdin);
		scanf("%c",&ch);
		fflush(stdin);
		if(ch=='1'){
			menu1();
			scanf("%c",&chc);
			if(chc=='1'){
			   int h1,m1,s1,h2,m2,s2;
			   fir();
			   ent1(&h1,&m1,&s1);
			   scd();
			   ent2(&h2,&m2,&s2);
			   ch1(h1,m1,s1,h2,m2,s2,0);
			}else if(chc=='2'){
			   int d1,h1,m1,s1,d2,h2,m2,s2;
			   fir();
			   ent3(&d1);
			   ent1(&h1,&m1,&s1);
			   scd();
			   ent4(&d2);
			   ent2(&h2,&m2,&s2);
			   ch2(d1,h1,m1,s1,d2,h2,m2,s2,0);
		    }if(chc=='3'){
			   int y1,m1,d1,y2,m2,d2;
			   fir();
			   ent5(&d1,&m1,&y1);
			   scd();
			   ent6(&d2,&m2,&y2);
			   ch3(y1,m1,d1,y2,m2,d2);
			}
			
		}else if(ch=='2'){
			menu2();
			scanf("%c",&chc);
			if(chc=='1'){
			   int h1,m1,s1,h2,m2,s2;
			   fir();
			   ent1(&h1,&m1,&s1);
			   scd();
			   ent2(&h2,&m2,&s2);
			   ch1(h1,m1,s1,h2,m2,s2,1);
			}else if(chc=='2'){
			   int d1,h1,m1,s1,d2,h2,m2,s2;
			   fir();
			   ent3(&d1);
			   ent1(&h1,&m1,&s1);
			   scd();
			   ent4(&d2);
			   ent2(&h2,&m2,&s2);
			   ch2(d1,h1,m1,s1,d2,h2,m2,s2,1);
		    }
		}else if(ch=='3'){
			break;
		}
		fflush(stdin);
		printf("Do you want to continue? (Y / N) : ");
		scanf("%c",&ch);
		fflush(stdin);
		if(ch=='N'||ch=='n'){
			break;
		}
	}
}