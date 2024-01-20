// hello world

#include <iostream>

using namespace std;
int main (){
    cout<< "Hello World";
    return 0;
}


//tipe data dasar 
// bilangan bulat
int a =  1;
long b = 10;
short c = 12;

// desimal
double f = 1.5;
float d = 2.5;

//character
char e = 'a'; // character 1 bit

// boolean
bool g = true; //true-false 

// string



#include <iostream>

using namespace std;
int main (){
    int x = 20;
    int y = 5;
    cout<< "penjumlahan antara nilai" << x << " dengan nilai" << y;
    return 0;
}

// cara lain buat variabel x dan y
int main(int x,int y) {
    return x + y; 
}

// cara lain buat keterangan
void log(){
    cout << "ini hasilnya ";
    //jangan lupa pakai log buat manggil nya
}

// contoh
int pertambahan(int x, int y){
    return x + y;
}

int pengurangan(int x, int y){
    return x - y;
}

int perkalian(int x, int y){
    return x * y;
}

int pembagian(int x, int y){
    return x / y;
}

void log(int result){
    cout << "hasilnya adalah "; cout << result << endl;
}

int main() {
    int hasil_1= pertambahan(5, 20);
    int hasil_2= pengurangan(10, 1);
    int hasil_3= perkalian(5, 15);
    int hasil_4= pembagian(25, 5);
    log(hasil_1);
    log(hasil_2);
    log(hasil_3);
    log(hasil_4); 
    return 0;
}


int x;
int main (){
    cout << "masukan nilai";
    cin >> x;
    int nilai = x;

    if (nilai > 80) {
        cout << "A";
    }else if (nilai > 60) {
        cout << "B";
    }else if (nilai >= 50) {
        cout << "C";
    }else  {
        cout << "D";
    }
    return 0;
    // short hand if else
    string nama = "rizky";
    string hasil = (nama == "rizky") ? "selamat pagi" : "selamat malam";
    cout << hasil;

    int a = 2;
    int b = 3;

    bool hasil;
    //not
    hasil = !(a == b);
    //cout << hasil;

    // and
    hasil = (a == b) and (a == b); // false and false
    cout << hasil << endl;
    hasil = (a == a) and (a == a); // true and true
    cout << hasil << endl;
    hasil = (b == a) and (a == a); // false and true
    cout << hasil << endl;
    hasil = (a == a) and (b == a); // true and false
    cout << hasil << endl;

  
    // or 
    hasil =  (a == b) or (a == b); // false and false
    cout << hasil << endl;
    hasil = (a == a) or (a == a); // true and true
    cout << hasil << endl;
    hasil = (b == a) or (a == a); // false and true
    cout << hasil << endl;
    hasil = (a == a) or (b == a); // true and false
    cout << hasil << endl;
// for 
    for (int i = 1; i < 10 ; i++) {
    cout << "hello world" << endl;
  }
 
    return 0;
}


/* akan mengesekusi statement setelah
itu baru akan membaca persyaratan*/
int x = 0;
int main() {
     do{
        cout << "ini perulangan ke " << x << endl;
        x++;
     }while (x < 10);
     cout << "selesai";
     return 0;
}

// if else version
float x ;
char aritmatic;
float y, hasil;

 cout << "masukkan angka pertama ";
  cin >> x;
  cout << "masukkan operator (+,-,x,/) ";
  cin >> aritmatic;
  cout << "masukkan angka kedua ";
  cin >> y;

  if (aritmatic == '+'){
   hasil = x + y;
   cout << hasil;
  }else if (aritmatic == '-'){
   hasil = x - y;
   cout << hasil;
  }else if (aritmatic == 'x' ){
    hasil = x * y;
    cout << hasil;
  } else if (aritmatic == '/'){
    hasil = x / y;
    cout << hasil;
  } else  
  {
    cout << "ulangi kembali ";
  }

float a,b,hasil;
char aritmatic;
// switch case 
int main() {
    cout << "masukkan angka " ;
    cin >> a;
    cout << "masukkan angka operator (+,-,x,/)";
    cin >> aritmatic;
    cout << "masukkan angka " ;
    cin >> b;

    switch (aritmatic){
        case '+':
        hasil = a + b;
        cout << "hasilnya adalah " << hasil;
        break;
        case '-':
        hasil = a - b;
        cout << "hasilnya adalah " << hasil;
        break;
        case 'x':
        hasil = a * b;
        cout << "hasilnya adalah " << hasil;
        break;
        case '/':
        hasil = a / b;
        cout << "hasilnya adalah " << hasil;
        break;

        default:
        cout << "ulangi kembali";
        
    }  

for (int i = 0; i < 10; i++ ) {
        cout << i << endl;
 
    }
    cout << "loop ke 2" << endl;
    for (int i = 0; i < 10; i+= 3 ) {
        cout << i << endl;

    }
    cout << "loop ke 3" << endl;
    int total = 0;
    for (int i = 0; i < 10; i++ ) {
        total  -= i;
        cout << i << "||" << total <<  endl;

    }
    cout << "loop ke 4" << endl;
    int hasil = 0;
    for (int i = 0; i < 20; i+= 4,  hasil  += i) {
       
        cout << i << "||" << hasil <<  endl;

    }




}


