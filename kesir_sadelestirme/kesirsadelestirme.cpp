#include<iostream>
#include<locale.h>
using namespace std;
void kesirsadelestiren(int pay,int payda)
{  int yenipay,yenipayda;
 if(pay<payda)
 {
 	if(pay==1){
 		cout<<"******************************"<<endl;
		  cout<<"Kesir en sade halindedir."<<endl;
		  cout<<"******************************"<<endl;
	 }
 	for(int i=pay;i>1;i--)
 	{  if(pay%i==0&&payda%i==0)
 	      { cout<<"\a";
 	     	yenipay=pay/i;
 	     	yenipayda=payda/i;
 	     	cout<<"*****************************************"<<endl;
 	     	cout<<pay<<"/"<<payda<<" kesrinin sade hali: "<<yenipay<<"/"<<yenipayda<<endl;
 	     	cout<<"*****************************************"<<endl;
 	     	break;
 	     		
		  }//içİF
		  else
		  {cout<<"\a";
		  cout<<"******************************"<<endl;
		  cout<<"Kesir en sade halindedir."<<endl;
		  cout<<"******************************"<<endl;
		  break;}//ELSE
 	}//FOR
 	
 }//dışİF
 
 
 if(payda<pay)
 {
 	for(int i=payda;i>1;i--)
 	{  if(pay%i==0&&payda%i==0)
 	      { cout<<"\a";
 	     	yenipay=pay/i;
 	     	yenipayda=payda/i;
 	     	cout<<pay<<"/"<<payda<<" kesrinin sade hali: "<<yenipay<<"/"<<yenipayda<<endl;
 	     	break;	
		  }//içİF
		  
		  else
		  {cout<<"\a";
		  cout<<"******************************"<<endl;
		  cout<<"Kesir en sade halindedir."<<endl;
		  cout<<"******************************"<<endl;
		  break;}//ELSE
 	}//FOR
 	
 }//dışİF
	
}
int main()
{setlocale(LC_ALL,"turkish");
int pay,payda,yenipayda,yenipay;
cout<<"Payi girin:";cin>>pay;
cout<<"\n";
cout<<"Paydayi giriniz:";cin>>payda;
cout<<"\n";
 kesirsadelestiren(pay,payda);	
}
