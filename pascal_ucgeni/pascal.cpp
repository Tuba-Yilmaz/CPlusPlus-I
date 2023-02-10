#include<locale.h>
#include<iostream>
using namespace std;
int main()
{   setlocale(LC_ALL,"turkish");
 system("color b0");

 int satirsayisi, sayi = 1, bosluk;

 

 cout<<"Satir sayisini giriniz...:";

 cin>>satirsayisi;


 for(int i = 0; i<satirsayisi;i++)

 {
  for(bosluk = 1; bosluk < satirsayisi - i;bosluk++)
   cout<<"  ";

  for(int j = 0 ; j<=i;j++)
 {
   if(j==0 || i== 0)

    sayi=1;

   else

    sayi =sayi* (i-j+1)/j ;

   cout<<"  "<<sayi;

  }

  cout<<"\n";

}








}
	
	

	
