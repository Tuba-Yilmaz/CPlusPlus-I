// TUBA YILMAZ
//NO:2112721001
//elekrtonik malzemeci otomasyonu
#include <iostream>
#include <locale.h>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct elektrikci{
	char ad[30];
	char ekbilgi[30];
	int fiyat,adet;
	
}urun;
void kayit(){
		
	char secim1;
	int sayi,baslik;
	char sec;
	

		   
					system("color f5");//beyazüstümor
					system("cls");
					
					cout<<"*********1-KAYIT YAPMA*********"<<endl;
					cout<<"   1-Cep Telefonu Aksesuarlari"<<endl;
					cout<<"   2-Aydinlatma Aksesuarlari"<<endl;
					cout<<"   3-Kondansator"<<endl;
					
				    cout<<"*********************************"<<endl;
				    
					cout<<"Kayit yapmak istediginiz basligi secin:  "<<endl;
					cin>>baslik;
					cout<<"\a"<<endl;
					
					
					
					
					
					
					//Cep telefonu aksesuarları**************************************
				    if(baslik==1)
				    {
				    	ofstream ceptel;
						ceptel.open("ceptel.dat",ios::app| ios::binary );
		
		                do
	          	        {cout<<"Cep Telefonu Aksesuari Kayit Yapma"<<endl;
	          	        	cout<<endl<<endl;
			            cout<<"\nUrunun Adini giriniz: ";
		   	            cin>>urun.ad;
		   	            cout<<"\nUrunun Ek Bilgilerini giriniz: ";
		             	cin>>urun.ekbilgi;
		   	            cout<<"\nUrunun Fiyatini giriniz:";
		   	            cin>>urun.fiyat;
		   	            cout<<"\nUrunun Adedini giriniz: ";
		   	            cin>>urun.adet;
		   	            ceptel.write(reinterpret_cast<char*>(&urun),sizeof(urun));
		   	            cout<<"\nBaska Kayit Yapmak istiyor musunuz? [E/H]";sec=getche();
			   	        cout<<"\a"<<endl;
	                	}while(sec=='e' || sec=='E');
	                 	ceptel.close();
				    	
					}//ceptelaksesuar sonu
					
					
					
					
					//aydınlatma aksesuarları****************************************************
					
					if(baslik==2)
					{
						
						ofstream aydinlatma;
						aydinlatma.open("aydinlatma.dat",ios::app| ios::binary );
		
		                do
	          	        {
			            cout<<"Aydinlatma Aksesuarlari Kayit Yapma "<<endl;
		   
		   	            cout<<"\nUrunun Adini giriniz: ";
		   	            cin>>urun.ad;
		   	            cout<<"\nUrunun Ek Bilgilerini giriniz: ";
		             	cin>>urun.ekbilgi;
		   	            cout<<"\nUrunun Fiyatini giriniz:";
		   	            cin>>urun.fiyat;
		   	            cout<<"\nUrunun Adedini giriniz: ";
		   	            cin>>urun.adet;
		   	            aydinlatma.write(reinterpret_cast<char*>(&urun),sizeof(urun));
		   	            cout<<"\nBaska Kayit Yapmak istiyor musunuz? [E/H]";sec=getche();
			   	        cout<<"\a"<<endl;
	                	}while(sec=='e' || sec=='E');
	                 	aydinlatma.close();
					}//Aydınlatma aksesuarları sonu
					
					//Kondansator başlangıcı************************************************
					
					if(baslik==3)
					{
						ofstream kondansator("kondansator.dat",ios::app| ios::binary );
		
		                do
	          	        {
			            cout<<"Kondansator Kayit Yapma "<<endl;
		   
		   	            cout<<"\nUrunun Adini giriniz: ";
		   	            cin>>urun.ad;
		   	            cout<<"\nUrunun Ek Bilgilerini giriniz: ";
		             	cin>>urun.ekbilgi;
		   	            cout<<"\nUrunun Fiyatini giriniz:";
		   	            cin>>urun.fiyat;
		   	            cout<<"\nUrunun Adedini giriniz: ";
		   	            cin>>urun.adet;
		   	
		   	            kondansator.write(reinterpret_cast<char*>(&urun),sizeof(urun));
		   	            cout<<"\nBaska Kayit Yapmak istiyor musunuz? [E/H]";sec=getche();
			   	        cout<<"\a"<<endl;
	                	}while(sec=='e' || sec=='E');
	                 	kondansator.close();
						
					}//Kondansatorsonu
					

}
void listeleme()
{
		
	char secim1;
	int sayi,baslik;
	char sec;
					system("color e1");//sarıüstümavi
					system("cls");
					cout<<"\a";
					cout<<"********2-Kayit Listeleme*********"<<endl;
					cout<<"  1-Cep Telefonu Aksesuarlari"<<endl;
					cout<<"  2-Aydinlatma"<<endl;
					cout<<"  3-Kondansator"<<endl;
					cout<<"**********************************"<<endl;
				
					cout<<"Kayit listelemek istediginiz başligi secin:  "<<endl;
					cin>>baslik;
					
					
					
					if(baslik==1)//cep telefonu aksesuarı
					{
						cout<<"cep telefonu aksesuari kayıt sayisini bulma"<<endl;
    	                ifstream ceptel("ceptel.dat", ios::binary);
	
                      	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;
	                    
	                    
	                    cout<<"\n\n";
	                    cout<<"------------------------------------------"<<endl;
	                    
			            cout<<"2- Cep Telefonu Aksesuarlari Kayit listeleme"<<endl;
   

                        if (kayitsayisi>0)
                        {
    	                for(int j=0; j<kayitsayisi; j++)
    	                {
    	             	cout<<endl<<j+1<<". cep telefonu aksesuari"<<endl;
    	            	ceptel.seekg(j*sizeof(urun));
    		            ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
    		            cout<<endl;
    		            cout<<"Cep Telefonu Aksesuari";
    		            cout<<"\nAdi: "<<urun.ad;
    	            	cout<<"\nEk Bilgisi: "<<urun.ekbilgi;
    		            cout<<"\nFiyat: "<<urun.fiyat;
    	              	cout<<"\nAdet: "<<urun.adet<<endl;;
		               }
	                   }
	                   
	                   else{
		                 cout<<"\n!!!Dosyada Hiç cep telefonu aksesuari yok!!!"<<endl;
	                    }
                    	ceptel.close();
					}//ceptelaksesuarısonu
					
					
					//aydınlatma listeleme *********************************************************
					
					if(baslik==2)
					{
						cout<<"Aydinlatma Aksesuarlari kayit sayisini bulma"<<endl;
    	                ifstream aydinlatma("aydinlatma.dat", ios::binary);
	
                      	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;
	                    
	                    
	                    cout<<"\n\n";
	                    cout<<"---------------------------------"<<endl;
	                    cout<<"2-Aydinlatma Aksesuarlari Kayit listeleme"<<endl;
   

                        if (kayitsayisi>0)
                        {
    	                for(int j=0; j<kayitsayisi; j++)
    	                {
    	             	cout<<endl<<j+1<<". Aydinlatma aksesuarlari"<<endl;
    	            	aydinlatma.seekg(j*sizeof(urun));
    		            aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
    		            cout<<endl;
    		            cout<<"Aydinlatma aksesuari";
    		            cout<<"\nAdi: "<<urun.ad;
    	            	cout<<"\nEk bilgileri: "<<urun.ekbilgi ;
    		            cout<<"\nFiyat: "<<urun.fiyat;
    	              	cout<<"\nAdet: "<<urun.adet<<endl;;
		               }
	                   }
	                   
	                   else{
		                 cout<<"\n!!!Dosyada Hic aydinlatma aksesuari yok!!!"<<endl;
	                    }
                    	aydinlatma.close();
					}//aydınkatma aksesuarısonu
					
					//Kondansatör listeleme***********************************************
					
					if(baslik==3)
					{
					    cout<<"Kondansator kayit sayisini bulma"<<endl;
    	                ifstream kondansator("kondansator.dat", ios::binary);
	
                      	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;
	                 
	                    
	                    cout<<"\n\n";
	                    cout<<"--------------------------------"<<endl;
	                    
	                    cout<<"2-Kondansator Kayit listeleme"<<endl;
   
                        if (kayitsayisi>0)
                        {
    	                for(int j=0; j<kayitsayisi; j++)
    	                {
    	             	cout<<endl<<j+1<<". Kondansator"<<endl;
    	            	kondansator.seekg(j*sizeof(urun));
    		            kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
    		            cout<<endl;
    		            cout<<"kondansatorun";
    		            cout<<"\nAdi: "<<urun.ad;
    	            	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
    		            cout<<"\nFiyat: "<<urun.fiyat;
    	              	cout<<"\nAdet: "<<urun.adet<<endl;;
		               }
	                   }
	                   
	                   else{
		                 cout<<"\n!!!Dosyada Hic kondansator yok!!!"<<endl;
	                    }
                    	kondansator.close();	
					}//kondansatörsonu
					
	
	
}
void arama(){
	
		char secim1;
	int sayi,baslik;
	char sec;
                    system("color d7");//mor üstü beyaz
					system("cls");
					
					cout<<"********3-ARAMA YAPMA********"<<endl;
					cout<<"   1-Cep Telefonu Aksesuarlari"<<endl;
					cout<<"   2-Aydinlatma Aksesuarlari"<<endl;
					cout<<"   3-Kondansator"<<endl;
				    cout<<"*****************************"<<endl;
					cout<<"Arama Yapma istediginiz başligi secin:  "<<endl;
					cin>>baslik;
					
					
					
					
					//ceptel arama********************************************************
					
					if(baslik==1)
					{
				                    	
	                    char isim[80];
	                    bool var;
	                    
	                    cout<<"Cep Telefonu Aksesurlari Kayıt sayisini bulma"<<endl;
                        ifstream ceptel("ceptel.dat", ios::binary);
	
                       	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;

	                         cout<<"3-Cep Telefonu Aksesuarlarinda Arama yapma"<<endl;
	                    cout<<"\nKayiti bulmak istediginiz cep telefonu aksesuarinin adini giriniz: ";
	                    cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
	                 	ceptel.seekg(j*sizeof(urun));
		                ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
	                   	if(strcmp(urun.ad,isim)==0)
		                {
			            cout<<endl<<j+1<<"Kayitta bulundu"<<endl;
			            var=true;
		            	cout<<endl;
			            cout<<"Cep telefonu aksesuari";
			            cout<<"\nAdi: "<<urun.ad;
			            cout<<"\nEk bilgiler: "<<urun.ekbilgi;
			            cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
		                }
	                    }
	                    if(!var)
                     	cout<<"\n Kayit bulunamadi!"<<endl;
                    	ceptel.close();
					}//ceptelsonu
					
					
					
					
					//aydınlatma arama*************************************************************
					
					
					if(baslik==2)
					{
						char isim[80];
	                    bool var;
	                    
	                    cout<<"Aydinlatma Aksesuarlari Kayit sayisini bulma"<<endl;
                        ifstream aydinlatma("aydinlatma.dat", ios::binary);
	
                       	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;

	                         cout<<"3-Aydinlatma Aksesuarlarinda Arama yapma"<<endl;
	                    cout<<"\nKayiti bulmak istediginiz aksesuarin adini giriniz: ";
	                    cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
	                 	aydinlatma.seekg(j*sizeof(urun));
		                aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
	                   	if(strcmp(urun.ad,isim)==0)
		                {
			            cout<<endl<<j+1<<"Kayitta bulundu"<<endl;
			            var=true;
		            	cout<<endl;
			            cout<<"Aydinlatma Aksesuari";
			            cout<<"\nAdi: "<<urun.ad;
			            cout<<"\nEk bilgileri: "<<urun.ekbilgi;
			            cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
		                }
	                    }
	                    if(!var)
                     	cout<<"\n Kayit bulunamadi!"<<endl;
                    	aydinlatma.close();
					}
					
					//Kondansator arama*************************************************
					
					if(baslik==3)
					{
						char isim[80];
	                    bool var;
	                    
	                    cout<<"Kondansator Kayit sayisini bulma"<<endl;
                        ifstream kondansator("kondansator.dat", ios::binary);
	
                       	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayit sayisi= "<<kayitsayisi<<endl;

	                         cout<<"3-Kondansatorde Arama yapma"<<endl;
	                    cout<<"\nKayiti bulmak istediginiz kondansatorun adini giriniz: ";
	                    cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
	                 	kondansator.seekg(j*sizeof(urun));
		                kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
	                   	if(strcmp(urun.ad,isim)==0)
		                {
			            cout<<endl<<j+1<<"Kayitta bulundu"<<endl;
			            var=true;
		            	cout<<endl;
			            cout<<"Kondansator";
			            cout<<"\nAdi: "<<urun.ad;
			            cout<<"\nEk bilgileri: "<<urun.ekbilgi;
			            cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
		                }
	                    }
	                    if(!var)
                     	cout<<"\n !!!Kayit bulunamadi!!!"<<endl;
                    	kondansator.close();
					}//kondansatorsonu
					
				
	
	
	
}

