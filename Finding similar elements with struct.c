#include<stdio.h>

struct Metin{
	char metin[20];
	int uzunluk;
	int sessiz;
	int sesli;
};

void DegerAl(struct Metin kelime[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d. kelimeyi giriniz:",i+1);
		scanf("%s",&(kelime+i)->metin);
	}
	printf("\n");
}

void Hesapla(struct Metin kelime[],int n){
	int l;
	for(l=0;l<n;l++){
		(kelime[l].sesli)=0;
		(kelime[l].sessiz)=0;
	}
	int j,k;
	for(j=0;j<n;j++){
		for(k=0;kelime[j].metin[k] != '\0' ;k++ ){
		 if(kelime[j].metin[k]=='a'||kelime[j].metin[k]=='e'||kelime[j].metin[k]=='i'||kelime[j].metin[k]=='o'||kelime[j].metin[k]=='u')
		 (kelime[j].sesli)++;
		 else
		 (kelime[j].sessiz)++;
		}
	}	
	
	int i,s=0;
	for(i=0;i<n;i++){
		kelime[i].uzunluk = strlen(kelime[i].metin);
		printf("%d.Eleman %s uzunluk: %d,sesli harf: %d,sessiz harf: %d\n",i+1,kelime[i].metin,kelime[i].uzunluk,kelime[i].sesli,kelime[i].sessiz);
	}
}

void Benzerlik(struct Metin kelime[],int n){
	char *a,*b;
	int i,j,k,l,enb=0,puan;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    puan=0;
		    if(i == j) continue;  /* Eger if ÅŸartÄ± saÄŸlanÄ±rsa continue deyimi ile j degeri bir artar.
			                     AynÄ± indisteki kelimeyi karÅŸÄ±laÅŸtÄ±rmamak iÃ§in yapÄ±lÄ±r.*/

		    for(k=0;kelime[i].metin[k] != '\0';k++){
			    if(kelime[i].metin[k]==kelime[j].metin[k]) puan +=3;
			    else if(kelime[i].metin[k]==kelime[j].metin[k-1]||kelime[i].metin[k]==kelime[j].metin[k+1]) puan +=2;
			    else
				{
					for(l = 0; kelime[i].metin[l] != '\0'; l++)
					{
						if(kelime[i].metin[l] == kelime[j].metin[l]) puan += 1;
					}
				}
			}
			if(puan > enb)
			{
				enb = puan;
				a = kelime[i].metin;
				b = kelime[j].metin;
			}
		}
	}
	printf("En cok %s - %s benzerlik gosteriyor.\nBenzerlik Puani : %d",a,b,enb);	
}

void Goster(struct Metin kelime[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d. eleman = %s\n",i+1,kelime[i].metin);
	}
}

int main(){
	struct Metin kelime[15];
	
	DegerAl(kelime,5);
	Hesapla(kelime,5);
	Goster(kelime,5);
	Benzerlik(kelime,5);
}