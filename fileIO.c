#include <stdio.h> 
/*#include <conio.h> */
#include <stdlib.h>
#include <string.h> 
#define STR_LEN 20

struct Kendaraan
{
  int lp,bayar,kembalian; 
  char nama[STR_LEN], jk[STR_LEN];
};

void saveToFile(struct Kendaraan kendaraan);

int main()
{ 
  struct Kendaraan parkir;
  char* serializedKendaraan;
  char jawab;
  
  puts("Parkiran Mall Cipinang Indah");

  do
  {
    puts("\n-----------------------------");
    printf("\nNama Pengemudi    ="); scanf(" %s",parkir.nama);
    printf("Jenis Kendaraan     ="); scanf(" %s",parkir.jk); 
    printf("Lama Parkir         ="); scanf("%d",&parkir.lp);

    if	(strncmp(parkir.jk, "motor", STR_LEN) == 0) 
    {
      if (parkir.lp <= 3) parkir.bayar = 2000;
      else if (parkir.lp <= 5) parkir.bayar = 3500;	
      else if (parkir.lp <= 8) parkir.bayar = 5000;
      else if (parkir.lp <= 10) parkir.bayar = 8000;
      else parkir.bayar = 12000;
    }
    else if (strncmp(parkir.jk, "mobil", STR_LEN) == 0)
    {  
      if (parkir.lp <= 3) parkir.bayar = 5000;
      else if (parkir.lp <= 5) parkir.bayar = 7000;	
      else if (parkir.lp <= 8) parkir.bayar = 10000; 
      else if (parkir.lp <= 10) parkir.bayar = 15000;						
      else parkir.bayar = 20000;
    }
    else if (strncmp(parkir.jk, "sepeda", STR_LEN) == 0)
    {
      if (parkir.lp <= 3) parkir.bayar = 1500;
      else if (parkir.lp <= 5) parkir.bayar = 2000;	
      else if (parkir.lp <= 8) parkir.bayar = 3000; 
      else if (parkir.lp <= 10) parkir.bayar = 4000;						
      else parkir.bayar = 5000;
    }
    else
    {
      printf("Salah Memasukan Input\n");
      if (parkir.lp <= 3) parkir.bayar = 0;
      else if (parkir.lp <= 5) parkir.bayar = 0;	
      else if (parkir.lp <= 8) parkir.bayar = 0; 
      else if (parkir.lp <= 10) parkir.bayar = 0;						
      else parkir.bayar = 0;
    }
    printf("Biaya Parkir Rp.%d\n",parkir.bayar);
    printf("Uang Yang Diberikan = Rp."); scanf(" %d",&parkir.kembalian);
    printf("Kembalian Yang diterima Rp.%d\n",parkir.kembalian-parkir.bayar);
    puts("-----------------------------\n");

    saveToFile(parkir);   

    printf("Apakah ada kendaraan yang masuk lagi (y/t) ? "); 
    scanf(" %c", &jawab);
  } while (jawab=='y' || jawab=='Y');
 	
}

// Rombakan gw ada disini
void saveToFile(struct Kendaraan kendaraan){
  FILE *f_struktur;

  if((f_struktur=fopen("parkir.txt","a"))== NULL)	
  {
    puts("File tidak bisa diciptakan!!!");
    exit(1);
  }

  fprintf(f_struktur, "TIKET PARKIR\n");
  fprintf(f_struktur, "============\n");
  fprintf(f_struktur, "Nama: %s\n", kendaraan.nama);
  fprintf(f_struktur, "Jenis Kendaraan: %s\n", kendaraan.jk);
  fprintf(f_struktur, "Lama Parkir: %d jam\n", kendaraan.lp);
  fprintf(f_struktur, "\nTotal: Rp%d\n", kendaraan.bayar);
  fprintf(f_struktur, "Dibayarkan: Rp%d\n", kendaraan.kembalian);
  fprintf(f_struktur, "Kembalian: Rp%d\n", kendaraan.kembalian - kendaraan.bayar);
  fprintf(f_struktur, "\n\n\n");
 
  fclose(f_struktur);
}