void silme(){
	
		char secim1;
	int sayi,baslik;
	char sec;
         system("color b0");//mavi üstü siyah
					system("cls");
					
					cout<<"********4-Kayit Silmek********"<<endl;
					cout<<"   1-Cep Telefonu Aksesuarlari"<<endl;
					cout<<"   2-Aydinlatma Aksesuarlari"<<endl;
					cout<<"   3-Kondansator"<<endl;
					
				
					cout<<"Kayıt silmek istediginiz başligi secin:  "<<endl;
					cin>>baslik;
					
					
					//ceptel silma********************************************************
					
					
					
					if(baslik==1)
					{
						cout<<"Cep Telefonu aksesuarı Kayıt sayısını bulma"<<endl;
                        ifstream ceptel("ceptel.dat", ios::binary);
	
                       	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayıt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydını Sileceğiniz Cep Telefonu Aksesuarının adını girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 ceptel.seekg(j*sizeof(urun));
		                 ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayıtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"Cep telefonu Aksesuarının";
		             	cout<<"\nAdı: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek İstediğiniz Kayıt bu mu[E/H]";
			            secim=getche();
		            	if(secim=='H' || secim=='h')
		             	{
			            	elektrikci y_urun;
				            ofstream y_ceptel;
				            y_ceptel.open("Yedekceptel.dat", ios::app|ios::binary);
				
				            strcpy(y_urun.ad, urun.ad);
			              	y_urun.ekbilgi==urun.ekbilgi ;
			            	y_urun.fiyat=urun.fiyat;
				            y_urun.adet=urun.adet;
				
			
			                y_ceptel.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_ceptel.close();	
		 	            }
		              	if(secim=='e'|| secim=='E')
		             	{
			            	var=true;
		             	}
	                  	}
	                  	
		                else
		                {
			                elektrikci y_urun;
			                ofstream y_ceptel;
			                y_ceptel.open("Yedekceptel.dat",ios::app|ios::binary);
			
			                strcpy(y_urun.ad, urun.ad);
		                  	y_urun.ekbilgi==urun.ekbilgi;
		                   	y_urun.fiyat=urun.fiyat;
			               y_urun.adet=urun.adet;
			
		                 	y_ceptel.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_ceptel.close();
		                }
		
	                    }
                      	ceptel.close();
                    	if(var)
                    	{
	                    	remove("ceptel.dat");
	                    	rename("Yedekceptel.dat","ceptel.dat");
	                     	cout<<"\n Kayıt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekceptel.dat");
	                    	cout<<"\n Kayıt bulunamadı"<<endl;
                     	}
					}//ceptelsonu
					
					
					
					
					
					
					
					//aydınlatma aksesuarı silme********************************************
					
					
					
					
					if(baslik==2)
					{
						
						cout<<"Aydınlatma Aksesuarı Kayıt sayısını bulma"<<endl;
                        ifstream aydinlatma("aydinlatma.dat", ios::binary);
	
                       	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayıt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydını Sileceğiniz Aydınlatma Aksesuarının adını girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 aydinlatma.seekg(j*sizeof(urun));
		                 aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayıtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"aksesuarın";
		             	cout<<"\nAdı: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi ;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek İstediğiniz Kayıt bu mu[E/H]";
			            secim=getche();
		            	if(secim=='H' || secim=='h')
		             	{
			            	elektrikci y_urun;
				            ofstream y_aydinlatma;
				            y_aydinlatma.open("Yedekaydinlatma.dat", ios::app|ios::binary);
				
				            strcpy(y_urun.ad, urun.ad);
			              	y_urun.ekbilgi==urun.ekbilgi;
			            	y_urun.fiyat=urun.fiyat;
				            y_urun.adet=urun.adet;
				
			
			                y_aydinlatma.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_aydinlatma.close();	
		 	            }
		              	if(secim=='e'|| secim=='E')
		             	{
			            	var=true;
		             	}
	                  	}
	                  	
		                else
		                {
			                elektrikci y_urun;
			                ofstream y_aydinlatma;
			                y_aydinlatma.open("Yedekaydinlatma.dat",ios::app|ios::binary);
			
			                strcpy(y_urun.ad, urun.ad);
		                  	y_urun.ekbilgi==urun.ekbilgi;
		                   	y_urun.fiyat=urun.fiyat;
			               y_urun.adet=urun.adet;
			
		                 	y_aydinlatma.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_aydinlatma.close();
		                }
		
	                    }
                      	aydinlatma.close();
                    	if(var)
                    	{
	                    	remove("aydinlatma.dat");
	                    	rename("Yedekaydinlatma.dat","kahvaltılık.dat");
	                     	cout<<"\n Kayıt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekaydinlatma.dat");
	                    	cout<<"\n Kayıt bulunamadı"<<endl;
                     	}
					}//aydinlatma aksesuarının sonu
					
					
					
					
					
					
					
					//Kondansator silme***************************************************
					
					if(baslik==3)
					{
						cout<<"Kondansatorlerin Kayıt sayısını bulma"<<endl;
                        ifstream kondansator("kondansator.dat", ios::binary);
	
                       	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayıt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydını Sileceğiniz kondansatorun adını girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 kondansator.seekg(j*sizeof(urun));
		                 kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayıtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"kondansatorun";
		             	cout<<"\nAdı: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek İstediğiniz Kayıt bu mu[E/H]";
			            secim=getche();
		            	if(secim=='H' || secim=='h')
		             	{
			            	elektrikci y_urun;
				            ofstream y_kondansator;
				            y_kondansator.open("Yedekkondansator.dat", ios::app|ios::binary);
				
				            strcpy(y_urun.ad, urun.ad);
			              	y_urun.ekbilgi==urun.ekbilgi;
			            	y_urun.fiyat=urun.fiyat;
				            y_urun.adet=urun.adet;
				
			
			                y_kondansator.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_kondansator.close();	
		 	            }
		              	if(secim=='e'|| secim=='E')
		             	{
			            	var=true;
		             	}
	                  	}
	                  	
		                else
		                {
			                elektrikci y_urun;
			                ofstream y_kondansator;
			                y_kondansator.open("Yedekkondansator.dat",ios::app|ios::binary);
			
			                strcpy(y_urun.ad, urun.ad);
		                  	y_urun.ekbilgi==urun.ekbilgi;
		                   	y_urun.fiyat=urun.fiyat;
			               y_urun.adet=urun.adet;
			
		                 	y_kondansator.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
		                	y_kondansator.close();
		                }
		
	                    }
                      	kondansator.close();
                    	if(var)
                    	{
	                    	remove("kondansator.dat");
	                    	rename("Yedekkondansator.dat","kondansator.dat");
	                     	cout<<"\n Kayıt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekkondansator.dat");
	                    	cout<<"\n Kayıt bulunamadı"<<endl;
                     	}    
	
	
}
}
void duzeltme(){
	
	char secim1;
	int sayi,baslik;
	char sec;
					system("color a0");//yeşil üstü siyah
					system("cls");
					
					cout<<"********5-KAYIT DÜZELTMEK********"<<endl;
					cout<<"    1-Cep Telefonu Aksesuarları"<<endl;
					cout<<"    2-Aydınlatma Aksesuarları"<<endl;
					cout<<"    3-Kondansatör"<<endl;
					cout<<"*********************************"<<endl;
				
					cout<<"Kayıt düzeltmek istediğiniz başlığı seçin:  "<<endl;
					cin>>baslik;
					
					
					
					//cep telefonu aksesuarı silme********************************
					
					
					
					if(baslik==1)
					{
						cout<<"cep telefonu aksesuarı Kayıt sayısı bulma"<<endl;
                        ifstream ceptel;
						ceptel.open("ceptel.dat", ios::binary);
	
                       	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayıt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydını Düzelteceğiniz aksesuarın adını girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                ceptel.seekg(j*sizeof(urun));
	                   	ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                
			                var=true;
		                	cout<<endl;
			                cout<<"cep telefonu aksesuarı";
		                	cout<<"\nAdı: "<<urun.ad;
		                	cout<<"\nEk bilgileri: "<<urun.ekbilgi ;
		                	cout<<"\nFiyat: "<<urun.fiyat;
			                cout<<"\nAdet: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek İstediğiniz Kayıt bu mu[E/H]";
			                secim=getche();
			              if(secim=='H' || secim=='h')
			              {
			               	elektrikci y_urun;
			            	ofstream y_ceptel;
			            	y_ceptel.open("Yedekceptel.dat", ios::app|ios::binary);
				
			            	strcpy(y_urun.ad, urun.ad);
			               	y_urun.ekbilgi==urun.ekbilgi;
			             	y_urun.fiyat=urun.fiyat;
			            	y_urun.adet=urun.adet;
				
			
			                y_ceptel.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			                y_ceptel.close();	
			              }
			
			              else if(secim=='e'||secim=='E')
		               	  {
				            ofstream ceptel;
			                ceptel.open("Yedekceptel.dat",ios::app|ios::binary);
			    
			                cout<<"\n Yeni Ürünün Adı: ";
			                cin>>urun.ad;
			                cout<<"\nYeni Ürünün Ek bilgileri: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Ürünün Fiyatı: ";
			                cin>>urun.fiyat;
			                cout<<"\nYeni Ürünün Adedi: ";
			                cin>>urun.adet;
			                
			                ceptel.write(reinterpret_cast<char*>(&urun),sizeof(urun));
			                ceptel.close();   
		                  	}
		                
		                else    	
		                {
				        elektrikci y_urun;
				        ofstream y_ceptel;
				        y_ceptel.open("Yedekceptel.dat",ios::app|ios::binary);
				
			           	strcpy(y_urun.ad, urun.ad);
				        y_urun.ekbilgi==urun.ekbilgi;
			         	y_urun.fiyat=urun.fiyat;
			           	y_urun.adet=urun.adet;
				
			          	y_ceptel.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			            y_ceptel.close();	
			            }
			
                        } //(if)ceptelsonu

                       }//forsonu
                       ceptel.close();
                 if(var)
               	{
	        	remove("ceptel.dat");
	         	rename("Yedekceptel.dat","ceptel.dat");
	           	cout<<"\n Kayıt Düzeltildi"<<endl;
               	}
	            else
	            {
		        remove("Yedekceptel.dat");
		        cout<<"\n Kayıt bulunamadı"<<endl;
	            }
	            
				}//cep telefonu aksesuarı sonu
				
				
					
					
					
					
					//aydınlatma aksesuarı silme**************************************
					
					
					
					
					if(baslik==2)
					{
						
											
						cout<<"Aydınlatma Aksesuarları Kayıt sayısı bulma"<<endl;
                        ifstream aydinlatma;
						aydinlatma.open("aydinlatma.dat", ios::binary);
                        
                       	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayıt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydını Düzelteceğiniz Aksesuarın adını girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                aydinlatma.seekg(j*sizeof(urun));
	                   	aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                cout<<endl<<j+1<<"Kayıtta bulundu"<<endl;
			                var=true;
		                	cout<<endl;
			                cout<<"Aydınlatma aksesuarının";
		                	cout<<"\nÜrünün Adı: "<<urun.ad;
		                	cout<<"\nÜrünün Ek bilgileri: "<<urun.ekbilgi ;
		                	cout<<"\nÜrünün Fiyatı: "<<urun.fiyat;
			                cout<<"\nÜrünün Adedi: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek İstediğiniz Kayıt bu mu[E/H]";
			                secim=getche();
			              if(secim=='H' || secim=='h')
			              {
			               	elektrikci y_urun;
			            	ofstream y_aydinlatma;
			            	y_aydinlatma.open("Yedekaydinlatma.dat", ios::app|ios::binary);
				
			            	strcpy(y_urun.ad, urun.ad);
			               	y_urun.ekbilgi==urun.ekbilgi;
			             	y_urun.fiyat=urun.fiyat;
			            	y_urun.adet=urun.adet;
				
			
			                y_aydinlatma.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			                y_aydinlatma.close();	
			              }
			
			              else if(secim=='e'||secim=='E')
		               	  {
				            ofstream aydinlatma;
			                aydinlatma.open("Yedekaydinlatma.dat",ios::app|ios::binary);
			    
			                cout<<"\n Yeni Adı: ";
			                cin>>urun.ad;
			                cout<<"\nYeni Ek bilgileri: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Fiyatı: ";
			                cin>>urun.fiyat;
			                cout<<"\nYeni Adedi: ";
			                cin>>urun.adet;
			    
			                aydinlatma.write(reinterpret_cast<char*>(&urun),sizeof(urun));
			                aydinlatma.close();   
		                  	}
		                
		                else    	
		                {
				        elektrikci y_urun;
				        ofstream y_aydinlatma;
				        y_aydinlatma.open("Yedekayydinlatma.dat",ios::app|ios::binary);
				
			           	strcpy(y_urun.ad, urun.ad);
				        y_urun.ekbilgi==urun.ekbilgi;
			         	y_urun.fiyat=urun.fiyat;
			           	y_urun.adet=urun.adet;
				
			          	y_aydinlatma.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			            y_aydinlatma.close();	
			            }
			
                        } //(if)sonu

                       }//forsonu
                       aydinlatma.close();
                       
                      if(var)
                    	{
	                 	remove("aydinlatma.dat");
	                	rename("Yedekaydinlatma.dat","aydinlatma.dat");
	                 	cout<<"\n Kayıt Düzeltildi"<<endl;
                     	}
	                   else
	                    {
		            remove("Yedekaydinlatma.dat");
		               cout<<"\n Kayıt bulunamadı"<<endl;
	                }

					}//aydınlatma sonu
					
					
					
					
					
					//Kondansator  silme***************************************
					
					if(baslik==3)
					{
												
											
						cout<<"Kondansatorlerin Kayıt sayısı bulma"<<endl;
                        ifstream kondansator;
						kondansator.open("kondansator.dat", ios::binary);
                        
                       	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayıt sayısı= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayıt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydını Düzelteceğiniz kondansatorun adını girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                kondansator.seekg(j*sizeof(urun));
	                   	kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                cout<<endl<<j+1<<"Kayıtta bulundu"<<endl;
			                var=true;
		                	cout<<endl;
			                cout<<"kondansatorun";
		                	cout<<"\nAdı: "<<urun.ad;
		                	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		                	cout<<"\nFiyat: "<<urun.fiyat;
			                cout<<"\nAdet: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek İstediğiniz Kayıt bu mu[E/H]";
			                secim=getche();
			              if(secim=='H' || secim=='h')
			              {
			               	elektrikci y_urun;
			            	ofstream y_kondansator;
			            	y_kondansator.open("Yedekkondansator.dat", ios::app|ios::binary);
				
			            	strcpy(y_urun.ad, urun.ad);
			               	y_urun.ekbilgi==urun.ekbilgi;
			             	y_urun.fiyat=urun.fiyat;
			            	y_urun.adet==urun.adet;
				
			
			                y_kondansator.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			                y_kondansator.close();	
			              }
			
			              else if(secim=='e'||secim=='E')
		               	  {
				            ofstream kondansator;
			                kondansator.open("Yedekkondansator.dat",ios::app|ios::binary);
			    
			                cout<<"\nYeni Adı: ";
			                cin>>urun.ad;
			                cout<<"\n Yeni Ek bilgiler: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Fiyatı: ";
			                cin>>urun.fiyat;
			                cout<<"\nYeni Adedi: ";
			                cin>>urun.adet;
			    
			                kondansator.write(reinterpret_cast<char*>(&urun),sizeof(urun));
			                kondansator.close();   
		                  	}
		                
		                else    	
		                {
				        elektrikci y_urun;
				        ofstream y_kondansator;
				        y_kondansator.open("Yedekkondansator.dat",ios::app|ios::binary);
				
			           	strcpy(y_urun.ad, urun.ad);
				        y_urun.ekbilgi==urun.ekbilgi;
			         	y_urun.fiyat=urun.fiyat;
			           	y_urun.adet=urun.adet;
				
			          	y_kondansator.write(reinterpret_cast<char*>(&y_urun),sizeof(y_urun));
			            y_kondansator.close();	
			            }
			
                        } //ifsonu

                       }//forsonu
                       kondansator.close();
                       if(var)
               	         {
	        	          remove("kondansator.dat");//DİKKAT BURASI Bİ GARİP
	         	          rename("Yedekkondansator.dat","kondansator.dat");
	                      cout<<"\n Kayıt Düzeltildi"<<endl;
                     	}
	                   else
	                    {
		                 remove("Yedekkondansator.dat");
		                 cout<<"\n Kayıt bulunamadı"<<endl;
	                 }
}
}
	

