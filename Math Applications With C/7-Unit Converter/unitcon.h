#include <stdio.h>
void menubar1(char arr[][7],int c){
	if(c==-1){
		for(int j=0;j<=7;j++){
			printf("%d - ",(j+1));
		for(int i=0;i<7;i++){
			printf("%c",arr[j][i]);
		}
		printf("\n");
	}
	}else{
		int k=0;
		for(int j=0;j<=7;j++){
			if(c==j){
				continue;
			}else{
				printf("%d - ",k+1);
				for(int i=0;i<7;i++){
				 printf("%c",arr[j][i]);
	    }
	    	k++;
		}
		printf("\n");
	}
	}
}
void menubar2(char arr[][8],int c){
	int i,j;
	if(c==-1){
			for(int j=0;j<6;j++){
			printf("%d - ",(j+1));
		for(int i=0;i<8;i++){
			if(arr[j][i]!='\0'){
			printf("%c",arr[j][i]);
		}else{
			continue;
		}
		}
		printf("\n");
	}
	}else{
		int k=0;
		for(int j=0;j<6;j++){
			if(c==j){
				continue;
			}else{
				printf("%d - ",k+1);
				for(int i=0;i<8;i++){
				 printf("%c",arr[j][i]);
	    }
	    	k++;
		}
		printf("\n");
	}
	}
}
void menubar3(char arr[][10],int c,int d){
	int i,j;
	if(c==-1){
			for(int j=0;j<d;j++){
			printf("%d - ",(j+1));
		for(int i=0;i<10;i++){
			if(arr[j][i]!='\0'){
			printf("%c",arr[j][i]);
		}else{
			continue;
		}
		}
		printf("\n");
	}
	}else{
		int k=0;
		for(int j=0;j<d;j++){
			if(c==j){
				continue;
			}else{
				printf("%d - ",k+1);
				for(int i=0;i<10;i++){
				 printf("%c",arr[j][i]);
	    }
	    	k++;
		}
		printf("\n");
	}
	}
}

