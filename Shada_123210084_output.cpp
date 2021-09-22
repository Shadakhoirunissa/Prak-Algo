#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	int garis;
	string nama, nim, plug;
	
	//input
	cout<< "Masukkan : " << "\n";
	cout<< "Nama \t : ";
	getline (cin, nama);
	
	cout<< "NIM \t : ";
	getline (cin, nim);
	
	cout<< "Plug \t : ";
	getline (cin, plug);
	
	//output
	cout<< endl << "Inilah data Anda :" << "\n";
	cout<< "Nama \t : " << nama << "\n";
	cout<< "NIM \t : "  << nim  << "\n";
	cout<< "Plug \t : " << plug << "\n";
	cout<< endl;
	
	//tabel
	garis = ((nama.length())+10) + ((nim.length())+7) + ((plug.length())+8);
	
	cout<< "Dalam bentuk tabel : " << "\n";
	
	//baris 1
	cout << setfill('=') << setw(garis) << "=" << "\n";
	
	cout << setfill(' ')
		 << "NIM" << setw((nim.length())+2)
		 << "|" << setw (8) << "Nama" << setw ((nama.length())+2)
		 << "|" << setw (8) << "Plug" << setw ((plug.length())+2) << "\n";
		 
	cout << setfill('=') << setw(garis) <<"="<< "\n";
	
	//baris 2
	cout << setfill(' ')
		 << nim << setw(5)
		 << "|" << setw(nama.length()+ 4) << nama << setw(6)
		 << "|" << setw(plug.length()+ 4) << plug << setw(6) << "\n";
		 
	cout << setfill('-') << setw(garis) << "-" << "\n";
	
	return 0;
}
