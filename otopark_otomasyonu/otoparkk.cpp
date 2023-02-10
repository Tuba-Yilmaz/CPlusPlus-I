#include <iostream>
#include <locale.h>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<cstdlib>

using namespace std;
struct otopark{
char plaka[80];
float saat;	
	
}arac;
int main()
{
float saatcikis;
setlocale(LC_ALL,"turkish");
system("color a0");
int girdi,total,islem;

cout<<"*********************"<<endl;
cout<<"1-Giriþ Islemleri"<<endl;
cout<<"2-Cikis Islemleri"<<endl;
cout<<"*********************"<<endl;
cout<<"Yapmak istediginiz islemi seciniz: ";
cin>>islem;
cout<<"\a"<<endl;

switch(islem)
{//switch baþý

case 1:
	{system("cls");
	 cout<<"YILMAZ KATLI OTOPARKINA HOÞGELDINIZ"<<endl;
	 cout<<"*******************"<<endl;
	 cout<<"OTOPARK UCRETLERI"<<endl;
	 cout<<"0-4  saat: 10TL"<<endl;
	 cout<<"5-8  saat: 12TL"<<endl;
	 cout<<"9-12 saat: 15TL"<<endl;
	 cout<<"13++ saat: 20TL"<<endl;
	 cout<<"*******************"<<endl;	
	 cout<<endl<<endl;
	 cout<<"__________ARAC KAYDI__________"<<endl;
	ofstream yilmaz;
	yilmaz.open("yilmaz.dat",ios::app| ios::binary );
	 cout<<"plakanizi giriniz(bosluksuz):";
	 cin>>arac.plaka;
	 cout<<"giris saatinizi giriniz:";
	 cin>>arac.saat;
	yilmaz.write(reinterpret_cast<char*>(&arac),sizeof(arac));
	 yilmaz.close();
	 cout<<"_______________________________"<<endl<<endl;
	 cout<<"Kayit tamamlandi!!!! Aracinizi parkedebilirsiniz =)"<<endl;
	break;	
	}
case 2:
	{
		system("cls");
        cout<<endl<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"cikis saatini giriniz:(ör:15.21)  ";
        cin>>saatcikis;

	char isim[80];
	bool var;
	                    
	                   
    ifstream yilmaz("yilmaz.dat", ios::binary);
	yilmaz.seekg(0,ios::end);
    int kayitsayisi=yilmaz.tellg()/sizeof(arac);
    cout<<"\n Otopaktaki Arac Sayisi= "<<kayitsayisi<<endl;
	 cout<<"***"<<endl;
	cout<<"\nCikisini yapmak istediginiz aracin plakasini giriniz: ";
	cin>>isim;
	
	for(int j=0; j<kayitsayisi; j++)
	{
	yilmaz.seekg(j*sizeof(arac));
	yilmaz.read(reinterpret_cast<char*>(&arac),sizeof(arac));
	if(strcmp(arac.plaka,isim)==0)
	{
	cout<<endl;
	var=true;
	cout<<endl;
	cout<<"ARACIN";
	cout<<"\nPlakasi: "<<arac.plaka;
	cout<<"\nGiris saati: "<<arac.saat;
	}//if
	 }//for
	                    if(!var)
                     	cout<<"\n Kayit bulunamadi!"<<endl;
                     	girdi=saatcikis-arac.saat;

cout<<"\a"<<endl;

 if(girdi<5){
total=10;
cout<<"Odenecek Tutar: "<<total<<"TL"<<endl;}

 if(4<girdi && girdi<9){
total=10+12;
cout<<"Odenecek Tutar: "<<total<<"TL"<<endl;}

 if(8<girdi && girdi<13){
total=10+12+15;
cout<<"Odenecek Tutar: "<<total<<"TL"<<endl;}

 if(12<girdi){
 total=10+12+15+20;
 cout<<"Odenecek Tutar: "<<total<<"TL"<<endl;}
 cout<<"-----------------------------------------------------"<<endl;
                    	yilmaz.close();
 cout<<"///////////////////////////"<<endl;
 cout<<"///IYI GUNLER DILERIZ/////"<<endl;
 cout<<"///////////////////////////"<<endl;
 break;
}

}//swicthsonu









}
