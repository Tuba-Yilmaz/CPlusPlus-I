#include <iostream>
#include <locale.h>
using namespace std;
int main()
 {
    setlocale(LC_ALL, "Turkish");
    int sayi, yuzler, onlar, birler;
    //sayiyi al
    cout<<"Uc basamakli sayiyi girin: ";
    cin>>sayi;
    //hesaplamalar
    yuzler=sayi/100;
    onlar=(sayi-(yuzler*100))/10;
    birler=sayi-(onlar*10+yuzler*100);
    //yazdir
    cout<<"Yuzler Basamagi: "<<yuzler<<endl;
    cout<<"Onlar Basamagi: "<<onlar<<endl;
    cout<<"Birler Basamagi: "<<birler<<endl;
}
