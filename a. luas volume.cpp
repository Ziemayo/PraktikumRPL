#include <iostream.h>
#include <conio.h>

main()
{
int pil,s,p,l,t,r;
float V,L;
cout<<"\n";
cout<<"Menu Program Volume dan Luas\n";
cout<<"1. Kubus\n";
cout<<"2. Balok\n";
cout<<"3. Bola\n";
cout<<"4. Tabung\n";
cout<<"\n";
cout<<endl;
cout<<"pilih Luas dan Volume mana yang ingin anda hitung : "; cin>>pil;
cout<<endl;

switch(pil)
{
case 1:
cout<<"Masukan sisi : "; cin>>s;
V=(s*s*s);
L=((s*s)*6);
cout<<"=============\n";
cout<<"Volume : "<<V;
cout<<endl;
cout<<"Luas   : "<<L;
break;

case 2:
cout<<"Panjang : "; cin>>p;
cout<<"Lebar   : "; cin>>l;
cout<<"Tinggi  : "; cin>>t;
V=(p*l*t);
L=((p*l)+(l*t)+(p*t)*2);
cout<<"=============\n";
cout<<"Volume  : "<<V;
cout<<endl;
cout<<"Luas    : "<<L;
break;

case 3:
cout<<"Masukan Jari-jari bola : "; cin>>r;
V=((r*r*r)*(3.14*4)/3);
L=(4*3.14*(r*r));
cout<<"=============\n";
cout<<"Volume : "<<V;
cout<<endl;
cout<<"Luas   : "<<L;
break;

case 4:
cout<<"Tinggi tabung : "; cin>>t;
cout<<"Jari2 tabung  : "; cin>>r;
V=(t*3.14)*(r*r);
L=(((2*3.14)*(r*r))+((2*3.14)*(r*t)));
cout<<"=============\n";
cout<<"Volume : "<<V;
cout<<endl;
cout<<"Luas   : "<<L;
break;
default:
cout<<"Maaf anda salah input";
}

getch ();
}

