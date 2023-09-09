// Write a C program to write all the members of an array of strcures to a file using fwrite(). Read the array from the file and display on the screen.
#include <stdio.h>
struct s {
	char name[50];
	int height;
};
int main() {
	struct s a[5],b[5];
	FILE *fptr;
	int i;
	fptr=fopen("arrayOfStructure.txt","wb");
	for (i=0;i<5;++i) {
		fflush(stdin);
		printf("Enter name: ");
		gets(a[i].name);
		printf("Enter height: ");
		scanf("%d",&a[i].height);
	}
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("arrayOfStructure.txt","rb");
	fread(b,sizeof(b),1,fptr);
	for (i=0;i<5;++i) {
		printf("Name: %s\nHeight: %d",b[i].name,b[i].height);
	}
	fclose(fptr);
}