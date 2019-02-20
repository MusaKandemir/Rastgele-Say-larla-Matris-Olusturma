#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<time.h>
using namespace std;
bool elemanKontrol (int matris[10][10],int sayi, int i, int j) // 
{
	   int satir=10 ,sutun=10;	   
	   int degisken=i;  // i nin degerini degiskene atad�m
	     
		 	for(int k=0;k<=i;k++) // i degerine esit olana kadar for d�ng�s� devam etti
	     	{ if(degisken!=k){ // burada degi�kenin k esit olup olmad�g�n� kontrol ettik
			 
	     		for(int m=0;m<10;m++) // yukar�da k degeri artarken burada m degeri 10 a kadar kontrol ediyor 
				     		{
	     			if(sayi==matris[k][m]) // burada ise ayn� esit deger varsa 1 degerini d�nd�r�yor
	     			{
					  
	     				return 1; // 1 d�nd�kce while tekrar d�ng�ye giriyor 
					 }
				 }
			 
			} else{
			 	for (int m=0;m<j;m++) // esit degil ise normal matris gibi j ye kadar d�ng�yr giriyor
			 	{
			 		if(sayi==matris[k][m]) // yine degerleri kontrol ediyor ayn� ise 1 degeri d�n�yor
			 		{return 1;
			 		
					 }
				 }
			 }
			 }
			
			 return 0;
}
 void olustur(int matris[10][10])
{	
int satir=10, sutun=10;
int deger1,deger2 ;
int donmeSayisi=0;   // int  matris [satir][sutun] ;
     srand ( time ( 0 ) );
     	for (int i =0 ;i<satir;i++){ // sat�r degerine esit olana kadar for d�ng�s� devam etti
		for (int j =0 ;j<sutun;j++){// sat�r degerine esit olana kadar for d�ng�s� devam etti
			deger1=rand()%100+1; // rand la gelen rasgele say�lar� deger1 e atad�m
			deger2=elemanKontrol (matris, deger1,  i, j ); // burada ise elamankontrol fonks�yonuna bagl� olaarak deger2 ile deger1 esit olup olmad�g�na bakt�
			while(deger2) // esit oldugu surece deger atama i�lemleri gerceklesti
			{
				deger1=rand()%100+1;     // return 1 geld�g� surece while dongusu devam edecek  taki 0 gelene kadar
			  deger2=elemanKontrol(matris,deger1,i,j);
			  donmeSayisi++; // burada ise kac kere while dongusune girdigini say�yor
			}
	       matris[i][j]=deger1;
	       cout<<setw(5)<<matris[i][j];
	}	
	cout<<endl;
}
cout<<endl;
cout<<"Toplam rasgele �ag�rma say�s�="<<donmeSayisi; // donme say�s�n� olsutur fonk i�inde cag�rd�k 
cout<<endl;
}
void siralama(int matris[10][10])
{
 cout<<"  100   99   98   97   96   95   94   93   92   91"<<endl;
 cout<<"  90    89   88   87   86   85   84   83   82   81"<<endl;
 cout<<"  80    79   78   77   76   75   74   73   72   71"<<endl;
 cout<<"  70    69   68   67   66   65   64   63   62   61"<<endl;
 cout<<"  60    59   58   57   56   55   54   53   52   51"<<endl;
 cout<<"  50    49   48   47   46   45   44   43   42   41"<<endl;
 cout<<"  40    39   38   37   36   35   34   33   32   31"<<endl;
 cout<<"  30    29   28   27   26   25   24   23   22   21"<<endl;
 cout<<"  20    19   18   17   16   15   14   13   12   11"<<endl;
 cout<<"  10    9     8    7    6    5    4    3    2    1"<<endl;
}		
matrisYaz() // matrisyaz fons�yonu �le fonks��yonlar� cag�r�yoruz
{
	int matris[10][10];
	cout<<"T�m elemanlar� birbirinden farkl� matris:"<<endl;
    olustur(matris);
    cout<<endl;
    cout<<"Matrisin elemanlar�n�n b�y�kten k���ge s�ralanm�� hali:"<<endl;
    cout<<endl;
    siralama(matris);    
}
int main()
{
	setlocale (LC_ALL,"Turkish");
    matrisYaz();	
	system ("pause");
	return 0 ;
}
