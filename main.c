#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]){
	if(argc!=2) return 0;
	FILE* fp1=fopen(argv[0], "rb");
	FILE* fp2=fopen(argv[1], "rb");
	uint32_t* num[2];
	size_t count=fread(num, sizeof(uint32_t), 1, fp1);
	if(count<1){
		printf("Error");
	}
	else{
	printf("%x",num[1]);
	}
	fclose(fp1), fclose(fp2);
	return 0;
}

