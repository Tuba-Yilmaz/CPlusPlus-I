#include<iostream>
#include<locale.h>
using namespace std;
int main ()
{   system("color 8e");
	setlocale(LC_ALL,"turkish");
	float girdi;
	string isim,soyad;
	cout<<"2022 verilerine g�re burcunuzu �grenmeye hazir misiniz?"<<endl;
	cout<<"Oncelikle isminizi �grenelim."<<endl;
	cout<<"Adinizi giriniz: ";cin>>isim;
	cout<<"Soyadinizi giriniz: ";cin>>soyad;

	cout<<"�r: 2 temmuzda do�duysan�z [07.02]yaziniz.."<<endl;
	cout<<"�nce dogdugunuz ayi sonra gunu giriniz: ";cin>>girdi;

	 system("cls");
	 system("color 3f");
	if(03.21<=girdi && 04.20>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: KOC"<<endl;}
	
	if(04.21<=girdi && 05.21>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: BOGA"<<endl;}
	
	if(05.22<=girdi && 06.22>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: �K�ZLER"<<endl;}
	
	if(06.23<=girdi && 07.22>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: YENGEC"<<endl;}
	
	if(07.23<=girdi && 08.22>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: ASLAN"<<endl;}
	
	if(08.23<=girdi && 09.22>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: BASAK"<<endl;}
	
	if(09.23<=girdi && 10.22>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: TERAZ�"<<endl;}
	
	if(10.23<=girdi && 11.21>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: AKREP"<<endl;}
	
	if(11.22<=girdi && 12.21>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: YAY"<<endl;}
	
	if(12.22<=girdi && 01.21>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: OGLAK"<<endl;}
	
	if(01.22<=girdi && 02.19>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: KOVA"<<endl;}
	
	if(02.20<=girdi && 03.20>=girdi)
	{cout<<"Sayin "<<isim<<" "<<soyad<<" Burcunuz: BALIK"<<endl;}
	
}
