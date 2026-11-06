#include<stdio.h>
#include<stdlib.h>
	struct student {
	int roll;
	char name[30];
	float marks;
	};
void displayAll(struct student * ptr,int n)
{
	int i;
	printf("\nRoll\tName\t\tMarks\n");
	printf("-----------------------------------------\n");
	for(i = 0;i<n;i++)
	printf("%d\t%-15s\t%.2f\n",
	(ptr+i)->roll,
	(ptr+i)->name,
	(ptr+i)->marks);
}
int main(){
int n,i;
	printf("\nEnter number of students: ");
	struct student *students;
	if(scanf("%d",&n)!=1 || n<=0){
	printf("\nInvalid number of students\n");
	return 1;
}

students = malloc(n*sizeof(struct student));
	if(students == NULL){
	printf("\nMemory allocation failed\n");
return 1;
}
for(i=0;i<n;i++){
	printf("\nEnter roll number : ");
	if(scanf("%d",&(students+i)->roll)!=1)
	goto input_error;
	printf("\nEnter name: ");
	if(scanf("%29s",(students+i)->name)!=1)
	goto input_error;
	printf("\nEnter marks: ");
	if(scanf("%f",&(students+i)->marks)!=1)
	goto input_error;
}
displayAll(students,n);
	free(students);
return 0;

input_error:
	printf("\nInvalid input\n");
	free(students);
return 1;
}
