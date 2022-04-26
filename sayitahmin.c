#include <stdio.h>

int main () {
	
	int arananSayi = 7, tahminSayi = 0, tahminHakki = 3, tahmin, kalanTahmin;
	
	printf("0-10 arasinda bir sayi secildi..\n--------------------------------\n");
	
	while(tahmin != arananSayi) {
		
		if(tahminSayi < tahminHakki) {
			
		printf("Tahmininizi girin:");
		scanf("%d",&tahmin);
		
		tahminSayi++;
		kalanTahmin = tahminHakki - tahminSayi;
		
	
	if(tahmin < arananSayi) {
			
		printf("\n--DAHA BUYUK BIR SAYI--\n\n");
		}
		
    else if(tahmin > arananSayi) {
			
		printf("\n--DAHA KUCUK BIR SAYI--\n\n");
	}
	
	printf("Kalan tahmin hakki = %d\n\n",kalanTahmin);
}

    else {
	    break;
}
}
	
	if(tahmin != arananSayi) {
		
		printf("\nBULAMADINIZ.");
	}
	
	else {
		
		printf("\nDOGRU TAHMIN.");
	}
	
	return 0;
}
