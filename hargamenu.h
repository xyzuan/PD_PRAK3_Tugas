//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Variables
float tunai;

float rawon( float qty_rawon ){
	printf("Jumlah total : Rp%.3f", 15.000 * qty_rawon), printf("\n");
}

float pecel( float qty_pecel ){
	printf("Jumlah total : Rp%.3f", 8.000 * qty_pecel), printf("\n");
}

float teh( float qty_teh ){
	printf("Jumlah total : Rp%.3f", 2.500 * qty_teh), printf("\n");
}

float grandtotal( float qty_rawon, float qty_pecel, float qty_teh){
    printf("Grand Total				: Rp%.3f", ( 15.000 * qty_rawon ) + ( 8.000 * qty_pecel ) + ( 2.500 * qty_teh ));
}

float grandrawon( float qty_rawon ){
	printf("Nasi Rawon				: Rp%.3f\n", 15.000 * qty_rawon);
}

float grandpecel( float qty_pecel ){
	printf("Nasi Pecel 				: Rp%.3f\n", 8.000 * qty_pecel);
}

float grandteh( float qty_teh ){
	printf("Teh 					: Rp%.3f\n", 2.500 * qty_teh);
}

float grandtunai(){
	printf("\nTunai					: Rp"), scanf("%f" , &tunai);
}

float konfirmasi( float qty_rawon, float qty_pecel, float qty_teh, float tunai){
    
	float total = ( 15.000 * qty_rawon ) + ( 8.000 * qty_pecel ) + ( 2.500 * qty_teh );

	divider();
	printf("Tekan tombol apapun untuk melanjutkan transaksi ini...");
	getch();

	if( total > tunai ){
		printf("\nMohon maaf, Uang tunai anda tidak cukup untuk melanjutkan transaksi ini...");
	} else {
		printf("\nKembali					: Rp%.3f", ( 15.000 * qty_rawon ) + ( 8.000 * qty_pecel ) + ( 2.500 * qty_teh ) - ( tunai ));
	}
}

