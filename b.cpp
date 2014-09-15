#include <iostream.h>
#include <conio.h>
#include <math.h>
main(){
	int bil[3];
	float t,ku,b,ka;

		for(int i=0;i<3;i++){
   	cout << "Masukkan nilai ke-" << (i+1) << " = ";
  	 	cin >> bil[i];
      }

   t=bil[0]+bil[1]+bil[2];
   ku=bil[0]-bil[1]-bil[2];
   b=bil[0]/bil[1]/bil[2];
   ka=bil[0]*bil[1]*bil[2];

	cout << "\nHitungan Pertambahan\n";
	cout << bil[0] << " + " <<bil[1] << " + " <<bil[2] << " = " << t;

	cout << "\nHitungan Pengurangan\n";
	cout << bil[0] << " - " << bil[1] << " - " <<bil[2] << " = " << ku;

	cout << "\nHitungan Pembagian\n";
	cout << bil[0] << " / " << bil[1] << " / " <<bil[2] << " = " << b;

	cout << "\nHitungan Perkalian\n";
	cout << bil[0] << " * " << bil[1] << " * " << bil[2] << " = " << ka;

	cout << "\nHitungan Akar dari tiap-tiap nilai\n";
	cout << bil[0] << " hasil akar = " <<sqrt(bil[0]) << "\n";
	cout << bil[1] << " hasil akar = " <<sqrt(bil[1]) << "\n";
	cout << bil[2] << " hasil akar = " <<sqrt(bil[2]);

getch();
}
