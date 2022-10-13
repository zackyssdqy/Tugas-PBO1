#include<iostream>
using namespace std;

int main (){								//main program
	char g[6]={'Q','W','E','R','T', 'Y'};
	int f[3][2] = {{9,8}, {7,6}, {5,4}};
	int a,j=1,m,d;									//tipe data yang mendeklarasikan variabel
	char angka;
	
	cout<<endl;
	cout<<"Array 1D & Perulangan For"<<endl;
    for(int a=0; a<6; a++){									//Perulangan For
        cout<<"Isi Array ke-"<<a<<" = "<<g[a]<<endl;             //output
    }
    
    cout<<endl;
    cout<<"Array Multidimensi"<<endl;		//Array Multidimensi (2 dimensi)
    for(int j=0;j<3;j++)
	{
		for(int k=0;k<2;k++)
		{
			cout<<f[j][k]<<"\t";
		}
		cout<<endl;
	}
    	cout<<endl;
    	cout<<"Percabangan IF menentukan angka Ganjil/Genap"<<endl;       //Percabangan IF
    	cout<<"Masukkan Angka (1-10): ";    //Inputan
    	cin>>angka;
    if (angka%2==0){
        cout<<angka<<" Adalah angka genap"<<endl;   //Output
    }else{
        cout<<angka<<" Adalah angka ganjil"<<endl;  //Output
	}
	
	cout<<endl;
	cout<<"Perulangan While Do While"<<endl;			//Do While
	int b;
	while (b < 3) {
        cout << "Konversi Satuan jam ke Menit"<<endl;
        b++;
    }
	do {
		m= j*60;
    	d=m*60;
	 	cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
	 	j +=1;	
    } while (j <=3);
	 return 0;
}

