#include <iostream>
using namespace std;

string pengunjung[3][5] = {
    {"1095","Jihan Haya Mufialdo","Perempuan","18 tahun","Sudah Vaksin"},
    {"1008","Nauval Hanif","Laki-Laki","17 tahun","Sudah Vaksin"},
	{"1062","Firman Ahmad Bayumi","Laki-Laki","18 tahun","Sudah Vaksin"}
};

string mal[20][5] = {
	{"1.","Grand Indonesia","Jl. M.H. Thamrin No. 1, Kebon Kacang, Tanah Abang","10.00","20.00"},
	{"2.","Plaza Indonesia","Jl. MH. Thamrin, Kav. 28-30, Gondangdia, Menteng","10.00","20.00"},
	{"3.","Senayan City","Jl. Asia Afrika No. 19, Gelora, Tanah Abang","10.00","20.00"},
    {"4.","Plaza Senayan","Jl. Asia Afrika No.8, Gelora, Tanah Abang","10.00","20.00"},
	{"5.","Mal Taman Anggrek","Jl. Letjen. S. Parman Kav. 28, Tanjung Duren Selatan, Grogol Petamburan","10.00","20.00"},
	{"6.","Lippo Mall Puri","Jl. Puri Indah Raya No. 3, Kembangan Selatan, Kembangan","10.00","20.00"},
	{"7.","Central Park","Jl. Letjen. S. Parman Kav. 28, Tanjung Duren Selatan, Grogol","10.00","20.00"},
	{"8.","Mal Ciputra","Jl. Letjen. S. Parman, Tanjung Duren Utara, Grogol Petamburan","10.00","20.00"},
	{"9.","Pondok Indah Mall","Jl. Metro Pondok Indah Kav. 4, Pondok Pinang, Kebayoran Lama","10.00","20.00"},
	{"10.","Kota Kasablanka","Jl. Casablanca No 88, Menteng Dalam, Tebet","10.00","20.00"},
	{"11.","Gandaria City","Jl Sultan Iskandar Muda, Kebayoran Lama Utara, Kebayoran Lama","10.00","20.00"},
	{"12.","Blok M Square","Jl. Melawai V, Kebayoran Baru","10.00","20.00"},
	{"13.","Pacific Place","Jl. Jenderal Sudirman Kav. 52-53, Senayan, Kebayoran Baru","10.00","20.00"},
	{"14.","AEON Mall","Jl. Jakarta Garden City Boulevard No.1, Cakung Timur, Cakung","10.00","20.00"},
	{"15.","Tamini Square","Jalan Taman Mini I No.1, Pinang Ranti, Makasar","10.00","20.00"},
	{"16.","Mal Cipinang Indah","Jl. Raya Kalimalang No.88, Pondok Bambu, Duren Sawit","10.00","20.00"},
	{"17.","Mal Kelapa Gading","Jl. Boulevard Kelapa Gading Raya no. 13, Kelapa Gading Timur, Kelapa Gading","10.00","20.00"},
	{"18.","Emporium Pluit Mall","Jl. Pluit Selatan Raya No. 15, Penjaringan, Penjaringan","10.00","20.00"},
	{"19.","PIK Avenue","Jl. Pantai Indah Kapuk Boulevard No. 6, Kamal Muara, Penjaringan","10.00","20.00"},
	{"20.","Mangga Dua Square","Jl. Gunung Sahari Raya No. 1, Ancol, Pademangan","10.00","20.00"}
};

int waktu();
int daftar_mal();
int username_co();

int main(){
	system("color F0");
	int pilih;
	bool exit = false;
		cout << "\n================================================== \n";
		cout << "================ LINDUNGI PEDULI ================= \n";
		cout << "================================================== \n";
		cout << endl;
		cout << "1. Mall Check In \n";
		cout << "2. Mall Check Out \n";
		cout << "3. Exit Program \n";
		cout << endl;
		cout << "Pilih Menu (1-3) : "; cin >> pilih;
		cout << endl;
		system("cls");
		switch (pilih){
			case 1 :
				daftar_mal();
				break;
			case 2 :
				username_co();
				break;
			case 3 :
				exit;
				break;	
			default :
  	  			cout << "\n\n!!! MAAF, PILIHAN YANG ANDA MASUKKAN TIDAK TERDAPAT PADA MENU !!!\n\n\n";
  	  			system("pause");
  	  			system("cls");
  	  			main();
  	  			break;
		}	
		return 0;
	} 
	
int waktu(){
	system("cls");
	float pukul;
		cout << "---------------------------------------------------------------\n";
		cout << "  Note : Harap masukkan waktu anda saat ini dalam 00.00-24.00\n";      
		cout << "---------------------------------------------------------------\n";
		cout << "\nWaktu\t\t: "; cin >> pukul;
		if (pukul < 10.00 || pukul > 20.00){
			system("cls");
			cout << "\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			cout << "         MAAF, ANDA BERADA DI LUAR JAM OPERASIONAL.\n";
			cout << "SILAHKAN MELAKUKAN CHECK IN / CHECK OUT PADA JAM OPERASIONAL.\n";
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
			cout << endl;
			system("pause");
			system("cls");
			main();
		}
}

