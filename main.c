#include <stdio.h>
#include <stdlib.h>

void read() {
	system("cat planner.txt");
	printf("\n");
}

void append(fp) {
	char *input;
	printf("Text to append: ");
	scanf("%s", input);
	fputs(input, fp);
	fclose(fp);
}

int main() {
	malloc(3000);
	FILE *fp;
	int choice;
	fp = fopen("./planner.txt", "w+");
	system("clear");
	printf("anusO1's planner\n");
	printf("1 to read planner. 2 to add to the planner: ");
	scanf("%d", choice);
	switch(choice) {
		case '1':
			read();
		case '2':
			append(fp);
		default:
			printf("what\n");
			break;
		}
	free(3000);
	return 0;
}
