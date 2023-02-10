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
					
					
					
					
					
					
					//Cep telefonu aksesuarlarý**************************************
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
					
					
					
					
					//aydýnlatma aksesuarlarý****************************************************
					
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
					}//Aydýnlatma aksesuarlarý sonu
					
					//Kondansator baþlangýcý************************************************
					
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
					system("color e1");//sarýüstümavi
					system("cls");
					cout<<"\a";
					cout<<"********2-Kayit Listeleme*********"<<endl;
					cout<<"  1-Cep Telefonu Aksesuarlari"<<endl;
					cout<<"  2-Aydinlatma"<<endl;
					cout<<"  3-Kondansator"<<endl;
					cout<<"**********************************"<<endl;
				
					cout<<"Kayit listelemek istediginiz baþligi secin:  "<<endl;
					cin>>baslik;
					
					
					
					if(baslik==1)//cep telefonu aksesuarý
					{
						cout<<"cep telefonu aksesuari kayýt sayisini bulma"<<endl;
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
					}//ceptelaksesuarýsonu
					
					
					//aydýnlatma listeleme *********************************************************
					
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
					}//aydýnkatma aksesuarýsonu
					
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
					cout<<"Arama Yapma istediginiz baþligi secin:  "<<endl;
					cin>>baslik;
					
					
					
					
					//ceptel arama********************************************************
					
					if(baslik==1)
					{
				                    	
	                    char isim[80];
	                    bool var;
	                    
	                    cout<<"Cep Telefonu Aksesurlari Kayýt sayisini bulma"<<endl;
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
					
					
					
					
					//aydýnlatma arama*************************************************************
					
					
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
					
				
					cout<<"Kayýt silmek istediginiz baþligi secin:  "<<endl;
					cin>>baslik;
					
					
					//ceptel silma********************************************************
					
					
					
					if(baslik==1)
					{
						cout<<"Cep Telefonu aksesuarý Kayýt sayýsýný bulma"<<endl;
                        ifstream ceptel("ceptel.dat", ios::binary);
	
                       	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayýt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydýný Sileceðiniz Cep Telefonu Aksesuarýnýn adýný girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 ceptel.seekg(j*sizeof(urun));
		                 ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayýtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"Cep telefonu Aksesuarýnýn";
		             	cout<<"\nAdý: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek Ýstediðiniz Kayýt bu mu[E/H]";
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
	                     	cout<<"\n Kayýt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekceptel.dat");
	                    	cout<<"\n Kayýt bulunamadý"<<endl;
                     	}
					}//ceptelsonu
					
					
					
					
					
					
					
					//aydýnlatma aksesuarý silme********************************************
					
					
					
					
					if(baslik==2)
					{
						
						cout<<"Aydýnlatma Aksesuarý Kayýt sayýsýný bulma"<<endl;
                        ifstream aydinlatma("aydinlatma.dat", ios::binary);
	
                       	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayýt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydýný Sileceðiniz Aydýnlatma Aksesuarýnýn adýný girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 aydinlatma.seekg(j*sizeof(urun));
		                 aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayýtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"aksesuarýn";
		             	cout<<"\nAdý: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi ;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek Ýstediðiniz Kayýt bu mu[E/H]";
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
	                    	rename("Yedekaydinlatma.dat","kahvaltýlýk.dat");
	                     	cout<<"\n Kayýt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekaydinlatma.dat");
	                    	cout<<"\n Kayýt bulunamadý"<<endl;
                     	}
					}//aydinlatma aksesuarýnýn sonu
					
					
					
					
					
					
					
					//Kondansator silme***************************************************
					
					if(baslik==3)
					{
						cout<<"Kondansatorlerin Kayýt sayýsýný bulma"<<endl;
                        ifstream kondansator("kondansator.dat", ios::binary);
	
                       	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
						
							cout<<"4-Kayýt silme"<<endl;
	                    char isim[80];
	                    char secim=' ';
                    	bool var=false;

                     	cout<<"Kaydýný Sileceðiniz kondansatorun adýný girin: ";
                    	cin>>isim;
	
                    	for(int j=0; j<kayitsayisi; j++)
                      	{
		                 kondansator.seekg(j*sizeof(urun));
		                 kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                 if(strcmp(urun.ad,isim)==0)
		                {
		               	cout<<endl<<j+1<<"Kayýtta bulundu"<<endl;
		            	var=true;
		              	cout<<endl;
		             	cout<<"kondansatorun";
		             	cout<<"\nAdý: "<<urun.ad;
		            	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		               	cout<<"\nFiyat: "<<urun.fiyat;
			            cout<<"\nAdet: "<<urun.adet<<endl;	
			
			            cout<<"\n Silmek Ýstediðiniz Kayýt bu mu[E/H]";
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
	                     	cout<<"\n Kayýt Silindi"<<endl;
	                    }
                     	else
	                    {
	                    	remove("Yedekkondansator.dat");
	                    	cout<<"\n Kayýt bulunamadý"<<endl;
                     	}    
	
	
}
}
void duzeltme(){
	
	char secim1;
	int sayi,baslik;
	char sec;
					system("color a0");//yeþil üstü siyah
					system("cls");
					
					cout<<"********5-KAYIT DÜZELTMEK********"<<endl;
					cout<<"    1-Cep Telefonu Aksesuarlarý"<<endl;
					cout<<"    2-Aydýnlatma Aksesuarlarý"<<endl;
					cout<<"    3-Kondansatör"<<endl;
					cout<<"*********************************"<<endl;
				
					cout<<"Kayýt düzeltmek istediðiniz baþlýðý seçin:  "<<endl;
					cin>>baslik;
					
					
					
					//cep telefonu aksesuarý silme********************************
					
					
					
					if(baslik==1)
					{
						cout<<"cep telefonu aksesuarý Kayýt sayýsý bulma"<<endl;
                        ifstream ceptel;
						ceptel.open("ceptel.dat", ios::binary);
	
                       	ceptel.seekg(0,ios::end);
    	                int kayitsayisi=ceptel.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayýt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydýný Düzelteceðiniz aksesuarýn adýný girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                ceptel.seekg(j*sizeof(urun));
	                   	ceptel.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                
			                var=true;
		                	cout<<endl;
			                cout<<"cep telefonu aksesuarý";
		                	cout<<"\nAdý: "<<urun.ad;
		                	cout<<"\nEk bilgileri: "<<urun.ekbilgi ;
		                	cout<<"\nFiyat: "<<urun.fiyat;
			                cout<<"\nAdet: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek Ýstediðiniz Kayýt bu mu[E/H]";
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
			    
			                cout<<"\n Yeni Ürünün Adý: ";
			                cin>>urun.ad;
			                cout<<"\nYeni Ürünün Ek bilgileri: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Ürünün Fiyatý: ";
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
	           	cout<<"\n Kayýt Düzeltildi"<<endl;
               	}
	            else
	            {
		        remove("Yedekceptel.dat");
		        cout<<"\n Kayýt bulunamadý"<<endl;
	            }
	            
				}//cep telefonu aksesuarý sonu
				
				
					
					
					
					
					//aydýnlatma aksesuarý silme**************************************
					
					
					
					
					if(baslik==2)
					{
						
											
						cout<<"Aydýnlatma Aksesuarlarý Kayýt sayýsý bulma"<<endl;
                        ifstream aydinlatma;
						aydinlatma.open("aydinlatma.dat", ios::binary);
                        
                       	aydinlatma.seekg(0,ios::end);
    	                int kayitsayisi=aydinlatma.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayýt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydýný Düzelteceðiniz Aksesuarýn adýný girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                aydinlatma.seekg(j*sizeof(urun));
	                   	aydinlatma.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                cout<<endl<<j+1<<"Kayýtta bulundu"<<endl;
			                var=true;
		                	cout<<endl;
			                cout<<"Aydýnlatma aksesuarýnýn";
		                	cout<<"\nÜrünün Adý: "<<urun.ad;
		                	cout<<"\nÜrünün Ek bilgileri: "<<urun.ekbilgi ;
		                	cout<<"\nÜrünün Fiyatý: "<<urun.fiyat;
			                cout<<"\nÜrünün Adedi: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek Ýstediðiniz Kayýt bu mu[E/H]";
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
			    
			                cout<<"\n Yeni Adý: ";
			                cin>>urun.ad;
			                cout<<"\nYeni Ek bilgileri: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Fiyatý: ";
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
	                 	cout<<"\n Kayýt Düzeltildi"<<endl;
                     	}
	                   else
	                    {
		            remove("Yedekaydinlatma.dat");
		               cout<<"\n Kayýt bulunamadý"<<endl;
	                }

					}//aydýnlatma sonu
					
					
					
					
					
					//Kondansator  silme***************************************
					
					if(baslik==3)
					{
												
											
						cout<<"Kondansatorlerin Kayýt sayýsý bulma"<<endl;
                        ifstream kondansator;
						kondansator.open("kondansator.dat", ios::binary);
                        
                       	kondansator.seekg(0,ios::end);
    	                int kayitsayisi=kondansator.tellg()/sizeof(urun);
	                    cout<<"\n Dosyadaki Kayýt sayýsý= "<<kayitsayisi<<endl;
	                    
	                    	cout<<"5-Kayýt düzenlemek"<<endl;
	                    char isim[80];
	                    char secim=' ';
                     	bool var=false;

                       	cout<<"Kaydýný Düzelteceðiniz kondansatorun adýný girin: ";
                       	cin>>isim;
	
	                    for(int j=0; j<kayitsayisi; j++)
	                    {
		                kondansator.seekg(j*sizeof(urun));
	                   	kondansator.read(reinterpret_cast<char*>(&urun),sizeof(urun));
		                if(strcmp(urun.ad,isim)==0)
		                {
			                cout<<endl<<j+1<<"Kayýtta bulundu"<<endl;
			                var=true;
		                	cout<<endl;
			                cout<<"kondansatorun";
		                	cout<<"\nAdý: "<<urun.ad;
		                	cout<<"\nEk bilgileri: "<<urun.ekbilgi;
		                	cout<<"\nFiyat: "<<urun.fiyat;
			                cout<<"\nAdet: "<<urun.adet<<endl;	
			
			                cout<<"\n Düzeltmek Ýstediðiniz Kayýt bu mu[E/H]";
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
			    
			                cout<<"\nYeni Adý: ";
			                cin>>urun.ad;
			                cout<<"\n Yeni Ek bilgiler: ";
			                cin>>urun.ekbilgi;
			                cout<<"\nYeni Fiyatý: ";
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
	        	          remove("kondansator.dat");//DÝKKAT BURASI BÝ GARÝP
	         	          rename("Yedekkondansator.dat","kondansator.dat");
	                      cout<<"\n Kayýt Düzeltildi"<<endl;
                     	}
	                   else
	                    {
		                 remove("Yedekkondansator.dat");
		                 cout<<"\n Kayýt bulunamadý"<<endl;
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
		    cout<<"_MENÜ1_Kayýt Yapma"<<endl;
	     	cout<<"_MENÜ2_ listeleme"<<endl;
	    	cout<<"_MENÜ3_Arama yapma"<<endl;
	    	cout<<"_MENÜ4_Kayýt silme"<<endl;
	    	cout<<"_MENÜ5_Kayýt düzeltmek"<<endl;
	    	cout<<"****************************"<<endl;
			cout<<"Yapmak istediðiniz menü numarasýný tuþlayýnýz:(1/2/3/4/5) ";
         	cin>>sayi;
		 cout<<"\a";
		switch(sayi)
		{
			
			//KAYIT YAPMA---------------------------------------------------------------------
			case 1: 
				{
				 kayit();
					
					break;
				}//kayýt sonu
				
				
				
				
				
			//Kayýt LÝSTELEME------------------------------------------------------------------	
				
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
				
				
				
				
			//Kayýt SÝLME--------------------------------------------------------------------------
				
			case 4:
				{
				    silme();
				 break;		
					}
					
				
				
			//Kayýt DÜZELTME-------------------------------------------------------------------------
				
			case 5:
				{
					duzeltme();
					break;	
					}
				}//switch5 sonuu
					
		
			    
			
		

		
		
	cout<<"\n Baþka iþlem yapacak mýsýnýz(e/E) (h/H)"; cin>>secim1;
	cout<<"\a"<<endl;
	}while(secim1=='e'|| secim1=='E');
	cout<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
	cout<<"   (((((=   ÝYÝ GÜNLER DÝLERÝZ  =))))"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl<<endl<<endl<<endl<<endl<<endl;
}