double mmtocm(double a){
	return 0.1 * a;
}
double mmtom(double a){
	return 0.001 * a;
}
double mmtokm(double a){
	return 0.000001 * a;
}
double mmtoinch(double a){
	return 0.03937 * a;
}
double mmtofeet(double a){
	return 0.003281 * a;
}
double mmtoyards(double a){
	return 0.001094 * a;
}
double mmtomiles(double a){
	return 0.0000621 * a;
}
double cmtom(double a){
	return 0.01 * a;
}
double cmtokm(double a){
	return 0.00001 * a;
}
double cmtoinch(double a){
	return 0.393701 * a;
}
double cmtofeet(double a){
	return 0.032808 * a;
}
double cmtoyards(double a){
	return 0.010936 * a;
}
double cmtomiles(double a){
	return 0.000006 * a;
}
double mtokm(double a){
	return 0.001 * a;
}
double mtoinch(double a){
	return 39.37008 * a;
}
double mtofeet(double a){
	return 3.28084 * a;
}
double mtoyards(double a){
	return 1.093613 * a;
}
double mtomiles(double a){
	return 0.000621 * a;
}
double kmtoinch(double a){
	return 39370.08 * a;
}
double kmtofeet(double a){
	return 3280.84 * a;
}
double kmtoyards(double a){
	return 1093.613  * a;
}
double kmtomiles(double a){
	return 0.621371 * a;
}
double inchtofeet(double a){
	return 0.083333 * a;
}
double inchtoyards(double a){
	return 0.027778  * a;
}
double inchtomiles(double a){
	return 0.000016 * a;
}
double feettoyards(double a){
	return 0.333333  * a;
}
double feettomiles(double a){
	return 0.000189 * a;
}
double yardtomiles(double a){
	return 0.000568 * a;
}
double cmtom3(double a){
	return 0.000001 * a;
}
double cmtol(double a){
	return 0.001 * a;
}
double cmtoinch3(double a){
	return 0.061024 * a;
}
double cmtofoot3(double a){
	return 0.000035 * a;
}
double cmtousgal(double a){
	return 0.000264 * a;
} 
double cmtoimpgal(double a){
	return 0.00022 * a;
} 
double cmtous(double a){
	return 0.000006 * a;
} 
double mtol(double a){
	return 1000 * a;
}
double mtoinch3(double a){
	return 61024 * a;
}
double mtofoot3(double a){
	return 35 * a;
}
double mtousgal(double a){
	return 264 * a;
} 
double mtoimpgal(double a){
	return 220 * a;
} 
double mtous(double a){
	return 6.29 * a;
} 
double ltoinch3(double a){
	return 61 * a;
}
double ltofoot3(double a){
	return 0.035 * a;
}
double ltousgal(double a){
	return 0.264201 * a;
} 
double ltoimpgal(double a){
	return 0.22 * a;
} 
double ltous(double a){
	return 0.00629 * a;
} 
double inchtofoot3(double a){
	return 0.000579 * a;
}
double inchtousgal(double a){
	return 0.004329 * a;
} 
double inchtoimpgal(double a){
	return 0.003605 * a;
} 
double inchtous(double a){
	return 0.000103 * a;
} 
double foottousgal(double a){
	return 7.481333 * a;
} 
double foottoimpgal(double a){
	return 6.229712 * a;
} 
double foottous(double a){
	return 0.178127 * a;
} 
double usgaltoimpgal(double a){
	return 0.832701 * a;
} 
double usgaltous(double a){
	return 0.02381 * a;
} 
double impgaltous(double a){
	return 0.028593 * a;
} 
double gtokg(double a){
	return 0.001 * a;
}
double gtotonne(double a){
	return 0.00001 * a;
}
double gtoshton(double a){
	return 0.00001 * a;
}
double gtolton(double a){
	return 0.0000984 * a;
}
double gtolb(double a){
	return 0.002205 * a;
}
double gtooz(double a){
	return 0.035273 * a;
}
double kgtotonne(double a){
	return 0.001 * a;
}
double kgtoshton(double a){
	return 0.001102 * a;
}
double kgtolton(double a){
	return 0.000984 * a;
}
double kgtolb(double a){
	return 2.204586 * a;
}
double kgtooz(double a){
	return 35.27337 * a;
}
double tonnetoshton(double a){
	return 1.102293 * a;
}
double tonnetolton(double a){
	return 0.984252 * a;
}
double tonnetolb(double a){
	return 2204.586 * a;
}
double tonnetooz(double a){
	return 35273.37 * a;
}
double shtontolton(double a){
	return 0.892913 * a;
}
double shtontolb(double a){
	return 2000 * a;
}
double shtontooz(double a){
	return 32000 * a;
}
double ltontolb(double a){
	return 2239.859 * a;
}
double ltontooz(double a){
	return 35837.74 * a;
}
double lbtooz(double a){
	return 16 * a;
}
double gmltokgm(double a){
	return 1000 * a;
}
double gmltolbft(double a){
	return 62.42197 * a;
}
double gmltolbin(double a){
	return 0.036127 * a;
}
double kgmtolbft(double a){
	return 0.062422 * a;
}
double kgmtolbin(double a){
	return 0.000036 * a;
}
double lbfttolbin(double a){
	return 0.000579 * a;
}
double lsectolmin(double a){
	return 60 * a;
}
double lsectomhr(double a){
	return 3.6 * a;
}
double lsectoftmin(double a){
	return 2.119093 * a;
}
double lsectofthr(double a){
	return 127.1197 * a;
}
double lsectogalmin(double a){
	return 15.85037 * a;
}
double lsectousbrld(double a){
	return 543.4783 * a;
}
double lmintomhr(double a){
	return 0.06 * a;
}
double lmintoftmin(double a){
	return 0.035317 * a;
}
double lmintofthr(double a){
	return 2.118577 * a;
}
double lmintogalmin(double a){
	return 0.264162 * a;
}
double lmintousbrld(double a){
	return 9.057609 * a;
}
double mhrtoftmin(double a){
	return 0.588637 * a;
}
double mhrtofthr(double a){
	return 35.31102 * a;
}
double mhrtogalmin(double a){
	return 4.40288 * a;
}
double mhrtousbrld(double a){
	return 150.9661 * a;
}
double ftmintofthr(double a){
	return 60 * a;
}
double ftmintogalmin(double a){
	return 7.479791 * a;
}
double ftmintousbrld(double a){
	return 256.4674 * a;
}
double fthrtogalmin(double a){
	return 0.124689 * a;
}
double fthrtousbrld(double a){
	return 4.275326 * a;
}
double galmintousbrld(double a){
	return 34.28804 * a;
}
double nhrtoscfh(double a){
	return 35.31073 * a;
}
double nhrtoscfm(double a){
	return 0.588582 * a;
}
double scfhtoscfm(double a){
	return 0.016669 * a;
}
double kghtolbhour(double a){
	return 2.204586 * a;
}
double kghtokgs(double a){
	return 0.000278 * a;
}
double kghtoth(double a){
	return 0.001  * a;
}
double lbhourtokgs(double a){
	return 0.000126 * a;
}
double lbhourtoth(double a){
	return 0.000454 * a;
}
double kgstoth(double a){
	return 3.6  * a;
}
double bartopsi(double a){
	return 14.50326  * a;
}
double bartokpa(double a){
	return 100  * a;
}
double bartompa(double a){
	return 0.1  * a;
}
double bartokgf(double a){
	return 1.01968  * a;
}
double bartommhg(double a){
	return 750.0188  * a;
}
double bartoatm(double a){
	return 0.987167  * a;
}
double psitokpa(double a){
	return 6.895  * a;
}
double psitompa(double a){
	return 0.006895  * a;
}
double psitokgf(double a){
	return 0.070307  * a;
}
double psitommhg(double a){
	return 51.71379  * a;
}
double psitoatm(double a){
	return 0.068065  * a;
}
double kpatompa(double a){
	return 0.001  * a;
}
double kpatokgf(double a){
	return 0.01020  * a;
}
double kpatommhg(double a){
	return 7.5002 * a;
}
double kpatoatm(double a){
	return 0.00987  * a;
}
double mpatokgf(double a){
	return 10.197 * a;
}
double mpatommhg(double a){
	return 7500.2 * a;
}
double mpatoatm(double a){
	return 9.8717  * a;
}
double kgftommhg(double a){
	return 735.5434 * a;
}
double kgftoatm(double a){
	return 0.968115 * a;
}
double mmhgtoatm(double a){
	return 0.001316 * a;
}
double mhotoftho(double a){
	return 3.280696 * a;
}
double mhotocmhg(double a){
	return 7.356339 * a;
}
double mhotoinhg(double a){
	return 2.896043 * a;
}
double mhotoinho(double a){
	return 39.36572 * a;
}
double mhotopa(double a){
	return 9806 * a;
}
double fthotocmhg(double a){
	return 2.242311 * a;
}
double fthotoinhg(double a){
	return 0.882753 * a;
}
double fthotoinho(double a){
	return 11.9992 * a;
}
double fthotopa(double a){
	return 2989 * a;
}
double cmhgtoinhg(double a){
	return 0.39368 * a;
}
double cmhgtoinho(double a){
	return 5.351265 * a;
}
double cmhgtopa(double a){
	return 1333 * a;
}
double inhgtoinho(double a){
	return 13.59293 * a;
}
double inhgtopa(double a){
	return 3386 * a;
}
double inhotopa(double a){
	return 249.1 * a;
}
double mstommin(double a){
	return 59.988 * a;
}
double mstokmh(double a){
	return 3.599712 * a;
}
double mstofts(double a){
	return 3.28084 * a;
}
double mstoftmin(double a){
	return 196.8504 * a;
}
double mstomih(double a){
	return 2.237136 * a;
}
double mmintokmh(double a){
	return 0.060007 * a;
}
double mmintofts(double a){
	return 0.054692 * a;
}
double mmintoftmin(double a){
	return 3.281496 * a;
}
double mmintomih(double a){
	return 0.037293 * a;
}
double kmhtofts(double a){
	return 0.911417 * a;
}
double kmhtoftmin(double a){
	return 54.68504 * a;
}
double kmhtomih(double a){
	return 0.621477 * a;
}
double ftstoftmin(double a){
	return 60 * a;
}
double ftstomih(double a){
	return 0.681879 * a;
}
double ftmintomih(double a){
	return 0.011365 * a;
}
double nmtokgfm(double a){
	return 0.101972 * a;
}
double nmtoftlb(double a){
	return 0.737561 * a;
}
double nmtoinlb(double a){
	return 8.850732 * a;
}
double kgfmtoftlb(double a){
	return 7.233003 * a;
}
double kgfmtoinlb(double a){
	return 86.79603 * a;
}
double ftlbtoinlb(double a){
	return 12 * a;
}
double cptopoise(double a){
	return 0.01 * a;
}
double cptolbfts(double a){
	return 0.000672 * a;
}
double poisetolbfts(double a){
	return 0.067197 * a;
}
double cstost(double a){
	return 0.01 * a;
}
double cstofts(double a){
	return 0.000011 * a;
}
double cstoms(double a){
	return 0.000001 * a;
}
double sttofts(double a){
	return 0.001076 * a;
}
double sttoms(double a){
	return 0.0001 * a;
}
double ftstoms(double a){
	return 0.092903 * a;
}
double ftoc(double a){
	return (a - 32) * 5/9 ;
}
double ktoc(double a){
	return (a - 273.15);
}
double ctof(double a){
	return (a * 9/5) + 32;
}
double ktof(double a){
	return (1.8 * a) - 459.67;
}
double ctok(double a){
	return (a + 273.15);
}
double ftok(double a){
	return (a + 459.67) / 1.8;
}
void opt(){
	printf("\nPlease enter your option : ");
}
void ln(){
	printf("\n\n---------------------------------------------------\n\n");
}