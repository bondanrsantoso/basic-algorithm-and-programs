#include <stdio.h>
#include <string.h> // Library untuk operasi string
#include <conio.h>
#define STR_LEN 20

int main()

{
  struct kendaraan
  {
    int lp,bayar; 
    char nama[STR_LEN], jk[STR_LEN];
  } parkir;
 
	printf("Nama Pengemudi                  ="); scanf("%s",parkir.nama);
	printf("Jenis Kendaraan                 ="); scanf("%s",parkir.jk); //data 1.motor 2.mobil
	printf("Lama Parkir                     ="); scanf("%d",&parkir.lp);

  // Penggunaan strncmp -> strncmp(string1, string2, panjang_teks)
  // strncmp akan return value 0 kalau kedua string persis sama
  
	if	(strncmp(parkir.jk, "motor", STR_LEN) == 0) //motor
	{
		if (parkir.lp <= 3) parkir.bayar = 2000;					//data pertama
		else if (parkir.lp <= 8) parkir.bayar = 5000;
		else parkir.bayar = 12000;
	}
	else if (strncmp(parkir.jk, "mobil", STR_LEN) == 0)
	{  
		if (parkir.lp <= 3) parkir.bayar = 5000;					//data kedua
		else if (parkir.lp <= 8) parkir.bayar = 10000; //mobil						
		else parkir.bayar = 20000;
	}
	else
	{
		printf("Salah Memasukan Input");
	}
	printf("Biaya Parkir Rp.%d\n",parkir.bayar);
  getch();

  return 0;
}
