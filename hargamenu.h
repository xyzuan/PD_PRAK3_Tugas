//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Variables
float tunai;

// Harga Makanan
float hrg_rawon = 15.000;
float hrg_pecel = 8.000;
float hrg_teh = 2.500;

float rawon( float qty_rawon ){
	printf("Jumlah total : Rp%.3f", hrg_rawon * qty_rawon), printf("\n");
}

float pecel( float qty_pecel ){
	printf("Jumlah total : Rp%.3f", hrg_pecel * qty_pecel), printf("\n");
}

float teh( float qty_teh ){
	printf("Jumlah total : Rp%.3f", hrg_teh * qty_teh), printf("\n");
}

float grandtotal( float qty_rawon, float qty_pecel, float qty_teh){
    printf("Grand Total				: Rp%.3f", ( hrg_rawon * qty_rawon ) + ( hrg_pecel * qty_pecel ) + ( hrg_teh * qty_teh ));
}

float grandrawon( float qty_rawon ){
	printf("Nasi Rawon				: Rp%.3f\n", hrg_rawon * qty_rawon);
}

float grandpecel( float qty_pecel ){
	printf("Nasi Pecel 				: Rp%.3f\n", hrg_pecel * qty_pecel);
}

float grandteh( float qty_teh ){
	printf("Teh 					: Rp%.3f\n", hrg_teh * qty_teh);
}

float grandtunai(){
	printf("\nTunai					: Rp"), scanf("%f" , &tunai);
}

float konfirmasi( float qty_rawon, float qty_pecel, float qty_teh, float tunai){
    
	float total = ( hrg_rawon * qty_rawon ) + ( hrg_pecel * qty_pecel ) + ( hrg_teh * qty_teh );

	int divider();
	printf("Tekan tombol apapun untuk melanjutkan transaksi ini...");
	getch();

	if( total > tunai ){
		printf("\nMohon maaf, Uang tunai anda tidak cukup untuk melanjutkan transaksi ini...");
	} else {
		printf("\nKembali					: Rp%.3f", tunai - total);
	}
}

