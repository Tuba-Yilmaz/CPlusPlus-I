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
cout<<"<TA� KA�IT MAKAS OYUNU>"<<endl<<endl;
cout<<" _______________________"<<endl;
cout<<"|Oyun K�lavuzu           |"<<endl;
cout<<"|Ta�=1, Ka��t=2, Makas=3|"<<endl;
cout<<"|_______________________| "<<endl;
cout<<"oyun ka� tur s�rs�n: ";cin>>tur;cout<<endl;
for(int i=0;i<tur;i++){cout<<endl;
 bilgisayar=rand()%3+1;
 cout<<"oyun haz�rlan�yor..."<<endl;
 cout<<"BEKLEY�N�Z..."<<endl;
Sleep(4000);
 system("cls");
 cout<<"\a";
 cout<<" _______________________"<<endl;
cout<<"|Oyun K�lavuzu           |"<<endl;
cout<<"|Ta�=1, Ka��t=2, Makas=3|"<<endl;
cout<<"|_______________________| "<<endl;
 cout<<"yapaca��n�z hamleyi giriniz: ";cin>>hamle;cout<<endl;
 {  cout<<endl;
    cout<<"--------------------"<<endl;
 	if(bilgisayar==1)
 	{cout<<"Bilgisayar= Ta�"<<endl;}
 	else if(bilgisayar==2)
    {cout<<"Bilgisayar= Ka��t"<<endl;}
    else if(bilgisayar==3)
    {cout<<"Bilgisayar= Makas"<<endl;}	
 }
//************
{
   if(hamle==1)
   {cout<<"Siz= Ta�"<<endl;}	
   else if(hamle==2)
   {cout<<"Siz= ka��t"<<endl;}
   else if(hamle==3)
   {cout<<"Siz= Makas"<<endl;}
   		
}	
{
if(bilgisayar==1&&hamle==1)
{cout<<"BERABERE. Kimse puan alamad�"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==1&&hamle==2)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}	
else if(bilgisayar==1&&hamle==3)
{cout<<"KAYBETT�N�Z.."<<endl;bil++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
 else if(bilgisayar==2&&hamle==1)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==2&&hamle==3)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
 else if(bilgisayar==2&&hamle==2)
{cout<<"BERABERE. kimse puan alamad�"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==3)
{cout<<"BERABERE. kimse puan alamad�"<<endl;
 cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==1)
{cout<<"KAZANDINIZ.."<<endl;siz++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}
else if(bilgisayar==3&&hamle==2)
{cout<<"KAYBETT�N�Z.."<<endl;bil++;
 cout<<"puan�n�z= "<<siz<<endl;
 cout<<"bilgisayar�n puan�= "<<bil<<endl;
  cout<<"--------------------"<<endl<<endl;}	

}	

	
}//for
cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
if(siz>bil)
{cout<<"oyun sonu kazanan "<<siz<<" puan alarak sizsiniz TEBR�KLER"<<endl;}
else if(siz<bil)
{cout<<"oyun sonu kazanan "<<bil<<" puan alarak bilgisayard�r"<<endl;}
else if(bil=siz)
{cout<<siz<<"-"<<bil<<" oyun berabere bitmi�tir"<<endl;}
cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;	
	
}
