#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{  char matris[10][10];
	int puan1=0, puan2=0, puan3=0, puan4=0, puan5=0,can=3;
	int konum1,konum2,konum3,konum4,konum5;
	int muhafiz1r,muhafiz2r,muhafiz3r,muhafiz4r,muhafiz5r;
    int muhafiz1c,muhafiz2c,muhafiz3c,muhafiz4c,muhafiz5c;
    int kacmuhafiz=0;
    int i, j, tpuan=0;
    char yon;
	int satir=1,sutun=3;
	int sw;
	for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matris[i][j]=' ';
        }
    }
    
  int don1=0;
  int don2=0;  
    
    
int elmas1r,elmas1c,elmas2r,elmas2c,elmas3r,elmas3c,elmas4r,elmas4c,elmas5r,elmas5c,kacelmas=0;
while(don2<100){
while(don1<100){
srand(time(NULL));
elmas1r=rand()%10;
elmas1c=rand()%10;
elmas2r=rand()%10;
elmas2c=rand()%10;
elmas3r=rand()%10;
elmas3c=rand()%10;
elmas4r=rand()%10;
elmas4c=rand()%10;
elmas5r=rand()%10;
elmas5c=rand()%10;
matris[elmas1r][elmas1c]='*';
matris[elmas2r][elmas2c]='*';
matris[elmas3r][elmas3c]='*';
matris[elmas4r][elmas4c]='*';
matris[elmas5r][elmas5c]='*';
if(matris[satir][sutun]=='*')
	{
	matris[satir][sutun]==' ';
	continue;
	}
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++){
    if (matris[i][j]=='*')
    kacelmas+=1;
    }
    
	
}
if(kacelmas==5)
break;
else
kacelmas=0;
don1++;
for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matris[i][j]=' ';
        }
    }}
	if(don1==100)
	continue;
 	don1=0;   
    
while(don1<100){

//1
muhafiz1r=rand()%3;
muhafiz1r--;
muhafiz1r+=elmas1r;
muhafiz1r=abs(muhafiz1r);
if(muhafiz1r==10)
muhafiz1r--;

//2
muhafiz1c=rand()%3;
muhafiz1c--;
muhafiz1c+=elmas1c;
muhafiz1c=abs(muhafiz1c);
if(muhafiz1c==10)
muhafiz1c--;

//3
muhafiz2r=rand()%3;
muhafiz2r--;
muhafiz2r+=elmas2r;
muhafiz2r=abs(muhafiz2r);
if(muhafiz2r==10)
muhafiz2r--;

//4
muhafiz2c=rand()%3;
muhafiz2c--;
muhafiz2c+=elmas2c;
muhafiz2c=abs(muhafiz2c);
if(muhafiz2c==10)
muhafiz2c--;

//5
muhafiz3r=rand()%3;
muhafiz3r--;
muhafiz3r+=elmas3r;
muhafiz3r=abs(muhafiz3r);
if(muhafiz3r==10)
muhafiz3r--;

//6
muhafiz3c=rand()%3;
muhafiz3c--;
muhafiz3c+=elmas3c;
muhafiz3c=abs(muhafiz3c);
if(muhafiz3c==10)
muhafiz3c--;

//7
muhafiz4r=rand()%3;
muhafiz4r--;
muhafiz4r+=elmas4r;
muhafiz4r=abs(muhafiz4r);
if(muhafiz4r==10)
muhafiz4r--;
//8
muhafiz4c=rand()%3;
muhafiz4c--;
muhafiz4c+=elmas4c;
muhafiz4c=abs(muhafiz4c);
if(muhafiz4c==10)
muhafiz4c--;

//9
muhafiz5r=rand()%3;
muhafiz5r--;
muhafiz5r+=elmas5r;
muhafiz5r=abs(muhafiz5r);
if(muhafiz5r==10)
muhafiz5r--;

//10
muhafiz5c=rand()%3;
muhafiz5c--;
muhafiz5c+=elmas5c;
muhafiz5c=abs(muhafiz5c);
if(muhafiz5c==10)
muhafiz5c--;

if(muhafiz1r==elmas1r&&muhafiz1c==elmas1c)
continue;
if(muhafiz2r==elmas2r&&muhafiz2c==elmas2c)
continue;
if(muhafiz3r==elmas3r&&muhafiz3c==elmas4r)
continue;
if(muhafiz4r==elmas4r&&muhafiz4c==elmas4c)
continue;
if(muhafiz5r==elmas5r&&muhafiz5c==elmas5c)
continue;
matris[muhafiz1r][muhafiz1c]='M';
matris[muhafiz2r][muhafiz2c]='M';
matris[muhafiz3r][muhafiz3c]='M';
matris[muhafiz4r][muhafiz4c]='M';
matris[muhafiz5r][muhafiz5c]='M';
matris[elmas1r][elmas1c]='*';
matris[elmas2r][elmas2c]='*';
matris[elmas3r][elmas3c]='*';
matris[elmas4r][elmas4c]='*';
matris[elmas5r][elmas5c]='*';
if(matris[satir][sutun]=='M'){
	matris[satir][sutun]==' ';
	continue;
	}
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++){
    if (matris[i][j]=='M')
    kacmuhafiz+=1;
    }
}

