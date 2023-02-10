#include<iostream>
#include<locale.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
using namespace std;
int main()
{setlocale(LC_ALL,"turkish");
int bilgisayar,tur,hamle;

srand(time(NULL));	
char secim;
int bil=0;
int siz=0;
system("color 7d");
cout<<"<TAÞ KAÐIT MAKAS OYUNU>"<<endl<<endl;
cout<<" _______________________"<<endl;
cout<<"|Oyun Kýlavuzu           |"<<endl;
cout<<"|Taþ=1, Kaðýt=2, Makas=3|"<<endl;
cout<<"|_______________________| "<<endl;
cout<<"oyun kaç tur sürsün: ";cin>>tur;cout<<endl;
for(int i=0;i<tur;i++){cout<<endl;
 bilgisayar=rand()%3+1;
 cout<<"oyun hazýrlanýyor..."<<endl;
 cout<<"BEKLEYÝNÝZ..."<<endl;
Sleep(4000);
 system("cls");
 cout<<"\a";
 cout<<" _______________________"<<endl;
cout<<"|Oyun Kýlavuzu           |"<<endl;
cout<<"|Taþ=1, Kaðýt=2, Makas=3|"<<endl;
cout<<"|_______________________| "<<endl;
 cout<<"yapacaðýnýz hamleyi giriniz: ";cin>>hamle;cout<<endl;
 {  cout<<endl;
    cout<<"--------------------"<<endl;
 	if(bilgisayar==1)
 	{cout<<"Bilgisayar= Taþ"<<endl;}
 	else if(bilgisayar==2)
    {cout<<"Bilgisayar= Kaðýt"<<endl;}
    else if(bilgisayar==3)
    {cout<<"Bilgisayar= Makas"<<endl;}	
 }
//************
{
   if(hamle==1)
   {cout<<"Siz= Taþ"<<endl;}	
   else if(hamle==2)
   {cout<<"Siz= kaðýt"<<endl;}
   else if(hamle==3)
   {cout<<"Siz= Makas"<<endl;}
   		
}	
{
if(bilgisayar==1&&hamle==1)
{cout<<"BERABERE. Kimse puan alamadý"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==1&&hamle==2)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}	
else if(bilgisayar==1&&hamle==3)
{cout<<"KAYBETTÝNÝZ.."<<endl;bil++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
 else if(bilgisayar==2&&hamle==1)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==2&&hamle==3)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
 else if(bilgisayar==2&&hamle==2)
{cout<<"BERABERE. kimse puan alamadý"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==3)
{cout<<"BERABERE. kimse puan alamadý"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==1)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==2)
{cout<<"KAYBETTÝNÝZ.."<<endl;bil++;
 cout<<"puanýnýz= "<<siz<<endl;
 cout<<"bilgisayarýn puaný= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}	

}	

	
}//for
cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
if(siz>bil)
{cout<<"oyun sonu kazanan "<<siz<<" puan alarak sizsiniz TEBRÝKLER"<<endl;}
else if(siz<bil)
{cout<<"oyun sonu kazanan "<<bil<<" puan alarak bilgisayardýr"<<endl;}
else if(bil=siz)
{cout<<siz<<"-"<<bil<<" oyun berabere bitmiþtir"<<endl;}
cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;	
	
}