int tambah (int b1, int b2){
    int x;
    x=b1+b2;
    return x;
}

int kali (int b1,int b2){
    int y;
    y= b1*b2;
    return y;
}

int main () {
    int b1,b2,x,y;
    cout <<"nilai b1 ";
    cin >> b1;
    cout<<"nilai b2 ";
    cin>> b2;
    x = tambah(b1,b2);
    cout<<"hasil tambah " << x<< endl;
    y=kali(b1,b2);
    cout<<"hasil kali "<<y<<endl;


}


 int main(){
    int a,t;
    float pembagi = 0.5,luas;
    cout << "masukkan alas segitiga";
    cin>> a;
    cout << "masukkkan tinggi segitiga";
    cin>>t;
    luas=pembagi*a*t;
    cout<<"Luas segitiga adalah: " << luas;
 }

//program bilangan fibonaci
   // f_n = f_n1 + f_n2
   
    int n, f_n,f_n1, f_n2;
    cout << "masukkan nilai n : ";
    cin >> n;
    f_n1 = 1;
    f_n2 = 0;
    cout << f_n2 << endl;
    // cout << f_n1 << endl;
    for(int i = 1; i <= n; i++){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << f_n << endl;
    }
  
  //
  
  double pertambahan (double x, double y){
	return x + y;
}

double pengurangan  (double x,double  y){
	return x - y;
}

double perkalian   (double x,double  y){
	return x * y;
}

double pembagian   (double x,double  y){
	if(y != 0){
		return x/y;
	}else{
		cout << "tidak dapat membagi dengan bilangan 0, ulangi kembali";
		return 0;
	}
}


void aritmatika(){
	cout << "masukkan operator aritmatika (+,-,*,/): ";
}

int main(){
	float a,b;
	char kl; 
	aritmatika();
	cin >> kl;
	
	cout << "masukkan angka pertama ";
	cin >> a;
	cout << "masukkan angka kedua  ";
	cin >> b;
	
	
	
	switch(kl){
		case '+':
			cout << "hasilnya adalah " << pertambahan(a,b) << endl;
			break;
		case '-':
			cout << "hasilnya adalah " << pengurangan(a,b) << endl;
			break;
		case '*':
			cout << "hasilnya adalah " << perkalian(a,b) << endl;
			break;
		case '/':
			cout << "hasilnya adalah" << pembagian(a,b) << endl;
			break;
		 default: 
		 cout << "ulangi kembali ";
	}
		
		int n;
		
	//segitiga
	cout <<"masukkan angka : ";
	cin >> n;
	for(int i = 0; i<=n; i++){
		for(int j = 0; j<i; j++){
		cout << " ";
		}
		for(int k= n; k>=i; k--){
			cout <<"*";
		}cout << endl;
	}


    #include <iostream>
using namespace std;

// praktek jumat 
int main(){
    unsigned int pilihan;
    float r,Ll,p,l,Lp,a,t,Ls;
    cout << "menu utama" << endl;
    cout << "------" << endl;  
    cout << "1. menghitung luas lingkaran" << endl;
    cout << "2. menghitung luas persegi" << endl;
    cout << "3. menhitung luas segitiga" << endl;
    cout << "4. keluar" << endl;
    cout <<  "------" << endl;  
    
    while  (pilihan >=0){
           cout << "pilihan anda (1/2/3/4): ";
           cin >> pilihan;
    switch (pilihan){
           case 1:
                cout << "menghitung luas lingkaran " << endl;
                cout << "masukkan jari jari ";
                cin >> r;
                Ll = 3.14 *r *r;
                cout << "luas lingkaran adalah : " << Ll;
                cout << "------" << endl;  
                break;
                
           case 2 :
                cout << "menghitung luas persegi " << endl;
                cout << "masukkan panjang ";
                cin >> p;
                cout << "masukkan lebar " ;
                cin >> l;
                Lp = p *l;
                cout << "Luas persegi : :" << Lp << endl;
                cout << "------" << endl;  
                break;
                
           case 3 : 
                cout << "menghitung luas segitiga";
                cout << "masukkan alas : ";
                cin >> a;
                cout << "masukkan tinggi : ";
                cin >> t;
                Ls = 0.5 *a*t;
                cout << "luas segitiga" << Ls <<endl;
                cout << "------" << endl;  
                break;
                
           case 4:
                exit(4);
                break;
                default:
                        cout << "kode yang anda masukkan salah \n";
                        }
                        }
                        }

}
