#include <16f887.h> 
#device *=16 ADC=8 // Khai bao during con tro 16-bt 
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock=8000000) // Khai bao su ðung Thach Anh 8 - Mhz
const char led7[] = {0x3f,0x86, 0x5b, 0x4f,0x66,0x6d, 0x7d, 0x07,0x7f,0x6f};
int i;
int k;
int j;
void main()
{
set_tris_a(0x00); 
set_tris_b(0x00); 
set_tris_c(0x00);
set_tris_d(0x00);
output_a(0x07);
while(true)
{
	output_a(0x08);

for(j=0;j<10;j++){
	output_b(~led7[j]);
	
for(i=0;i<10;i++){

	output_d(~led7[i]);
	
for(k=0;k<10;k++){

	output_c(~led7[k]);

	delay_ms(500);
}
}
}


}
}
