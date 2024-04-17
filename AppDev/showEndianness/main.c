//program to show the endianness of the computer
#include <stdio.h>
union myUnion {
	int x;
	float f;
	char a[4];
};

int main(void) {
	union myUnion m;
	m.x = 0x0A0B0C0D;
	printf("%d\n", 0123);//here 0123 is taken as octal number as it starts with 0. So, the output is 83
	printf("%d\n", 0b1010011);//here  is taken as binary number. So, the output is 83
	printf("%d\n", 0x53);//here 0x53 is hex value of 83.
	printf("%d\n", m.x);// it will give the big number.
	if (m.a[0] == 0x0A) printf("big endian\n");
	if (m.a[0] == 0x0D) printf("little endian\n");
	m.f = 0.15625;
	for (int i = 0; i < 4; i++)printf("%02x", m.a[i]);
	printf("\n");
}

//hamming code
// endianness
//IEEE754
