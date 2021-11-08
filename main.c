/*
	Jody Yuantoro ( 2021-147 )
	Informatics Engineering, Faculty of Engineering
	University of Muhammadiyah Malang
*/

// Library
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

// Variables
float tunai;
float qty_rawon = 0;
float qty_pecel = 0;
float qty_teh = 0;
int jmlh_menu, m;
int pil_menu;
int qty_total_rawon = 0;
int qty_total_pecel = 0;
int qty_total_teh = 0;
float hrg_total_rawon = 0;
float hrg_total_pecel = 0;
float hrg_total_teh = 0;
float hrg_rawon = 15.000;
float hrg_pecel = 8.000;
float hrg_teh = 2.500;

// Start of Function Declarations
float rawon( float qty_rawon ){
	printf("QTY Total : %d", qty_total_rawon = qty_total_rawon + qty_rawon), printf("\n");
	printf("Jumlah total : Rp%.3f", hrg_total_rawon = ( hrg_rawon * qty_rawon ) + hrg_total_rawon ), printf("\n");
}

float pecel( float qty_pecel ){
	printf("QTY Total : %d", qty_total_rawon = qty_total_pecel + qty_pecel), printf("\n");
	printf("Jumlah total : Rp%.3f", hrg_total_pecel = ( hrg_pecel * qty_pecel ) + hrg_total_pecel ), printf("\n");
}

float teh( float qty_teh ){
	printf("QTY Total : %d", qty_total_rawon = qty_total_teh + qty_teh), printf("\n");
	printf("Jumlah total : Rp%.3f", hrg_total_teh = ( hrg_teh * qty_teh ) + hrg_total_teh ), printf("\n");
}

float grandtotal(){
	float hrg_total = hrg_total_rawon + hrg_total_pecel + hrg_total_teh;
    printf("Grand Total				: Rp%.3f", hrg_total);
}

float grandrawon( float qty_rawon ){
	printf("Nasi Rawon				: Rp%.3f\n", hrg_total_rawon );
}

float grandpecel( float qty_pecel ){
	printf("Nasi Pecel 				: Rp%.3f\n", hrg_total_pecel );
}

float grandteh( float qty_teh ){
	printf("Teh 					: Rp%.3f\n", hrg_total_teh );
}

float grandtunai(){
	printf("\nTunai					: Rp"), scanf("%f" , &tunai);
}

float konfirmasi( float qty_rawon, float qty_pecel, float qty_teh, float tunai){
	float hrg_total = hrg_total_rawon + hrg_total_pecel + hrg_total_teh;
	int divider();
	printf("Tekan tombol apapun untuk melanjutkan transaksi ini...");
	getch();

	if( hrg_total > tunai ){
		printf("\nMohon maaf, Uang tunai anda tidak cukup untuk melanjutkan transaksi ini...");
	} else {
		printf("\nTerimakasih, selamat menikmati..");
		printf("\nKembali					: Rp%.3f", tunai - hrg_total);
	}
}

int clsbanner(){
	printf("\n");
	printf("==================================================\n");
	printf("												  \n");
	printf(" Developed by:									  \n");
	printf(" Jody Yuantoro ( 2021-147 )						  \n");
	printf(" Informatics Engineering, Faculty of Engineering  \n");
	printf(" University of Muhammadiyah Malang				  \n");
	printf("												  \n");
	printf("==================================================\n");
}

int divider(){
	printf("==================================================\n");
}

// End of Function Declarations

// Main Program
divider();
printf("===           Waroeng Wuenaks Cuakss           ===\n");
divider();
printf(" No.    Nama Menu           Harga\n");
printf(" 1.     Rawon               Rp 15.000,00\n");
printf(" 2.     Nasi Pecel          Rp  8.000,00\n");
printf(" 3.     Es Teh              Rp  2.500,00\n");
divider();

    printf("Masukkan jumlah menu yang ingin dipesan: ");
    scanf("%i" , &jmlh_menu);
    switch (jmlh_menu){
        case 1:
            for(m = 1; m <= jmlh_menu; m++){
                printf("\nPilih menu : ");
                scanf("%i" , &pil_menu);
                if(pil_menu == 1){
                    divider();
                    printf("Rawon\nQTY : ");
                    scanf("%f", &qty_rawon);
                    rawon(qty_rawon);
                    divider();
                } else if (pil_menu == 2){
                    divider();
                    printf("Nasi Pecel\nQTY : ");
                    scanf("%f", &qty_pecel);
                    pecel(qty_pecel);
                    divider();
                } else if (pil_menu == 3){
                    divider();
                    printf("Es Teh\nQTY : ");
                    scanf("%f", &qty_teh);
                    teh(qty_teh);
                    divider();    
                }
            } break;
        case 2:
            for(m = 1; m <= jmlh_menu; m++){
                printf("\nPilih menu : ");
                scanf("%i" , &pil_menu);
                if(pil_menu == 1){
                    divider();
                    printf("Rawon\nQTY : ");
                    scanf("%f", &qty_rawon);
                    rawon(qty_rawon);
                    divider();
                } else if (pil_menu == 2){
                    divider();
                    printf("Nasi Pecel\nQTY : ");
                    scanf("%f", &qty_pecel);
                    pecel(qty_pecel);
                    divider();
                } else if (pil_menu == 3){
                    divider();
                    printf("Es Teh\nQTY : ");
                    scanf("%f", &qty_teh);
                    teh(qty_teh);
                    divider();    
                }
            } break;
    
        case 3:
            for(m = 1; m <= jmlh_menu; m++){
                printf("\nPilih menu : ");
                scanf("%i" , &pil_menu);
                if(pil_menu == 1){
                    divider();
                    printf("Rawon\nQTY : ");
                    scanf("%f", &qty_rawon);
                    rawon(qty_rawon);
                    divider();
                } else if (pil_menu == 2){
                    divider();
                    printf("Nasi Pecel\nQTY : ");
                    scanf("%f", &qty_pecel);
                    pecel(qty_pecel);
                    divider();
                } else if (pil_menu == 3){
                    divider();
                    printf("Es Teh\nQTY : ");
                    scanf("%f", &qty_teh);
                    teh(qty_teh);
                    divider();    
                }
            } break;
        default :
            printf("Inputan anda salah");
            break;
    }

    divider();
    printf("Total Pembayaran\n");
    if ( qty_rawon > 0 ){
        grandrawon(qty_rawon);
    }
    
    if ( qty_pecel > 0 ){
        grandpecel(qty_pecel);
    }
    
    if ( qty_teh > 0 ){
        grandteh(qty_teh);
    }

    divider();
    grandtotal(qty_rawon,qty_pecel,qty_teh);
    grandtunai();
    konfirmasi(qty_rawon,qty_pecel,qty_teh,tunai);

    clsbanner();

}