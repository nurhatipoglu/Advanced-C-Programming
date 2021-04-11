#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Struct{
	int x;
	int dizi1[6];
	char dizi2[6][15];
};

int main(){
	struct Struct sayi;
	printf("6 basamakli sayi giriniz:");
	scanf("%d",&sayi.x);
	int i,j;
	int yuzbinler = sayi.x/100000; sayi.dizi1[0] =yuzbinler; 
	sayi.x = sayi.x -(yuzbinler*100000);
	int onbinler=sayi.x/10000;     sayi.dizi1[1]=onbinler; 
	sayi.x = sayi.x -(onbinler*10000);
	int binler = sayi.x/1000;      sayi.dizi1[2]=binler; 
	sayi.x = sayi.x -(binler*1000);
	int yuzler = sayi.x/100;       sayi.dizi1[3]=yuzler; 
	sayi.x = sayi.x -(yuzler*100);
	int onlar = sayi.x/10;         sayi.dizi1[4]=onlar; 
	sayi.x = sayi.x -(onlar*10);
	int birler = sayi.x;           sayi.dizi1[5]=birler;
	
    for(i=0;i<6;i++){
    	printf("%d",sayi.dizi1[i]);
	}
	printf("\n");
	for(i=0;i<6;i++){
		switch(sayi.dizi1[i]){
			case 1: strcpy(sayi.dizi2[i],"bir"); break;
		    case 2: strcpy(sayi.dizi2[i],"iki");break;
		    case 3: strcpy(sayi.dizi2[i],"uc");break;
			case 4: strcpy(sayi.dizi2[i],"dort");break;
			case 5: strcpy(sayi.dizi2[i],"bes");break;
			case 6: strcpy(sayi.dizi2[i],"alti");break;
			case 7: strcpy(sayi.dizi2[i],"yedi");break;
			case 8: strcpy(sayi.dizi2[i],"sekiz");break;
			case 9: strcpy(sayi.dizi2[i],"dokuz");break;
		}
	}
	for(i=1;i<=4;i=i+3){
		switch(sayi.dizi1[i]){
		case 1: strcpy(sayi.dizi2[i],"on"); break;
		case 2: strcpy(sayi.dizi2[i],"yirmi");break;
		case 3: strcpy(sayi.dizi2[i],"otuz");break;
		case 4: strcpy(sayi.dizi2[i],"kirk");break;
		case 5: strcpy(sayi.dizi2[i],"elli");break;
		case 6: strcpy(sayi.dizi2[i],"altmis");break;
		case 7: strcpy(sayi.dizi2[i],"yetmis");break;
		case 8: strcpy(sayi.dizi2[i],"seksen");break;
		case 9: strcpy(sayi.dizi2[i],"doksan");break;
	    }
	}
	if(!(strcmp(sayi.dizi2[0],"bir") || strcmp(sayi.dizi2[3],"bir")))printf("yuz %s %s bin yuz %s %s",sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[4],sayi.dizi2[5]);
    else if(!(strcmp(sayi.dizi2[0],"bir")))printf("yuz %s %s bin %s yuz %s %s",sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5]); 
    else if(!(strcmp(sayi.dizi2[3],"bir")))printf("%s yuz %s %s bin yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[4],sayi.dizi2[5]);
	else printf("%s yuz %s %s bin %s yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5]);
}