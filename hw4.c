#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
    int i,j,password,chs,n;
    char searchname[10];
    struct student{
    	char name[10];
		int id;
    	int math;
    	int ph;
    	int en;
    	float sum;
	};
	struct student students[10];
    /*printf("   /\\_/\\  \n");
    printf("  / o o \\ \n");
    printf(" (   \"   )\n");
    printf("  \\~(*)~/ \n");
    printf("   \\~ ~/  \n");
    printf("    | |   \n");
    printf("   /___\\  \n");
    for( i=1;i<=3;i++){
	printf("�п�J�K�X\n");
	scanf("%d",&password);
	if(password==2024){
		printf("�K�X���T");
		break;
	}
	printf("�K�X���~%d��\n",i);
	if(i==3){
		return 0;
	}
	
}
system("cls");*/
 while(1){
	printf("--------[grade System]--------------\n");
	printf("| a. Enter student grades       |\n");
	printf("| b. Display student grades     |\n");
	printf("| c. Search for student grades  |\n");
	printf("| d. Grade ranking              |\n");
	printf("| e. Exit system                |\n");
	printf("------------------------------------\n");
	scanf(" %c",&chs);
	//a
	if(chs=='a'||chs=='A'){
	while(1){
	printf("�п�J���5~10\n");
	scanf("%d",&n);
	if(n>=5&&n<=10){
		break;
	}
	} 
	for(i=0;i<n;i++){
	printf("��%d�W\n",i+1);
	scanf("%s %d %d %d %d",students[i].name,&students[i].id,&students[i].math,&students[i].ph,&students[i].en);	
	students[i].sum=students[i].math+students[i].ph+students[i].en;
	if(students[i].id>999999||students[i].math<0||students[i].math>100||students[i].ph<0||students[i].ph>100||students[i].en<0||students[i].en>100){
	system("cls");
	printf("��J���~\n");
	i--;
	continue;
	}
	}
}
//b
if(chs=='b'||chs=='B'){
	printf("�m�W id �ƾ� ���z �^�� ����\n");
	for(i=0;i<n;i++){
		printf("%s    %d  %d    %d    %d    %.1f\n", students[i].name, students[i].id, students[i].math, students[i].ph, students[i].en,students[i].sum/3);
	}
	getchar();
	getchar();
	system("cls");
}
//c
if(chs=='c'||chs=='C'){
	system("cls");
	int found=0;
	printf("�п�J�n�d�ߪ��ǥͩm�W");
	scanf("%s",searchname);
	getchar();
	for(i=0;i<n;i++){
	if (strcmp(students[i].name, searchname) == 0){
	printf("%s %d %d %d %d %.1f\n", students[i].name, students[i].id, students[i].math, students[i].ph, students[i].en,students[i].sum/3);
	found++;
	break;
	}
	
	}
	if(found==0){
		printf("�����\n");
	}
		getchar();
	system("cls");
}
//d
if(chs=='d'||chs=='D'){
system("cls");
struct student temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(students[j].sum<students[j+1].sum){
				temp= students[j];
				students[j]=students[j+1];
				students[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %d %d %d %d %.1f\n", students[i].name, students[i].id, students[i].math, students[i].ph, students[i].en,students[i].sum/3);
	}
	getchar();
	getchar();
	system("cls");
}
if(chs=='e'||chs=='E'){
	char yn;
	printf("continue(y/n)\n");
	while(1){
		scanf(" %c",&yn);
	if(yn=='y'||yn=='Y'){
		return 0;
	}else if(yn=='n'||yn=='N'){
		break;
		
	}else{
		printf("���~\n");
		continue;
	}
	}
}
}return 0;
}
