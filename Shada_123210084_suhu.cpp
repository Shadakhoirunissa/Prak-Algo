#include <iostream>
using namespace std;

int main ()
{
	float c, r, f, k;
	
	cout<< "Konversi Suhu\n";
	cout<< "\n";
	
	cout<< "Masukkan suhu (celcius) = ";
	cin>> c;
	cout<<endl;
	
	r = c*4/5;		//dalam tugas tertulis 4/9*c sedangkan rumus celcius ke reamur 4/5*c
	f = (c*9/5)+32;
	k = c+273;
	
	cout<< "Hasil konversi suhu : \n";
	cout<< "Fahrenheit = " << f << "\n";
	cout<< "Reamur     = " << r << "\n";
	cout<< "Kelvin     = " << k << "\n";
	
	return 0;
}
