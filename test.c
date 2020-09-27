#include <stdio.h>
#include <string.h>

struct mahasiswa{
	char nama[100];
	char npm[11];
	char jurusan[50];
	char fakultas[50];
};
void input(){
	struct mahasiswa A;
	printf("Data Mahasiswa\n");
	printf("--------------\n");
	printf("Nama    : ");gets(A.nama);
	fflush(stdin);
	printf("NPM     : ");scanf("%s",&A.npm);
	printf("Jurusan : ");scanf("%s",&A.jurusan);
	fflush(stdin);
	printf("Fakultas: ");scanf("%[^\n]s",&A.fakultas);
	printf("\n\n\n");
}
void output(){
	struct mahasiswa A;
	printf("Data Mahasiswa\n");
	printf("--------------\n");
	printf("Nama    : %s\n",A.nama);
	printf("NPM     : %s\n",&A.npm);
	printf("Jurusan : %s\n",&A.jurusan);
	printf("Fakultas: %s\n",&A.fakultas);
}
int main(){
	input();
	output();
}
