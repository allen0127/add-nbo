#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]){
	if(argc!=3) {
		printf("Error1");
		return 0;
	}
	FILE* fp1=fopen(argv[1], "rb");
	FILE* fp2=fopen(argv[2], "rb");
	uint32_t num1;
	uint32_t num2;
	size_t count1=fread(&num1, sizeof(uint32_t), 1, fp1);
	size_t count2=fread(&num2, sizeof(uint32_t), 1, fp2);
	fclose(fp1);
	fclose(fp2);
	if(count1<1||count2<1){
		printf("Error2");
	}
	else{
		num1=ntohl(num1);
		num2=ntohl(num2);
		uint32_t result=num1+num2;
		printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",num1,num1,num2,num2,result,result);

	}
	return 0;
}