int daftar_mal(){
	system("color B0");
	system("cls");
	int unem;	
	cout << endl;
	cout << "-----------------------------------------------------\n";
	cout << "    Note : Harap masukkan username terdaftar Anda\n";
	cout << "-----------------------------------------------------\n";
	cout <<endl;
	cout << "Username\t: "; cin >> unem;
	if (unem == 1095 || unem == 1008 || unem == 1062){
		char pilih;	
		for (int i=0;i<20;i++){
		system("cls");
		cout << "======================================================\n";
		cout << "============== DAFTAR MAL D.K.I. JAKARTA =============\n";
		cout << "======================================================\n";
		cout << endl;
		cout << "Nama Mal\t: " << mal[i][1] << endl;
		cout << "Alamat\t\t: " << mal[i][2] << endl;
		cout << "Jam Buka\t: " << mal[i][3] << endl;
		cout << "Jam Tutup\t: " << mal[i][4] << endl;
		cout << endl;
		cout << "---------------------------------------------\n";
		cout << " NOTE : - ketik n untuk pilihan selanjutnya\n";
		cout << "        - ketik c untuk melakukan check in\n";
		cout << "---------------------------------------------\n";
		cout << endl;
		cout << "Pilihan : "; cin >> pilih;
			switch(pilih){
				case 'n' :
					cout << "Nama Mal\t: " << mal[i][1] << endl;
					cout << "Alamat\t\t: " << mal[i][2] << endl;
					cout << "Jam Buka\t: " << mal[i][3] << endl;
					cout << "Jam Tutup\t: " << mal[i][4] << endl;
					break;
				case 'c' :
					waktu();
					system("cls");
					cout << "\n----------------------------------------------------\n";
					cout << "   Anda melakukan Check In di " << mal[i][1];
					cout << "\n----------------------------------------------------\n\n";
					system("pause");
					system("cls");
					main();
					break;	
				default :
					system("cls");
					cout << "\n\n!!! HARAP MASUKKAN SESUAI PILIHAN YANG ADA !!!\n\n";
					cout << endl;
					system("pause");
					daftar_mal();
			}
		}
	} else {
		system ("cls");
		cout << "\n\n!!! MAAF, USERNAME ANDA TIDAK TERDAFTAR !!!\n\n\n";
	  	system ("pause");
	  	system ("cls");
	  	main();
	}
}

int username_co(){
	system("color A0");
	int unem;	
	cout << endl;
	cout << "-----------------------------------------------------\n";
	cout << "    Note : Harap masukkan username terdaftar Anda\n";
	cout << "-----------------------------------------------------\n";
	cout << endl;
	cout << "Username\t: "; cin >> unem;
	system("cls");
	cout << "\n=====================================================\n";
	cout << "                     DATA USER\n";
	cout << "=====================================================\n";
		switch(unem) {
			case 1095 :
				cout << "Nama\t\t: " << pengunjung[0][1] << endl;
		     	cout << "Jenis Kelamin\t: " << pengunjung[0][2] << endl;
		     	cout << "Umur\t\t: " << pengunjung[0][3] << endl;
		     	cout << "Status Vaksin\t: " << pengunjung[0][4] << endl;
				break;
	     	case 1008 :
		     	cout << "Nama\t\t: " << pengunjung[1][1] << endl;
		     	cout << "Jenis Kelamin\t: " << pengunjung[1][2] << endl;
		     	cout << "Umur\t\t: " << pengunjung[1][3] << endl;
		     	cout << "Status Vaksin\t: " << pengunjung[1][4] << endl;	
				break;
	     	case 1062 :
		     	cout << "Nama\t\t: " << pengunjung[2][1] << endl;
		     	cout << "Jenis Kelamin\t: " << pengunjung[2][2] << endl;
		     	cout << "Umur\t\t: " << pengunjung[2][3] << endl;
		     	cout << "Status Vaksin\t: " << pengunjung[2][4] << endl;	
				break;
		    default :
		    	cout << "\n\nMAAF, USERNAME ANDA TIDAK TERDAFTAR\n\n\n";
	  	  		system ("pause");
	  	  		system ("cls");
	  	  		main();
	  	  		break;
	    }    
	string lanjut;
	cout << endl;
	cout << "--------------------------------------------------\n";
	cout << "  NOTE : harap ketik ya untuk menu selanjutnya\n";
	cout << "--------------------------------------------------\n";
	cout << endl;
	cout << "Lanjut ? : "; cin >> lanjut;
	if (lanjut=="ya" || lanjut=="YA" || lanjut=="Ya"){
		system("cls");
		cout << "\n==================================================\n";
		cout << "                     DAFTAR MAL\n";
		cout << "==================================================\n";
		cout << "Note : Harap pilih nomor mal dimana Anda\n";
		cout << "       telah melakukan check in sebelumnya\n\n";
    	cout << mal[0][0] << " " << mal[0][1] << endl;
			for (int i=1;i<20;i++){
				cout << mal[i][0] << " " << mal[i][1] << endl;
			}
		int pilih; 
		cout << "\nPilih Mal (1-20): " ; cin >> pilih;
		if (pilih >= 1 && pilih <=20){
			waktu();
		} else {
			system("cls");
			cout << "\n\n!!! MAAF, NOMOR YANG ANDA PILIH TIDAK TERDAFTAR !!!\n\n\n";
			system("pause");
			system("cls");
			username_co();
		}
    } else {
    	system("cls");
    	cout << "\n\n!!! MASUKAN ANDA TIDAK SESUAI !!!\n\n\n";
    	system("pause");
    	system("cls");
    	main();
	}
	
	system("cls");
	cout << "\n-------------------------------------------------\n";
	cout << "            ANDA TELAH MELAKUKAN CHECK OUT\n";
	cout << "-------------------------------------------------\n\n";
	system("pause");
	system("cls");
	main();			
}	    
