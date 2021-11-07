/*
	Jody Yuantoro ( 2021-147 )
	Informatics Engineering, Faculty of Engineering
	University of Muhammadiyah Malang
*/

// Library
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "hargamenu.h"
#include "common.h"

int main(){

    float qty_rawon = 0;
    float qty_pecel = 0;
    float qty_teh = 0;
    int pil_menu;

    divider();
    printf("===           Waroeng Wuenaks Cuakss           ===\n");
    divider();
    printf(" No.    Nama Menu           Harga\n");
    printf(" 1.     Rawon               Rp 15.000,00\n");
    printf(" 2.     Nasi Pecel          Rp  8.000,00\n");
    printf(" 3.     Es Teh              Rp  2.500,00\n");
    divider();
    printf(" 0.     Selesai dan bayar             \n");
    divider();

    do {
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
        } else if (pil_menu == 0){
            continue;
        }
    }
    while(pil_menu != 0);
    
    system("cls");

    divider();
    printf("Total Pembayaran\n");
    if ( qty_rawon > 0 ){
        grandrawon(qty_rawon);
    }
    
    if ( qty_teh > 0 ){
        grandteh(qty_teh);
    
    }

    if ( qty_pecel > 0 ){
        grandpecel(qty_pecel);
    }
    divider();
    grandtotal(qty_rawon,qty_pecel,qty_teh);
    grandtunai();
    konfirmasi(qty_rawon,qty_pecel,qty_teh,tunai);

    clsbanner();

}