int main()
{
	system("cls");
	system("color f0"); 
	setlocale(LC_ALL, "turkish");
	
	elektrikci urun;
	char secim1;
	int sayi,baslik;
	char sec;
	
	
	do
	{       cout<<"***************************"<<endl;
		    cout<<"_MENÜ1_Kayıt Yapma"<<endl;
	     	cout<<"_MENÜ2_ listeleme"<<endl;
	    	cout<<"_MENÜ3_Arama yapma"<<endl;
	    	cout<<"_MENÜ4_Kayıt silme"<<endl;
	    	cout<<"_MENÜ5_Kayıt düzeltmek"<<endl;
	    	cout<<"****************************"<<endl;
			cout<<"Yapmak istediğiniz menü numarasını tuşlayınız:(1/2/3/4/5) ";
         	cin>>sayi;
		 cout<<"\a";
		switch(sayi)
		{
			
			//KAYIT YAPMA---------------------------------------------------------------------
			case 1: 
				{
				 kayit();
					
					break;
				}//kayıt sonu
				
				
				
				
				
			//Kayıt LİSTELEME------------------------------------------------------------------	
				
			case 2:
				{
				listeleme();	
					break;
				}//listelemesonu
				
				
				
				
			//ARAMA yapma---------------------------------------------------------------------	
				
			case 3:
				{
				arama();	
					
					break;
				}//arama sonu
				
				
				
				
			//Kayıt SİLME--------------------------------------------------------------------------
				
			case 4:
				{
				    silme();
				 break;		
					}
					
				
				
			//Kayıt DÜZELTME-------------------------------------------------------------------------
				
			case 5:
				{
					duzeltme();
					break;	
					}
				}//switch5 sonuu
					
		
			    
			
		

		
		
	cout<<"\n Başka işlem yapacak mısınız(e/E) (h/H)"; cin>>secim1;
	cout<<"\a"<<endl;
	}while(secim1=='e'|| secim1=='E');
	cout<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
	cout<<"   (((((=   İYİ GÜNLER DİLERİZ  =))))"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl<<endl<<endl<<endl<<endl<<endl;
}
