#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char kelimeler[10][100]={"kapi","pil" ,"alarm", "bilgisayar", "kablo"};
    int s;char temp[50],kelime,harf;
    char oyun[50];
    srand(time(0));
    int i,soru,k=0;
    s=rand()%5;
    printf("%d ",s);
    k=strlen(kelimeler[s]);
    printf("%d ",k);
    strcpy(temp,kelimeler[s]);
        
    printf("%s\n",temp);
    for(i=0;i<k;i++)
    {
        oyun[i]='_';
    }
    for(i=k*2;i>0;i--)
    {
        printf("%s\n",oyun);
        printf("Bir harf giriniz(%d kadar hakkynyz var): ",i);
        scanf(" %c",&harf);
        for(k=0;k<strlen(oyun);k++)
        {
            if(harf==temp[k])
            {
                oyun[k]=temp[k];
            }
        }
        if(!(strcmp(temp,oyun)))
        {
            printf("Kazandynyz!..");
            break;
        }
    }
    if(i==0)
    {
        printf("Kaybettiniz!..");
    }
}