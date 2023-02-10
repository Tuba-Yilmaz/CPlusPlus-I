#include<iostream>
#include<locale.h>
using namespace std;
int main()
{setlocale(LC_ALL,"turkish");
int kac,i,yedek,k,buyuk,j;
int dizi[kac];
cout<<"Kac sayi girmek istediginizi giriniz: ";cin>>kac;
cout<<"\n";
  for( j=1;j<kac+1;j++)
  {cout<<j<<". Sayiyi giriniz: ";
   cin>>dizi[j];
  }
	 
	for(int j=1;j<kac+1;j++)
	{
		for(k=1;k<kac;k++)
		{
	    	if(dizi[k]>dizi[k+1])//KÜÇÜKTEN BÜYÜÐE
	        {yedek=dizi[k];
	         dizi[k]=dizi[k+1];
	         dizi[k+1]=yedek;
	        }
	    }
}cout<<"\a"<<endl;
cout<<"-SIRALANMIS HALI-"<<endl;

	cout<<"--------------------"<<endl;
	for(j=1;j<kac+1;j++)
	{cout<<dizi[j]<<endl;}
	cout<<"--------------------"<<endl;
}
