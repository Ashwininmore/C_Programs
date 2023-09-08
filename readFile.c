// Write a program to read name and marks of n number of students from user and store them in a file.
#include <stdio.h>
void main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("student.txt","w");
	for(i=0;i<n;i++) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
	    scanf("%d",&marks);
		fprintf(fp,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fp);
}