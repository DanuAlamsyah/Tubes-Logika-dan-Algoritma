// Danu Alamsyah Putra 
// Teknologi Rekayasa Komputer
// Politenik Negeri Semarang

#include <stdio.h>

int main()
{
    int MENU;
    char ulangi;
    //struktur untuk hasil nilai
    struct{
    float a;
    float b;
    float hasil;
    float keliling;
    float luas;
    }dasar;


    //struktur bangun ruang
    struct{
    float alas;
    float tinggi;
    float sisi1;
    float sisi2;
    float sisi3;
    }segitiga;

    struct{
    float tinggi;
    float sisi_sejajar1;
    float sisi_sejajar2;
    float sisi_samping1;
    float sisi_samping2;
    }trapesium;

    struct{
    float sisi1;
    float sisi2;
    float tinggi;
    }jajargenjang;


    //void
    struct belahketupat {
    float diagonal1;
    float diagonal2;
    float sisi;
    };
    //void
    struct layang {
    float diagonal1;
    float diagonal2;
    float sisi1;
    float sisi2;
    };


    void hitungBelahKetupat(struct belahketupat bk) {
    float luas;
    float keliling;
    printf("\n7. Menghitung Belah Ketupat :\n");
    printf("Masukkan panjang diagonal 1 belah ketupat: ");
    scanf("%f", &bk.diagonal1);
    printf("Masukkan panjang diagonal 2 belah ketupat: ");
    scanf("%f", &bk.diagonal2);
    printf("Masukkan panjang sisi belah ketupat: ");
    scanf("%f", &bk.sisi);
    luas  = bk.diagonal1 * bk.diagonal2 / 2;
    keliling = bk.sisi * 4;
    printf("Data Persegi Panjang =\n");
    printf("D1 = %.2f\n", bk.diagonal1);
    printf("D2 = %.2f\n", bk.diagonal2);
    printf("Sisi = %.2f\n", bk.sisi);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    }

    void hitungLayang(struct layang ly) {
    float luas;
    float keliling;
    printf("\n8. Menghitung Layang-layang :\n");
    printf("Masukkan panjang diagonal 1 Layang-layang: ");
    scanf("%f", &ly.diagonal1);
    printf("Masukkan panjang diagonal 2 Layang-layang: ");
    scanf("%f", &ly.diagonal2);
    printf("Masukkan sisi panjang Layang-layang: ");
    scanf("%f", &ly.sisi1);
    printf("Masukkan sisi pendek Layang-layang: ");
    scanf("%f", &ly.sisi2);
    luas  = ly.diagonal1 * ly.diagonal2 / 2;
    keliling = (ly.sisi1 + ly.sisi2) * 2;
    printf("Data Layang-layang =\n");
    printf("D1 = %.2f\n", ly.diagonal1);
    printf("D2 = %.2f\n", ly.diagonal2);
    printf("Sisi (a) = %.2f\n", ly.sisi1);
    printf("Sisi (b) = %.2f\n", ly.sisi2);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    }


    //string
    char nama_lengkap [40];
    printf("Masukkan Nama Anda: ");
    gets(nama_lengkap);
    printf("\nKalkulator Rumus Milik: %s\n", nama_lengkap);

    //looping
    do{
    //menu
    printf("Menghitung Nilai Bangun Datar\n");
    printf("==================================\n");
    printf("Menu :\n");
    printf("\t1. Persegi\n");
    printf("\t2. Persegi Panjang\n");
    printf("\t3. Lingkaran\n");
    printf("\t4. Segitiga\n");
    printf("\t5. Trapesium\n");
    printf("\t6. Jajar Genjang\n");
    printf("\t7. Belah Ketupat\n");
    printf("\t8. Layang-layang\n");
    printf("Pilih Menu : ");
    scanf("%d", &MENU);
    printf("----------------------------------\n");

    switch (MENU) {
    case 1:
        printf("\n1. Menghitung Persegi :\n");
        printf("Masukkan panjang sisi : ");
        scanf("%f", &dasar.a);
        dasar.hasil = dasar.a * dasar.a;
        printf("Data Persegi =\n");
        printf("Sisi = %.2f \n", dasar.a);
        printf("Luas= %.2f \n", dasar.hasil);
        break;

    case 2:
        printf("\n2. Menghitung Persegi Panjang :\n");
        printf("Masukkan Lebar : ");
        scanf("%f", &dasar.a);
        printf("Masukkan Panjang : ");
        scanf("%f", &dasar.b);
        dasar.keliling = (dasar.a + dasar.b) * 2;
        dasar.luas = dasar.a * dasar.b;
        printf("Data Persegi Panjang =\n");
        printf("Lebar = %.2f\n", dasar.a);
        printf("Panjang = %.2f\n", dasar.b);
        printf("Keliling = %.2f\n",dasar.keliling);
        printf("Luas = %.2f\n", dasar.luas);
        break;

    case 3:
        printf("\n3. Menghitung Lingkaran :\n");
        printf("Masukkan Jari-jari : ");
        scanf("%f", &dasar.a);
        dasar.keliling = dasar.a * 3.14 * 2;
        dasar.luas = dasar.a * dasar.a * 3.14;
        printf("Data Lingkaran =\n");
        printf("Keliling = %.2f\n", dasar.keliling);
        printf("Luas = %.2f\n", dasar.luas);
        break;

    case 4:
        printf("\n4. Menghitung Segitiga :\n");
        printf("Masukkan Alas : ");
        scanf("%f", &segitiga.alas);
        printf("Masukkan Tinggi : ");
        scanf("%f", &segitiga.tinggi);
        printf("Masukkan Sisi Pertama : ");
        scanf("%f", &segitiga.sisi1);
        printf("Masukkan Sisi Kedua : ");
        scanf("%f", &segitiga.sisi2);
        printf("Masukkan Sisi ketiga : ");
        scanf("%f", &segitiga.sisi3);
        dasar.keliling = segitiga.sisi1 + segitiga.sisi2 + segitiga.sisi3;
        dasar.luas = segitiga.alas * segitiga.tinggi / 2;
        printf("Data Segitiga =\n");
        printf("Tinggi = %.2f\n", segitiga.tinggi);
        printf("Alas = %.2f\n", segitiga.alas);
        printf("Sisi Pertama = %.2f\n", segitiga.sisi1);
        printf("Sisi kedua = %.2f\n", segitiga.sisi2);
        printf("Sisi ketiga = %.2f\n", segitiga.sisi3);
        printf("Keliling = %.2f\n",dasar.keliling);
        printf("Luas = %.2f\n",dasar.luas);
        break;

    case 5:
        printf("\n5. Menghitung Trapesium :\n");
        printf("Masukkan Tinggi : ");
        scanf("%f", &trapesium.tinggi);
        printf("Masukkan Panjang Sisi Sejajar (a) : ");
        scanf("%f", &trapesium.sisi_sejajar1);
        printf("Masukkan Panjang Sisi Sejajar (b) : ");
        scanf("%f", &trapesium.sisi_sejajar2);
        printf("Masukkan Panjang Sisi Samping (c) : ");
        scanf("%f", &trapesium.sisi_samping1);
        printf("Masukkan Panjang Sisi Samping (d) : ");
        scanf("%f", &trapesium.sisi_samping2);
        dasar.keliling = trapesium.sisi_sejajar1 + trapesium.sisi_sejajar2 + trapesium.sisi_samping1 + trapesium.sisi_samping2 ;
        dasar.luas = (trapesium.sisi_sejajar1 + trapesium.sisi_sejajar2) * trapesium.tinggi /2 ;
        printf("Data Trapesium =\n");
        printf("Tinggi = %.2f\n", trapesium.tinggi);
        printf("Sisi Sejajar (a) = %.2f\n", trapesium.sisi_sejajar1);
        printf("Sisi Sejajar (b) = %.2f\n",trapesium.sisi_sejajar2);
        printf("Sisi Samping (c) = %.2f\n",trapesium.sisi_samping1);
        printf("Sisi Samping (d) = %.2f\n",trapesium.sisi_samping2);
        printf("Keliling = %.2f\n", dasar.keliling);
        printf("Luas = %.2f\n", dasar.luas);
        break;

    case 6:
        printf("\n6. Menghitung Jajar Genjang :\n");
        printf("Masukkan Tinggi : ");
        scanf("%f", &jajargenjang.tinggi);
        printf("Masukkan Sisi Alas (a)  : ");
        scanf("%f", &jajargenjang.sisi1);
        printf("Masukkan Sisi Miring (b)  : ");
        scanf("%f", &jajargenjang.sisi2);
        dasar.keliling = (jajargenjang.sisi1 + jajargenjang.sisi2) * 2;
        dasar.luas = jajargenjang.tinggi * jajargenjang.sisi1;
        printf("Data Jajar Genjang =\n");
        printf("Tinggi = %.2f\n", jajargenjang.tinggi);
        printf("Sisi Alas (a)   = %.2f\n", jajargenjang.sisi1);
        printf("Sisi Miring (b) = %.2f\n", jajargenjang.sisi2);
        printf("Keliling = %.2f\n",dasar.keliling);
        printf("Luas = %.2f\n", dasar.luas);
        break;

    case 7: {
        struct belahketupat bk;
        hitungBelahKetupat(bk);
        break;
}

    case 8: {
        struct layang layang;
        hitungLayang(layang);
        break;
}

    }
    // Meminta pengguna apakah ingin menghitung lagi
        printf("\nApakah Anda ingin menghitung lagi? (y/n): ");
        scanf(" %c", &ulangi);

    }while (ulangi == 'y' || ulangi == 'Y');
    printf("----------------------------------\n");
    printf("Program Kalkulator Selesai, Terimakasih!!.\n");
}
