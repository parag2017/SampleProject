#include<stdio.h>

int main(){

	char *filename = "/usr/share/dict/words";
	FILE *fp = fopen(filename, "r");

	if(fp == NULL){
		printf("Error couldn't open file %s", filename);

		return 1;

	}

	// reading line by line

	const unsigned MAX_LENGTH = 256;
	char buffer[MAX_LENGTH];

	while(fgets(buffer, MAX_LENGTH, fp))
		printf("%s", buffer);


	// close the file
	fclose(fp);

	return 0;
}