if(kacmuhafiz==5)
break;
else
kacmuhafiz=0;
don1++;
for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matris[i][j]=' ';
        }
    }
}
if(don1<100)
break;
else
don2++;
}



	   
 while(1)
{	system("CLS");
	if(satir==-1)
	satir=satir+1;
	if(satir==10)
	satir=satir-1;
	if(sutun==-1)
	sutun=sutun+1;
	if(sutun==10)
	sutun=sutun-1;
	tpuan=puan1+puan2+puan3+puan4+puan5;
	if(tpuan==5){
		sw=1;
	break;}
	if(can==-1){
		sw=0;
	break;}
	
	
   for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matris[i][j]=' ';
        }
    }
    matris[satir][sutun]='o';
	
	if(satir==elmas1r&&sutun==elmas1c){
		puan1=1;
		matris[elmas1r][elmas1c]='*';}
	
	if(satir==elmas2r&&sutun==elmas2c){
		puan2=1;
		matris[elmas2r][elmas2c]='*';}
	
	if(satir==elmas3r&&sutun==elmas3c){
		puan3=1;
		matris[elmas3r][elmas3c]='*';}
	
	if(satir==elmas4r&&sutun==elmas4c){
	puan4=1;
		matris[elmas4r][elmas4c]='*';}
	
	if(satir==elmas5r&&sutun==elmas5c){
		puan5=1;
		matris[elmas5r][elmas5c]='*';
	}
	
	
	printf("******************************\n");
	
	
			
	konum1=(abs(satir-elmas1r)+abs(sutun-elmas1c));
	if(puan1==1)
	printf("1.elmasi topladiniz!\n");
	else
	printf("1.elmasa uzakliginiz:%d\n",konum1);
	
	konum2=(abs(satir-elmas2r)+abs(sutun-elmas2c));
	if(puan2==1)
	printf("2.elmasi topladiniz!\n");
	else
	printf("2.elmasa uzakliginiz:%d\n",konum2);	
	konum3=(abs(satir-elmas3r)+abs(sutun-elmas3c));
	if(puan3==1)
	printf("3.elmasi topladiniz!\n");
	else
	printf("3.elmasa uzakliginiz:%d\n",konum3);	
	konum4=(abs(satir-elmas4r)+abs(sutun-elmas4c));
	if(puan4==1)
	printf("4.elmasi topladiniz!\n");
	else
	printf("4.elmasa uzakliginiz:%d\n",konum4);	
	konum5=(abs(satir-elmas5r)+abs(sutun-elmas5c));
	if(puan5==1)
	printf("5.elmasi topladiniz!\n");
	else
	printf("5.elmasa uzakliginiz:%d\n",konum5);	
	
	if(satir==muhafiz1r&&sutun==muhafiz1c){
    can+=-1;
    satir=1;
    sutun=3;
    printf("Muhafiz! devam etmek icin herhangi bir tusa bas!!!");
    getch();
    continue;
}
if(satir==muhafiz2r&&sutun==muhafiz2c){
    can+=-1;
    satir=1;
    sutun=3;
    printf("Muhafiz! devam etmek icin herhangi bir tusa bas!!!");
    getch();
    continue;
}
if(satir==muhafiz3r&&sutun==muhafiz3c){
    can+=-1;
    satir=1;
    sutun=3;
    printf("Muhafiz! devam etmek icin herhangi bir tusa bas!!!");
    getch();
    continue;
}
if(satir==muhafiz4r&&sutun==muhafiz4c){
    can+=-1;
    satir=1;
    sutun=3;
    printf("Muhafiz! devam etmek icin herhangi bir tusa bas!!!");
    getch();
    continue;
}
if(satir==muhafiz5r&&sutun==muhafiz5c){
    can+=-1;
    satir=1;
    sutun=3;
    printf("Muhafiz! devam etmek icin herhangi bir tusa bas!!!");
    getch();
    continue;
}		
		
	printf("*********************\n");
    for(i=0;i<10;i++)
    {	printf("*");
        for(j=0;j<10;j++)
        {
            printf("%c ",matris[i][j]);
        }
        printf("*\n");
    }
    printf("********************\n");
    printf("puan:%d",tpuan);
    printf("can:%d",can);
    
    yon=_getch();
    if(yon=='q')
     break;
    switch(yon){
    case 'w':
        {satir=satir-1;
        break;}
    case 'a':
        {sutun=sutun-1;
        break;}
    case 's':
        {satir=satir+1;
        break;}
    case 'd':
        {sutun=sutun+1;
        break;}
        
    default:
        continue;}
    }
    if(!sw)
    printf("Oyunu Kaybettiniz");
    if(sw)
    printf("Oyunu Kazandýnýz");
        
        
    
}
