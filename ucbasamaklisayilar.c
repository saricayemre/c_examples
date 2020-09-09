#include <iostream>
int main(int argc, char** argv) {
	int rakam_karesi =0,i;
	for(i=100;i<=999;i++){
		int birler = i%10;
		int onlar = (i-birler)/10;
		int yuzler = i/100;
		rakam_karesi += (birler*birler)+(onlar*onlar)+(yuzler*yuzler);
		if(rakam_karesi>=100&&rakam_karesi<=999){
			printf("%d\n",i);
		}
	}	
	return 0;