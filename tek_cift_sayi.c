int main() {
	int i,enb=0, enk=999;
	int sayi[50]={50 tane sayı tanımladım};
	for(i=0;i<50;i++){
		if(sayi[i]%2==0){//sayi çifttir
			if(sayi[i]>enb){
				enb=sayi[i];
			}
		}
		else {//sayi tektir
			if(sayi[i]<enk){
				enk=sayi[i];
			}
		}
	}
	printf("\nEn buyuk sayi = %d\n",enb);
	printf("\nEn buyuk sayi = %d\n",enk);	
}