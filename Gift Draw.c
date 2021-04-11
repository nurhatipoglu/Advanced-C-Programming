int main(){
    int a,i;
    char sinif[13][20]={"Nur","Cagla","Cenk","Nisa","Nil","Elif","Tugay","Hasan","Arda","Eda","fehime","celal","yaren"};
    int durum[13]={0};
    srand(time(0));
    for ( i = 0; i < 13; i++) {
    for(;;){
    
        a = rand() % 13;
     
      if (durum[a]!=1 && i!=a){
            durum[a]=1;
           break;}}
        
        printf("%s -> %s\n",sinif[i],sinif[a]);}
    
    }