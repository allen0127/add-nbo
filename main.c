#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]){
	if(argc!=3) {
		printf("Error1");
		return 0;
	}
	FILE* fp1=fopen(argv[1], "rb");
	FILE* fp2=fopen(argv[2], "rb");
	uint32_t num1[1];
	uint32_t num2[1];
	size_t count=fread(num1, sizeof(uint32_t), 1, fp1);
	if(count<1){
		printf("Error2");
	}
	else{
	printf("%x",num1[0]);
	}
	fclose(fp1), fclose(fp2);
	return 0;
}

