#include <stdio.h>
#include "unitcon.h"
int main(){
	int a,b,c;
	double ent,prt;
	char arr[][7]={"mm_to","cm_to","m_to","km_to","feetto","inch_to","yard_to","mile_to"};
	char arr1[][7]={"mm","cm","m","km","feet","inch","yard","mile"};
	char arr2[][8]={"mm2_to","cm2_to","m2_to","inch2_to","foot2_to","yard2_to"};
	char arr3[][8]={"mm2","cm2","m2","inch2","foot2","yard2"};
	char arr4[][10]={"cm3_to","m3_to","L_to","inch3_to","foot3_to","US_gal_to","Imp_gal_to","US_brl_to"};
	char arr5[][10]={"cm3","m3","L","inch3","foot3","US_gal","Imp_gal","US_brl"};
	char arr6[][10]={"g_to","kg_to","tonne_to","shton_to","Lton_to","lb_to","oz_to"};
	char arr7[][10]={"g","kg","tonne","shton","Lton","lb","oz"};
	char arr8[][10]={"g/ml_to","kg/m3_to","lb/ft3_to","lb/in3_to"};
	char arr9[][10]={"g/ml","kg/m3","lb/ft3","lb/in3"};
	char arr10[][10]={"L/sec_to","L/min_to","M3/hr_to","ft3/min_to","ft3/hr_to","gal/min_to","USbrl/d_to"};
	char arr11[][10]={"L/sec","L/min","M3/hr","ft3/min","ft3/hr","gal/min","US brl/d"};
	char arr12[][10]={"Nm3/hr_to","scfh_to","scfm_to"};
	char arr13[][10]={"Nm3/hr","scfh","scfm"};
	char arr14[][10]={"kg/h_to","lb/hour_to","kg/s_to","t/h_to"};
	char arr15[][10]={"kg/h","lb/hour","kg/s","t/h"};
	char arr16[][10]={"bar_to","psi_to","kPa_to","MPa_to","kgf/cm2_to","mm_Hg_to","atm_to"};
	char arr17[][10]={"bar","psi","kPa","MPa","kgf/cm2","mm_Hg","atm"};
	char arr18[][10]={"mH2O_to","ftH2O_to","cmhg_to","inhg_to","inH2O_to","Pa_to"};
	char arr19[][10]={"mH2O","ftH2O","cmhg","inhg","inH2O","Pa"};
	char arr20[][10]={"m/s_to","m/min_to","km/h_to","ft/s_to","ft/min_to","mi/h_to"};
	char arr21[][10]={"m/s","m/min","km/h","ft/s","ft/min","mi/h"};
	char arr22[][10]={"Nm_to","kgfm_to","ftlb_to","inlb_to"};
	char arr23[][10]={"Nm","kgfm","ftlb","inlb"};
	char arr24[][10]={"cp_to","poise_to","lb/fts_to"};
	char arr25[][10]={"cp","poise","lb/(ft.s)"};
	char arr26[][10]={"cs_to","St_to","ft2/s_to","m2/s_to"};
	char arr27[][10]={"cs","St","ft2/s","m2/s"};
	char arr28[][10]={"C_to","F_to","K_to"};
	char arr29[][10]={"C","F","K"};
	while(1){
	printf("Unit Convertor:\n\n");
	printf("The Options :\n\n");
	printf("1 - Length Units\n2 - Area Units\n3 - Volume Units\n4 - Mass Units\n5 - Density Units\n6 - Volumetric Liquid Flow Units\n7 - Volumetric Gas Flow Units\n8 - Mass Flow Units\n9 - High Pressure Units\n10 - Low Pressure Units\n11 - Speed Units\n12 - Torque Units\n13 - Dynamic Viscosity Units\n14 - Kinematic Viscosity Units\n15 - Temperature Conversion Formulas\n16 - Exit\n");
	opt();
	scanf("%d",&c);
	fflush(stdin);
	if(c==1){
	menubar1(arr,-1);
	opt();
	scanf("%d",&a);
	menubar1(arr1,a-1);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln();
	if(a==1){
		if(b==1){
			prt=mmtocm(ent);
			printf("Converted value : %lf cm\n",prt);
		}else if(b==2){
			prt=mmtom(ent);
			printf("Converted value : %lf m\n",prt);
		}else if(b==3){
			prt=mmtokm(ent);
			printf("Converted value : %lf km\n",prt);
		}else if(b==4){
			prt=mmtofeet(ent);
			printf("Converted value : %lf feet\n",prt);
		}else if(b==5){
			prt=mmtoinch(ent);
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=mmtoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=mmtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}}else if(a==2){
			if(b==1){
			prt=mmtocm(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtom(ent);
			printf("Converted value : %lf m\n",prt);
		}else if(b==3){
			prt=cmtokm(ent);
			printf("Converted value : %lf km\n",prt);
		}else if(b==4){
			prt=cmtofeet(ent);
			printf("Converted value : %lf feet\n",prt);
		}else if(b==5){
			prt=cmtoinch(ent);
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=cmtoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=cmtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==3){
			if(b==1){
			prt=mmtom(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtom(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtokm(ent);
			printf("Converted value : %lf km\n",prt);
		}else if(b==4){
			prt=mtofeet(ent);
			printf("Converted value : %lf feet\n",prt);
		}else if(b==5){
			prt=mtoinch(ent);
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=mtoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=mtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==4){
			if(b==1){
			prt=mmtokm(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtokm(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtokm(1);
			prt=ent / prt;
			printf("Converted value : %lf m\n",prt);
		}else if(b==4){
			prt=kmtofeet(ent);
			printf("Converted value : %lf feet\n",prt);
		}else if(b==5){
			prt=kmtoinch(ent);
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=kmtoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=kmtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==5){
			if(b==1){
			prt=mmtofeet(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtofeet(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtofeet(1);
			prt=ent / prt;
			printf("Converted value : %lf m\n",prt);
		}else if(b==4){
			prt=kmtofeet(1);
			prt=ent / prt;
			printf("Converted value : %lf km\n",prt);
		}else if(b==5){
			prt=inchtofeet(ent);
			prt=ent / prt;
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=feettoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=feettomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==6){
			if(b==1){
			prt=mmtoinch(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtoinch(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtoinch(1);
			prt=ent / prt;
			printf("Converted value : %lf m\n",prt);
		}else if(b==4){
			prt=kmtoinch(1);
			prt=ent / prt;
			printf("Converted value : %lf km\n",prt);
		}else if(b==5){
			prt=inchtofeet(ent);
			printf("Converted value : %lf feet\n",prt);
		}else if(b==6){
			prt=inchtoyards(ent);
			printf("Converted value : %lf yard\n",prt);
		}else if(b==7){
			prt=inchtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==7){
			if(b==1){
			prt=mmtoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf m\n",prt);
		}else if(b==4){
			prt=kmtoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf km\n",prt);
		}else if(b==5){
			prt=inchtoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=feettoyards(1);
			prt=ent / prt;
			printf("Converted value : %lf feet\n",prt);
		}else if(b==7){
			prt=yardtomiles(ent);
			printf("Converted value : %lf mile\n",prt);
		}
	}else if(a==8){
			if(b==1){
			prt=mmtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf mm\n",prt);
		}else if(b==2){
			prt=cmtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf cm\n",prt);
		}else if(b==3){
			prt=mtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf m\n",prt);
		}else if(b==4){
			prt=kmtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf km\n",prt);
		}else if(b==5){
			prt=inchtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf inch\n",prt);
		}else if(b==6){
			prt=feettomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf feet\n",prt);
		}else if(b==7){
			prt=yardtomiles(1);
			prt=ent / prt;
			printf("Converted value : %lf yard\n",prt);
		}
	}
}else if(c==2){
	menubar2(arr2,-1);
	opt();
	scanf("%d",&a);
	menubar2(arr3,a-1);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln();
	if(a==1){
		if(b==1){
			prt=(mmtocm(ent) * mmtocm(ent)) / ent;
			printf("Converted value : %lf cm2\n",prt);
		}else if(b==2){
			prt=(mmtom(ent) * mmtom(ent)) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==3){
			prt=(mmtoinch(ent) * mmtoinch(ent)) / ent;
			printf("Converted value : %lf inch2\n",prt);
		}else if(b==4){
			prt= (mmtofeet(ent) * mmtofeet(ent)) / ent;
			printf("Converted value : %lf foot2\n",prt);
		}else if(b==5){
			prt=(mmtoyards(ent) * mmtoyards(ent)) / ent;
			printf("Converted value : %lf yard2\n",prt);
		}
}else if(a==2){
	if(b==1){
		prt=mmtocm(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
		printf("Converted value : %lf cm2\n",prt);
		}else if(b==2){
			prt=(cmtom(ent) * cmtom(ent)) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==3){
			prt=(cmtoinch(ent) * cmtoinch(ent)) / ent;
			printf("Converted value : %lf inch2\n",prt);
		}else if(b==4){
			prt= (cmtofeet(ent) * cmtofeet(ent)) / ent;
			printf("Converted value : %lf foot2\n",prt);
		}else if(b==5){
			prt=(cmtoyards(ent) * cmtoyards(ent)) / ent;
			printf("Converted value : %lf yard2\n",prt);
		}
}else if(a==3){
	if(b==1){
		prt=mmtom(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
		printf("Converted value : %lf cm2\n",prt);
		}else if(b==2){
			prt=cmtom(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==3){
			prt=(mtoinch(ent) * mtoinch(ent)) / ent;
			printf("Converted value : %lf inch2\n",prt);
		}else if(b==4){
			prt= (mtofeet(ent) * mtofeet(ent)) / ent;
			printf("Converted value : %lf foot2\n",prt);
		}else if(b==5){
			prt=(mtoyards(ent) * mtoyards(ent)) / ent;
			printf("Converted value : %lf yard2\n",prt);
		}
}else if(a==4){
	if(b==1){
		prt=mmtoinch(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
		printf("Converted value : %lf mm2\n",prt);
		}else if(b==2){
			prt=cmtoinch(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf cm2\n",prt);
		}else if(b==3){
			prt=mtoinch(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==4){
			prt= (inchtofeet(ent) * inchtofeet(ent)) / ent;
			printf("Converted value : %lf foot2\n",prt);
		}else if(b==5){
			prt=(inchtoyards(ent) * inchtoyards(ent)) / ent;
			printf("Converted value : %lf yard2\n",prt);
		}
}else if(a==5){
	if(b==1){
		prt=mmtofeet(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
		printf("Converted value : %lf mm2\n",prt);
		}else if(b==2){
			prt=cmtofeet(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf cm2\n",prt);
		}else if(b==3){
			prt=mtofeet(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==4){
			prt=inchtofeet(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf inch2\n",prt);
		}else if(b==5){
			prt=(feettoyards(ent) * feettoyards(ent)) / ent;
			printf("Converted value : %lf yard2\n",prt);
		}
}else if(a==6){
	if(b==1){
		prt=mmtoyards(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
		printf("Converted value : %lf mm2\n",prt);
		}else if(b==2){
			prt=cmtoyards(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf cm2\n",prt);
		}else if(b==3){
			prt=mtoyards(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf m2\n",prt);
		}else if(b==4){
			prt=inchtoyards(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf inch2\n",prt);
		}else if(b==5){
				prt=feettoyards(1);
		prt=ent / prt;
		prt=(prt * prt) / ent;
			printf("Converted value : %lf foot2\n",prt);
		}
}
}else if(c==3){
	menubar3(arr4,-1,8);
	opt();
	scanf("%d",&a);
	menubar3(arr5,a-1,8);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln();
	if(a==1){
		if(b==1){
			prt=cmtom3(ent);
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=cmtol(ent);
			printf("Converted value : %lf L\n",prt);
		}else if(b==3){
			prt=cmtoinch3(ent);
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==4){
			prt=cmtofoot3(ent);
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==5){
			prt=cmtousgal(ent);
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==6){
			prt=cmtoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=cmtous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=cmtom3(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==2){
			prt=mtol(ent);
			printf("Converted value : %lf L\n",prt);
		}else if(b==3){
			prt=mtoinch3(ent);
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==4){
			prt=mtofoot3(ent);
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==5){
			prt=mtousgal(ent);
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==6){
			prt=mtoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=mtous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=cmtol(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtol(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltoinch3(ent);
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==4){
			prt=ltofoot3(ent);
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==5){
			prt=ltousgal(ent);
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==6){
			prt=ltoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=ltous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=cmtoinch3(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtoinch3(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltoinch3(1);
			prt=ent / prt;
			printf("Converted value : %lf L\n",prt);
		}else if(b==4){
			prt=inchtofoot3(ent);
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==5){
			prt=inchtousgal(ent);
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==6){
			prt=inchtoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=inchtous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=cmtofoot3(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtofoot3(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltofoot3(1);
			prt=ent / prt;
			printf("Converted value : %lf L\n",prt);
		}else if(b==4){
			prt=inchtofoot3(1);
			prt=ent / prt;
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==5){
			prt=foottousgal(ent);
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==6){
			prt=foottoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=foottous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=cmtousgal(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtousgal(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltousgal(1);
			prt=ent / prt;
			printf("Converted value : %lf L\n",prt);
		}else if(b==4){
			prt=inchtousgal(1);
			prt=ent / prt;
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==5){
			prt=foottousgal(1);
			prt=ent / prt;
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==6){
			prt=usgaltoimpgal(ent);
			printf("Converted value : %lf Imp gal\n",prt);
		}else if(b==7){
			prt=usgaltous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==7){
		if(b==1){
			prt=cmtoimpgal(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtoimpgal(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltoimpgal(1);
			prt=ent / prt;
			printf("Converted value : %lf L\n",prt);
		}else if(b==4){
			prt=inchtoimpgal(1);
			prt=ent / prt;
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==5){
			prt=foottoimpgal(1);
			prt=ent / prt;
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==6){
			prt=usgaltoimpgal(1);
			prt=ent / prt;
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==7){
			prt=impgaltous(ent);
			printf("Converted value : %lf US Brl\n",prt);
		}}else if(a==8){
		if(b==1){
			prt=cmtous(1);
		    prt=ent / prt;
			printf("Converted value : %lf cm3\n",prt);
		}else if(b==2){
			prt=mtous(1);
		    prt=ent / prt;
			printf("Converted value : %lf m3\n",prt);
		}else if(b==3){
			prt=ltous(1);
			prt=ent / prt;
			printf("Converted value : %lf L\n",prt);
		}else if(b==4){
			prt=inchtous(1);
			prt=ent / prt;
			printf("Converted value : %lf inch3\n",prt);
		}else if(b==5){
			prt=foottous(1);
			prt=ent / prt;
			printf("Converted value : %lf foot3\n",prt);
		}else if(b==6){
			prt=usgaltous(1);
			prt=ent / prt;
			printf("Converted value : %lf US gal\n",prt);
		}else if(b==7){
			prt=impgaltous(1);
			prt=ent / prt;
			printf("Converted value : %lf Imp gal\n",prt);
		}}
}else if(c==4){
	menubar3(arr6,-1,7);
	opt();
	scanf("%d",&a);
	menubar3(arr7,a-1,7);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=gtokg(ent);
			printf("Converted value : %lf kg\n",prt);
		}else if(b==2){
			prt=gtotonne(ent);
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==3){
			prt=gtoshton(ent);
			printf("Converted value : %lf shton\n",prt);
		}else if(b==4){
			prt=gtolton(ent);
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==5){
			prt=gtolb(ent);
			printf("Converted value : %lf lb\n",prt);
		}else if(b==6){
			prt=gtooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=gtokg(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtotonne(ent);
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==3){
			prt=kgtoshton(ent);
			printf("Converted value : %lf shton\n",prt);
		}else if(b==4){
			prt=kgtolton(ent);
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==5){
			prt=kgtolb(ent);
			printf("Converted value : %lf lb\n",prt);
		}else if(b==6){
			prt=kgtooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=gtotonne(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtotonne(1);
			prt=ent / prt;
			printf("Converted value : %lf kg\n",prt);
		}else if(b==3){
			prt=tonnetoshton(ent);
			printf("Converted value : %lf shton\n",prt);
		}else if(b==4){
			prt=tonnetolton(ent);
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==5){
			prt=tonnetolb(ent);
			printf("Converted value : %lf lb\n",prt);
		}else if(b==6){
			prt=tonnetooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=gtoshton(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtoshton(1);
			prt=ent / prt;
			printf("Converted value : %lf kg\n",prt);
		}else if(b==3){
			prt=tonnetoshton(1);
			prt=ent / prt;
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==4){
			prt=shtontolton(ent);
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==5){
			prt=shtontolb(ent);
			printf("Converted value : %lf lb\n",prt);
		}else if(b==6){
			prt=shtontooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=gtolton(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtolton(1);
			prt=ent / prt;
			printf("Converted value : %lf kg\n",prt);
		}else if(b==3){
			prt=tonnetolton(1);
			prt=ent / prt;
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==4){
			prt=shtontolton(1);
			prt=ent / prt;
			printf("Converted value : %lf shton\n",prt);
		}else if(b==5){
			prt=ltontolb(ent);
			printf("Converted value : %lf lb\n",prt);
		}else if(b==6){
			prt=ltontooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=gtolb(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtolb(1);
			prt=ent / prt;
			printf("Converted value : %lf kg\n",prt);
		}else if(b==3){
			prt=tonnetolb(1);
			prt=ent / prt;
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==4){
			prt=shtontolb(1);
			prt=ent / prt;
			printf("Converted value : %lf shton\n",prt);
		}else if(b==5){
			prt=ltontolb(1);
			prt=ent / prt;
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==6){
			prt=lbtooz(ent);
			printf("Converted value : %lf oz\n",prt);
		}}else if(a==7){
		if(b==1){
			prt=gtooz(1);
			prt=ent / prt;
			printf("Converted value : %lf g\n",prt);
		}else if(b==2){
			prt=kgtooz(1);
			prt=ent / prt;
			printf("Converted value : %lf kg\n",prt);
		}else if(b==3){
			prt=tonnetooz(1);
			prt=ent / prt;
			printf("Converted value : %lf tonne\n",prt);
		}else if(b==4){
			prt=shtontooz(1);
			prt=ent / prt;
			printf("Converted value : %lf shton\n",prt);
		}else if(b==5){
			prt=ltontooz(1);
			prt=ent / prt;
			printf("Converted value : %lf Lton\n",prt);
		}else if(b==6){
			prt=lbtooz(1);
			prt=ent / prt;
			printf("Converted value : %lf lb\n",prt);
		}}
		}else if(c==5){
	menubar3(arr8,-1,4);
	opt();
	scanf("%d",&a);
	menubar3(arr9,a-1,4);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln();
	if(a==1){
		if(b==1){
			prt=gmltokgm(ent);
			printf("Converted value : %lf kg/m3\n",prt);
		}else if(b==2){
			prt=gmltolbft(ent);
			printf("Converted value : %lf lb/ft3\n",prt);
		}else if(b==3){
			prt=gmltolbin(ent);
			printf("Converted value : %lf lb/in3\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=gmltokgm(1);
			prt=ent / prt;
			printf("Converted value : %lf g/ml\n",prt);
		}else if(b==2){
			prt=kgmtolbft(ent);
			printf("Converted value : %lf lb/ft3\n",prt);
		}else if(b==3){
			prt=kgmtolbin(ent);
			printf("Converted value : %lf lb/in3\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=gmltolbft(1);
			prt=ent / prt;
			printf("Converted value : %lf g/ml\n",prt);
		}else if(b==2){
			prt=kgmtolbft(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/m3\n",prt);
		}else if(b==3){
			prt=lbfttolbin(ent);
			printf("Converted value : %lf lb/in3\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=gmltolbin(1);
			prt=ent / prt;
			printf("Converted value : %lf g/ml\n",prt);
		}else if(b==2){
			prt=kgmtolbin(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/m3\n",prt);
		}else if(b==3){
			prt=lbfttolbin(1);
			prt=ent / prt;
			printf("Converted value : %lf lb/ft3\n",prt);
		}}
}else if(c==6){
	menubar3(arr10,-1,7);
	opt();
	scanf("%d",&a);
	menubar3(arr11,a-1,7);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln();
	if(a==1){
		if(b==1){
			prt=lsectolmin(ent);
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==2){
			prt=lsectomhr(ent);
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==3){
			prt=lsectoftmin(ent);
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==4){
			prt=lsectofthr(ent);
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==5){
			prt=lsectogalmin(ent);
			printf("Converted value : %lf gal/min\n",prt);
		}else if(b==6){
			prt=lsectousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=lsectolmin(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintomhr(ent);
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==3){
			prt=lmintoftmin(ent);
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==4){
			prt=lmintofthr(ent);
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==5){
			prt=lmintogalmin(ent);
			printf("Converted value : %lf gal/min\n",prt);
		}else if(b==6){
			prt=lmintousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=lsectomhr(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintomhr(1);
			prt=ent / prt;
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==3){
			prt=mhrtoftmin(ent);
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==4){
			prt=mhrtofthr(ent);
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==5){
			prt=mhrtogalmin(ent);
			printf("Converted value : %lf gal/min\n",prt);
		}else if(b==6){
			prt=mhrtousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=lsectoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==3){
			prt=mhrtoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==4){
			prt=ftmintofthr(ent);
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==5){
			prt=ftmintogalmin(ent);
			printf("Converted value : %lf gal/min\n",prt);
		}else if(b==6){
			prt=ftmintousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=lsectofthr(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintofthr(1);
			prt=ent / prt;
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==3){
			prt=mhrtofthr(1);
			prt=ent / prt;
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==4){
			prt=ftmintofthr(1);
			prt=ent / prt;
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==5){
			prt=fthrtogalmin(ent);
			printf("Converted value : %lf gal/min\n",prt);
		}else if(b==6){
			prt=fthrtousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=lsectogalmin(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintogalmin(1);
			prt=ent / prt;
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==3){
			prt=mhrtogalmin(1);
			prt=ent / prt;
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==4){
			prt=ftmintogalmin(1);
			prt=ent / prt;
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==5){
			prt=fthrtogalmin(1);
			prt=ent / prt;
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==6){
			prt=galmintousbrld(ent);
			printf("Converted value : %lf US Brl/d\n",prt);
		}}else if(a==7){
		if(b==1){
			prt=lsectousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf L/sec\n",prt);
		}else if(b==2){
			prt=lmintousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf L/min\n",prt);
		}else if(b==3){
			prt=mhrtousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf M3/hr\n",prt);
		}else if(b==4){
			prt=ftmintousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf ft3/min\n",prt);
		}else if(b==5){
			prt=fthrtousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf ft3/hr\n",prt);
		}else if(b==6){
			prt=galmintousbrld(1);
			prt=ent / prt;
			printf("Converted value : %lf gal/min\n",prt);
		}}
	}else if(c==7){
	menubar3(arr12,-1,3);
	opt();
	scanf("%d",&a);
	menubar3(arr13,a-1,3);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=nhrtoscfh(ent);
			printf("Converted value : %lf scfh\n",prt);
		}else if(b==2){
			prt=nhrtoscfm(ent);
			printf("Converted value : %lf scfm\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=nhrtoscfh(1);
			prt=ent / prt;
			printf("Converted value : %lf Nm3/hr\n",prt);
		}else if(b==2){
			prt=scfhtoscfm(ent);
			printf("Converted value : %lf scfm\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=nhrtoscfm(1);
			prt=ent / prt;
			printf("Converted value : %lf Nm3/hr\n",prt);
		}else if(b==2){
			prt=scfhtoscfm(1);
			prt=ent / prt;
			printf("Converted value : %lf scfh\n",prt);
		}}
}else if(c==8){
	menubar3(arr14,-1,4);
	opt();
	scanf("%d",&a);
	menubar3(arr15,a-1,4);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=kghtolbhour(ent);
			printf("Converted value : %lf lb/hour\n",prt);
		}else if(b==2){
			prt=kghtokgs(ent);
			printf("Converted value : %lf kg/s\n",prt);
		}else if(b==3){
			prt=kghtoth(ent);
			printf("Converted value : %lf t/h \n",prt);
		}}else if(a==2){
			if(b==1){
			prt=kghtolbhour(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/h\n",prt);
		}else if(b==2){
			prt=lbhourtokgs(ent);
			printf("Converted value : %lf kg/s\n",prt);
		}else if(b==3){
			prt=lbhourtoth(ent);
			printf("Converted value : %lf t/h \n",prt);
		}}else if(a==3){
			if(b==1){
			prt=kghtokgs(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/h\n",prt);
		}else if(b==2){
			prt=lbhourtokgs(1);
			prt=ent / prt;
			printf("Converted value : %lf lb/hour\n",prt);
		}else if(b==3){
			prt=kgstoth(ent);
			printf("Converted value : %lf t/h \n",prt);
		}}else if(a==4){
			if(b==1){
			prt=kghtoth(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/h\n",prt);
		}else if(b==2){
			prt=lbhourtoth(1);
			prt=ent / prt;
			printf("Converted value : %lf lb/hour\n",prt);
		}else if(b==3){
			prt=kgstoth(1);
			prt=ent / prt;
			printf("Converted value : %lf kg/s \n",prt);
		}}
}else if(c==9){
	menubar3(arr16,-1,7);
	opt();
	scanf("%d",&a);
	menubar3(arr17,a-1,7);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=bartopsi(ent);
			printf("Converted value : %lf psi\n",prt);
		}else if(b==2){
			prt=bartokpa(ent);
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==3){
			prt=bartompa(ent);
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==4){
			prt=bartokgf(ent);
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==5){
			prt=bartommhg(ent);
			printf("Converted value : %lf mm Hg\n",prt);
		}else if(b==6){
			prt=bartoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=bartopsi(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitokpa(ent);
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==3){
			prt=psitompa(ent);
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==4){
			prt=psitokgf(ent);
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==5){
			prt=psitommhg(ent);
			printf("Converted value : %lf mm Hg\n",prt);
		}else if(b==6){
			prt=psitoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=bartokpa(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitokpa(1);
			prt=ent / prt;
			printf("Converted value : %lf psi\n",prt);
		}else if(b==3){
			prt=kpatompa(ent);
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==4){
			prt=kpatokgf(ent);
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==5){
			prt=kpatommhg(ent);
			printf("Converted value : %lf mm Hg\n",prt);
		}else if(b==6){
			prt=kpatoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=bartompa(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitompa(1);
			prt=ent / prt;
			printf("Converted value : %lf psi\n",prt);
		}else if(b==3){
			prt=kpatompa(1);
			prt=ent / prt;
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==4){
			prt=mpatokgf(ent);
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==5){
			prt=mpatommhg(ent);
			printf("Converted value : %lf mm Hg\n",prt);
		}else if(b==6){
			prt=mpatoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=bartokgf(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitokgf(1);
			prt=ent / prt;
			printf("Converted value : %lf psi\n",prt);
		}else if(b==3){
			prt=kpatokgf(1);
			prt=ent / prt;
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==4){
			prt=mpatokgf(1);
			prt=ent / prt;
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==5){
			prt=kgftommhg(ent);
			printf("Converted value : %lf mm Hg\n",prt);
		}else if(b==6){
			prt=kgftoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=bartommhg(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitommhg(1);
			prt=ent / prt;
			printf("Converted value : %lf psi\n",prt);
		}else if(b==3){
			prt=kpatommhg(1);
			prt=ent / prt;
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==4){
			prt=mpatommhg(1);
			prt=ent / prt;
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==5){
			prt=kgftommhg(1);
			prt=ent / prt;
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==6){
			prt=mmhgtoatm(ent);
			printf("Converted value : %lf atm\n",prt);
		}}else if(a==7){
		if(b==1){
			prt=bartoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf bar\n",prt);
		}else if(b==2){
			prt=psitoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf psi\n",prt);
		}else if(b==3){
			prt=kpatoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf kPa\n",prt);
		}else if(b==4){
			prt=mpatoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf MPa\n",prt);
		}else if(b==5){
			prt=kgftoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf kgf/cm2\n",prt);
		}else if(b==6){
			prt=mmhgtoatm(1);
			prt=ent / prt;
			printf("Converted value : %lf mm Hg\n",prt);
		}}
}else if(c==10){
	menubar3(arr18,-1,6);
	opt();
	scanf("%d",&a);
	menubar3(arr19,a-1,6);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=mhotoftho(ent);
			printf("Converted value : %lf ftH2O\n",prt);
		}else if(b==2){
			prt=mhotocmhg(ent);
			printf("Converted value : %lf cmHg\n",prt);
		}else if(b==3){
			prt=mhotoinhg(ent);
			printf("Converted value : %lf inHg\n",prt);
		}else if(b==4){
			prt=mhotoinho(ent);
			printf("Converted value : %lf inH2O\n",prt);
		}else if(b==5){
			prt=mhotopa(ent);
			printf("Converted value : %lf Pa\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=mhotoftho(1);
			prt=ent / prt;
			printf("Converted value : %lf mH2O\n",prt);
		}else if(b==2){
			prt=fthotocmhg(ent);
			printf("Converted value : %lf cmHg\n",prt);
		}else if(b==3){
			prt=fthotoinhg(ent);
			printf("Converted value : %lf inHg\n",prt);
		}else if(b==4){
			prt=fthotoinho(ent);
			printf("Converted value : %lf inH2O\n",prt);
		}else if(b==5){
			prt=fthotopa(ent);
			printf("Converted value : %lf Pa\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=mhotocmhg(1);
			prt=ent / prt;
			printf("Converted value : %lf mH2O\n",prt);
		}else if(b==2){
			prt=fthotocmhg(1);
			prt=ent / prt;
			printf("Converted value : %lf ftH2O\n",prt);
		}else if(b==3){
			prt=cmhgtoinhg(ent);
			printf("Converted value : %lf inHg\n",prt);
		}else if(b==4){
			prt=cmhgtoinho(ent);
			printf("Converted value : %lf inH2O\n",prt);
		}else if(b==5){
			prt=cmhgtopa(ent);
			printf("Converted value : %lf Pa\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=mhotoinhg(1);
			prt=ent / prt;
			printf("Converted value : %lf mH2O\n",prt);
		}else if(b==2){
			prt=fthotoinhg(1);
			prt=ent / prt;
			printf("Converted value : %lf ftH2O\n",prt);
		}else if(b==3){
			prt=cmhgtoinhg(1);
			prt=ent / prt;
			printf("Converted value : %lf cmHg\n",prt);
		}else if(b==4){
			prt=inhgtoinho(ent);
			printf("Converted value : %lf inH2O\n",prt);
		}else if(b==5){
			prt=inhgtopa(ent);
			printf("Converted value : %lf Pa\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=mhotoinho(1);
			prt=ent / prt;
			printf("Converted value : %lf mH2O\n",prt);
		}else if(b==2){
			prt=fthotoinho(1);
			prt=ent / prt;
			printf("Converted value : %lf ftH2O\n",prt);
		}else if(b==3){
			prt=cmhgtoinho(1);
			prt=ent / prt;
			printf("Converted value : %lf cmHg\n",prt);
		}else if(b==4){
			prt=inhgtoinho(1);
			prt=ent / prt;
			printf("Converted value : %lf inHg\n",prt);
		}else if(b==5){
			prt=inhotopa(ent);
			printf("Converted value : %lf Pa\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=mhotopa(1);
			prt=ent / prt;
			printf("Converted value : %lf mH2O\n",prt);
		}else if(b==2){
			prt=fthotopa(1);
			prt=ent / prt;
			printf("Converted value : %lf ftH2O\n",prt);
		}else if(b==3){
			prt=cmhgtopa(1);
			prt=ent / prt;
			printf("Converted value : %lf cmHg\n",prt);
		}else if(b==4){
			prt=inhgtopa(1);
			prt=ent / prt;
			printf("Converted value : %lf inHg\n",prt);
		}else if(b==5){
			prt=inhotopa(1);
			prt=ent / prt;
			printf("Converted value : %lf inH2O\n",prt);
		}}
}else if(c==11){
	menubar3(arr20,-1,6);
	opt();
	scanf("%d",&a);
	menubar3(arr21,a-1,6);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=mstommin(ent);
			printf("Converted value : %lf m/min\n",prt);
		}else if(b==2){
			prt=mstokmh(ent);
			printf("Converted value : %lf km/h\n",prt);
		}else if(b==3){
			prt=mstofts(ent);
			printf("Converted value : %lf ft/s\n",prt);
		}else if(b==4){
			prt=mstoftmin(ent);
			printf("Converted value : %lf ft/min\n",prt);
		}else if(b==5){
			prt=mstomih(ent);
			printf("Converted value : %lf mi/h\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=mstommin(1);
			prt=ent / prt;
			printf("Converted value : %lf m/s\n",prt);
		}else if(b==2){
			prt=mmintokmh(ent);
			printf("Converted value : %lf km/h\n",prt);
		}else if(b==3){
			prt=mmintofts(ent);
			printf("Converted value : %lf ft/s\n",prt);
		}else if(b==4){
			prt=mmintoftmin(ent);
			printf("Converted value : %lf ft/min\n",prt);
		}else if(b==5){
			prt=mmintomih(ent);
			printf("Converted value : %lf mi/h\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=mstokmh(1);
			prt=ent / prt;
			printf("Converted value : %lf m/s\n",prt);
		}else if(b==2){
			prt=mmintokmh(1);
			prt=ent / prt;
			printf("Converted value : %lf m/min\n",prt);
		}else if(b==3){
			prt=kmhtofts(ent);
			printf("Converted value : %lf ft/s\n",prt);
		}else if(b==4){
			prt=kmhtoftmin(ent);
			printf("Converted value : %lf ft/min\n",prt);
		}else if(b==5){
			prt=kmhtomih(ent);
			printf("Converted value : %lf mi/h\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=mstofts(1);
			prt=ent / prt;
			printf("Converted value : %lf m/s\n",prt);
		}else if(b==2){
			prt=mmintofts(1);
			prt=ent / prt;
			printf("Converted value : %lf m/min\n",prt);
		}else if(b==3){
			prt=kmhtofts(1);
			prt=ent / prt;
			printf("Converted value : %lf km/h\n",prt);
		}else if(b==4){
			prt=ftstoftmin(ent);
			printf("Converted value : %lf ft/min\n",prt);
		}else if(b==5){
			prt=ftstomih(ent);
			printf("Converted value : %lf mi/h\n",prt);
		}}else if(a==5){
		if(b==1){
			prt=mstoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf m/s\n",prt);
		}else if(b==2){
			prt=mmintoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf m/min\n",prt);
		}else if(b==3){
			prt=kmhtoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf km/h\n",prt);
		}else if(b==4){
			prt=ftstoftmin(1);
			prt=ent / prt;
			printf("Converted value : %lf ft/s\n",prt);
		}else if(b==5){
			prt=ftmintomih(ent);
			printf("Converted value : %lf mi/h\n",prt);
		}}else if(a==6){
		if(b==1){
			prt=mstomih(1);
			prt=ent / prt;
			printf("Converted value : %lf m/s\n",prt);
		}else if(b==2){
			prt=mmintomih(1);
			prt=ent / prt;
			printf("Converted value : %lf m/min\n",prt);
		}else if(b==3){
			prt=kmhtomih(1);
			prt=ent / prt;
			printf("Converted value : %lf km/h\n",prt);
		}else if(b==4){
			prt=ftstomih(1);
			prt=ent / prt;
			printf("Converted value : %lf ft/s\n",prt);
		}else if(b==5){
			prt=ftmintomih(1);
			prt=ent / prt;
			printf("Converted value : %lf mi/h\n",prt);
		}}
}else if(c==12){
	menubar3(arr22,-1,4);
	opt();
	scanf("%d",&a);
	menubar3(arr23,a-1,4);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=nmtokgfm(ent);
			printf("Converted value : %lf kgfm\n",prt);
		}else if(b==2){
			prt=nmtoftlb(ent);
			printf("Converted value : %lf ftlb/h\n",prt);
		}else if(b==3){
			prt=nmtoinlb(ent);
			printf("Converted value : %lf inlb/s\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=nmtokgfm(1);
			prt=ent / prt;
			printf("Converted value : %lf Nm\n",prt);
		}else if(b==2){
			prt=kgfmtoftlb(ent);
			printf("Converted value : %lf ftlb/h\n",prt);
		}else if(b==3){
			prt=kgfmtoinlb(ent);
			printf("Converted value : %lf inlb/s\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=nmtoftlb(1);
			prt=ent / prt;
			printf("Converted value : %lf Nm\n",prt);
		}else if(b==2){
			prt=kgfmtoftlb(1);
			prt=ent / prt;
			printf("Converted value : %lf kgfm/h\n",prt);
		}else if(b==3){
			prt=ftlbtoinlb(ent);
			printf("Converted value : %lf inlb/s\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=nmtoinlb(1);
			prt=ent / prt;
			printf("Converted value : %lf Nm\n",prt);
		}else if(b==2){
			prt=kgfmtoinlb(1);
			prt=ent / prt;
			printf("Converted value : %lf kgfm/h\n",prt);
		}else if(b==3){
			prt=ftlbtoinlb(1);
			prt=ent / prt;
			printf("Converted value : %lf ftlb/s\n",prt);
		}}
}else if(c==13){
	menubar3(arr24,-1,3);
	opt();
	scanf("%d",&a);
	menubar3(arr25,a-1,3);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=cptopoise(ent);
			printf("Converted value : %lf poise\n",prt);
		}else if(b==2){
			prt=cptolbfts(ent);
			printf("Converted value : %lf lb/fts\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=cptopoise(1);
			prt=ent / prt;
			printf("Converted value : %lf cp\n",prt);
		}else if(b==2){
			prt=poisetolbfts(ent);
			printf("Converted value : %lf lb/fts\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=cptolbfts(1);
			prt=ent / prt;
			printf("Converted value : %lf cp\n",prt);
		}else if(b==2){
			prt=poisetolbfts(1);
			prt=ent / prt;
			printf("Converted value : %lf poise\n",prt);
		}}
	}else if(c==14){
	menubar3(arr26,-1,4);
	opt();
	scanf("%d",&a);
	menubar3(arr27,a-1,4);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent);
	ln(); 
	if(a==1){
		if(b==1){
			prt=cstost(ent);
			printf("Converted value : %lf St\n",prt);
		}else if(b==2){
			prt=cstofts(ent);
			printf("Converted value : %lf ft2/s\n",prt);
		}else if(b==3){
			prt=cstoms(ent);
			printf("Converted value : %lf m2/s\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=cstost(1);
			prt=ent / prt;
			printf("Converted value : %lf cs\n",prt);
		}else if(b==2){
			prt=sttofts(ent);
			printf("Converted value : %lf ft2/s\n",prt);
		}else if(b==3){
			prt=sttoms(ent);
			printf("Converted value : %lf m2/s\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=cstofts(1);
			prt=ent / prt;
			printf("Converted value : %lf cs\n",prt);
		}else if(b==2){
			prt=sttofts(1);
			prt=ent / prt;
			printf("Converted value : %lf St/s\n",prt);
		}else if(b==3){
			prt=ftstoms(ent);
			printf("Converted value : %lf m2/s\n",prt);
		}}else if(a==4){
		if(b==1){
			prt=cstoms(1);
			prt=ent / prt;
			printf("Converted value : %lf cs\n",prt);
		}else if(b==2){
			prt=sttoms(1);
			prt=ent / prt;
			printf("Converted value : %lf St/s\n",prt);
		}else if(b==3){
			prt=ftstoms(1);
			prt=ent / prt;
			printf("Converted value : %lf ft2/s\n",prt);
		}}
	}else if(c==15){
	menubar3(arr28,-1,3);
	opt();
	scanf("%d",&a);
	menubar3(arr29,a-1,3);
	opt();
	scanf("%d",&b);
	printf("Please enter the number : ");
	scanf("%lf",&ent); 
	ln();
	if(a==1){
		if(b==1){
			prt=ctof(ent);
			printf("Converted value : %lf Fahrenheit\n",prt);
		}else if(b==2){
			prt=ctok(ent);
			printf("Converted value : %lf Kelvin/s\n",prt);
		}}else if(a==2){
		if(b==1){
			prt=ftoc(ent);
			printf("Converted value : %lf Celsius\n",prt);
		}else if(b==2){
			prt=ftok(ent);
			printf("Converted value : %lf Kelvin/s\n",prt);
		}}else if(a==3){
		if(b==1){
			prt=ktoc(ent);
			printf("Converted value : %lf Celsius\n",prt);
		}else if(b==2){
			prt=ktof(ent);
			printf("Converted value : %lf Fahrenheit/s\n",prt);
		}}
}else if(c==16){
	printf("Exiting...");
	break;
}
printf("\n---------------------------------------------------\n\n");
}
}
