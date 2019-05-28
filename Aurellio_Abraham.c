#include <stdio.h>
#include <windows.h>

int xx=1, xy=1, terpilih(), core(), jeniskamar(), sewakamar(), checkout(), tutup(), eksekutif(), reguler(), bersama(), jumlaheks = 20, jumlahreg = 50, jumlahber = 150, eks(), reg(), ber();
void header(), help(),  welcome();
char kamar, pilih, name[100], kodekamar, in, alamat[100];
int i, l;

int main(){
	system("COLOR 04");
	welcome();
	core();
}

int core(){
	header();
	printf("  Menu :\n");
	printf("  [1] Jenis Kamar\n  [2] Check in Room\n  [3] Check out Room\n  [4] Help\n  [5] Exit\n\n");
	terpilih();
}

void welcome(){

	printf("\n");
	for (i = 1; i < 4; i++){
		printf("\n");
	}
	printf("                                    Link Start\n");
	printf("                                    ");
	for (l = 0; l < 6; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                  Pengecekan Sistem\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
}

void header(){
	printf("\n RS UI\n");
	printf(" Penyewaan Rawat Inap\n");
	printf(" Penyewaan Terbuka untuk Umum\n");
	printf(" -------------------------\n");
	printf(" =========================\n");
	printf(" -------------------------\n");
	
}

int terpilih(){
	printf("\n Apa yang ingin anda pilih : ");
	fflush(stdin);
		scanf("%c", &pilih);
		switch(pilih){
			case '1':
				system ("cls");
				jeniskamar();
				break;
			case '2':
				system ("cls");
				sewakamar();
				break;
			case '3':
				system ("cls");
				checkout();
				break;
			case '4':
				system ("cls");
				help();
				break;
			case '5':
				tutup();
				break;
			default:
				printf(" \nPilihan anda tidak tersedia!");
				return terpilih();

	}
}

int jeniskamar(){
	header();
	printf("Jenis Kamar:\n");
	printf("[1]Kamar Eksekutif : Rp. 2.500.000/malam Kamar\n");
	printf("[2]Kamar Reguler   : Rp. 1.500.000/malam \n");
	printf("[3]Kamar Bersama   : Rp. 700.000/malam	 \n\n");
	printf("Tekan [Enter] untuk Ke Main Menu\n");
	getch();
	system("cls");
	return core();

}

int tutup(){
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                Menutup Program\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
		printf(".");
		Sleep(500);
	}
	printf("\n\n\n\n");

	exit(0);
}

int sewakamar(){
	header();
	printf("  Nama : \n");
	scanf(" %[^\n]s", name);
	while(xx == 1){
		printf("Kamar Tersedia Untuk Eksekutif	: %d\n", jumlaheks);
		printf("Kamar Tersedia Untuk Reguler	: %d\n", jumlahreg);
		printf("Kamar Tersedia Untuk Bersama	: %d\n", jumlahber);
		printf("  Eksekutif, Reguler, atau Bersama? [E/R/B] : ");
		fflush(stdin);
		scanf("%c", &kamar);
		if (kamar == 'E'){
			system("cls");
			eksekutif();
			xx=0;
		}
		else if (kamar == 'R'){
			system("cls");
			reguler();
			xx = 0;
		}
		else if (kamar == 'B'){
			system("cls");
			bersama();
			xx=0;
		}
		else{
			printf("  Input anda salah, tolong cek kembali!\n");
			xx = 1;
		}
	}
	
}
int eksekutif(){
	header();
	printf("Apakah anda ingin menyewa kamar eks\n");
		printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlaheks--;
		header();
		printf("Jumlah Kamar : %d \n", jumlaheks);
		printf("Kamar Telah Berhasil Dipesan\n");
		printf("Terimakasih %s telah memesan kamar di Rumah Sakit Universitas Indonesia\n",name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int reguler(){
	header();
	printf("Apakah anda ingin menyewa kamar reg\n");
		printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahreg--;
		header();
		printf("Jumlah Kamar : %d \n", jumlahreg);
		printf("Kamar Telah Berhasil Dipesan");
		printf("Terimakasih %s telah memesan kamar di Rumah Sakit Universitas Indonesia\n", name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int bersama(){
	header();
	printf("Apakah anda ingin menyewa kamar ber\n");
		printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahber--;
		header();
		printf("Jumlah Kamar : %d \n", jumlahber);
		printf("Kamar Telah Berhasil Dipesan");
		printf("Terimakasih %s telah memesan kamar di Rumah Sakit Universitas Indonesia\n", name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int checkout(){
	header();
	while(xy == 1){
		printf("  Eksekutif, Reguler, atau Bersama? [E/R/B] : ");
		fflush(stdin);
		scanf("%c", &kamar);
		if (kamar == 'E'){
			system("cls");
			eks();
			xy=0;
		}
		else if (kamar == 'R'){
			system("cls");
			reg();
			xy = 0;
		}
		else if (kamar == 'B'){
			system("cls");
			ber();
			xy=0;
		}
		else{
			printf("  Input anda salah, tolong cek kembali!\n");
			xy = 1;
		}
	}
	
}
int eks(){
	header();
	printf("Apakah anda ingin checkout kamar eks\n");
	printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlaheks ++;
		header();
		printf("Jumlah Kamar: %d \n", jumlaheks);
		printf("Kamar Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}

int reg(){
	header();
	printf("Apakah anda ingin checkout kamar reg\n");
	printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahreg ++;
		header();
		printf("Jumlah Kamar: %d \n", jumlahreg);
		printf("Kamar Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}

int ber(){
	header();
	printf("Apakah anda ingin Checkout kamar ber\n");
	printf("Tekan [y] untuk checkout kamar\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahber++;
		header();
		printf("Jumlah Kamar: %d \n", jumlahber);
		printf("Kamar Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}


void help(){
	header();
	printf("1. Masukkan angka sesuai dengan perintah program\n");
	printf("2. Tekan [Enter] untuk kembali ke main menu\n");
	printf("3. Tekan y untuk melanjutkan pemesanan anda\n");
	getch();
	system("cls");
	return core();
	
}
