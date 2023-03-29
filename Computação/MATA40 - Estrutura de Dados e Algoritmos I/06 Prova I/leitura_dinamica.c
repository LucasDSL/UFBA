#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
getElements(char *line, float *elementos, int *tamanho){
	int i = 0;
	
	char* token = strtok(line, " ");
	while (token) {
		i += 1;
		elementos = (float *) realloc (elementos, sizeof(int)*i);
		elementos[i-1] = atof(token);
		token = strtok(NULL, " ");
        }

	*tamanho = i;
	free(token);

}

int main(void)
{
	printf("Please enter quantity of lines:\n");
	char *line = NULL;
	size_t len = 0;
	getline(&line, &len, stdin);

	int total_linhas = atoi(line);
	printf("Recuperando %d linhas...\n", total_linhas);
	for(int j = 0; j < total_linhas; j++){
	

		getline(&line, &len, stdin);
		float *elementos = (float *) malloc (0*sizeof(float));
		int *tamanho = (int *) malloc (1*sizeof(int));
		getElements(line, elementos, tamanho);

		printf("Recuperando elementos: ");
		for(int i = 0; i < *tamanho; i++){
			printf("%f ", elementos[i]);
		}
		printf("\n");

		free(elementos);
		free(tamanho);
	}

	free(line);

	return 0;
}