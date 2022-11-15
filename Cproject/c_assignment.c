#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(){
	int num;
	FILE *file;

	file = fopen("testing.txt", "r");	
	if (file  == NULL){
		printf("Error, File is  read as null");
		exit(1);
	}

	fscanf(file, "%d", &num);
	printf("Value of TestCases = %d  ", num);

	char test[2000];
	for (int i = 0; i< num; i++){
		int count = 0;		
		fscanf(file, "%s", &test);
		for (int j = 0; j < strlen(test); j++){
				if(test[j] == 'U'){
					count++;
				}
				else{break;}
		}
	printf("\nThe total count on a line =  %d ", count);
	} 
	fclose(file);

	return 0;

}
