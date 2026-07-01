/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define N 1000
#define M 100
#include <stdio.h>
#include <string.h>
void selection_sort(char a[][100], int n, int m);
int find_largest(char a[][100], int n, int m);
int read_input(char a[][M], int n, int m, char* input_filename);
int write_output(char a[][M], int n, int m, const char* output_filename);
int main(int argc, char* argv[]) {
    char* input_filename = argv[1];
    char* output_filename = argv[2];
    int total_strings;
	char a[N][M];
	total_strings = read_input(a, N, M, input_filename);
	selection_sort(a, total_strings, M);
	write_output(a, total_strings, M, output_filename);
    return 0;
}
int read_input(char a[][M], int n, int m, char* input_filename) {
    FILE* input_file = fopen(input_filename, "r");
    if (input_file == NULL){
        printf ("Error opening file\n");
        return 1;
    }
    int i = 0;
    while (i < n && fgets(a[i], m, input_file) != NULL){

        int len = strlen(a[i]);
        if (len > 0 && a[i][len - 1] == '\n')
            a[i][len - 1] = '\0';
        i++;
    }
    fclose(input_file);
    return i; 
}

int write_output(char a[][M], int n, int m, const char* output_filename) {
    FILE* output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf ("Error opening file\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fputs(a[i], output_file);   
        fputc('\n', output_file);  
    }
    
    fclose(output_file);
    return 0;
}
int find_largest(char a[][M], int n, int m) {
	int largest_index = 0;
	for (int i = 1; i < n; i++)
		if (strcmp(a[i], a[largest_index]) > 0)
            largest_index = i;
	return largest_index;
}

void selection_sort(char a[][M], int n, int m) {
	int largest = 0;
	char temp[100];
	if (n == 1)
		return;
	largest = find_largest(a, n, m);
	if (largest < n - 1) {
		strcpy(temp, a[n-1]);
		strcpy(a[n-1], a[largest]);
		strcpy(a[largest], temp);
	}
	selection_sort(a, n - 1, m);
}
