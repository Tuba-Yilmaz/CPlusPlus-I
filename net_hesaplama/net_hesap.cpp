/*
Her test turunde 4 yanlisin 1 dogruyu goturdugu esit sayida sorularin soruldugu 75 soruluk bir sinavda her soruya Týrkce icin 
2, fen bilgisi icin 4 ve matematik icin 5 puan verilmektedir. Derslere göre dogru ve yanlis sayisi girildiginde her dersin 
puanini, dersin net sayisini, toplam puani ve toplam net sayisini gosteren program
*/
#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	setlocale (LC_ALL, "Turkish");
	int a, b, c, d, x, y;
	float turkcenet, turkcepuan, fennet, fenpuan, matnet, matpuan, toplamnet, toplampuan;
	
	cout<<"Turkce dogru sayisini girin: ";
	cin>>a;
	cout<<"Turkce yanlis sayisini girin: ";
	cin>>b;
	
	if (a+b<=25)
	   { turkcenet=a-b/4;
	
	    cout<<"Turkce net: "<<turkcenet<<"";
	    cout<<endl;
	
	    turkcepuan=turkcenet*2;
	
	    cout<<"Turkce puan:"<<turkcepuan<<"";
    	cout<<endl;
    }
	else 
	{
		cout<<"Hatali Giris Yaptiniz! " ;
		return 0;
	}
	
	cout<<"Fen Bilgisi dogru sayisini girin: ";
	cin>>c;
	cout<<"Fen Bilgisi yanlis sayisini girin: ";
	cin>>d;
	
	if (c+d<=25)
	    {fennet=c-d/4;
	
       	cout<<"Fen BÝlgisi Net:"<<fennet<<"";
	    cout<<endl;
	
	    fenpuan=fennet*4;
	
	    cout<<"Fen Bilgisi Puan:"<<fenpuan<<"";
     	cout<<endl;
        }
    else 
    {
    	cout<<"Hatalý Giriþ Yaptýnýz!";
    	return 0;
    }
	
	cout<<"Matematik dogru sayisini girin: ";
	cin>>x;
	cout<<"Matematik yanlis sayisini girin: ";
	cin>>y;
	
	if (x+y<=25)
	    {matnet=x-y/4;
	
    	cout<<"Matematik Net: "<<matnet<<"";
    	cout<<endl;
	
	    matpuan=matnet*5;
 	
    	cout<<"Matematik Puan: "<<matpuan<<"";
    	cout<<endl;
        }
    else
    {  
	    cout<<"Hatali Giriþ Yaptiniz!";
	    return 0;
	}
	
	toplamnet=turkcenet+fennet+matnet;
	
	cout<<"Toplam Net:"<<toplamnet<<"";
	cout<<endl;
	
	toplampuan=turkcepuan+fenpuan+matpuan;
	
	cout<<"Toplam Puan: "<<toplampuan<<"";
	cout<<endl;
	
	system("pause");
	return 0;
	}


