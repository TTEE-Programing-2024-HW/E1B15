#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i,password,chs,n;
    struct student{
    	char name[10];
		int id;
    	int math;
    	int ph;
    	int en;
    	
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
	if(chs=='a'||chs=='A'){
	while(1){
	printf("�п�J���5~10\n");
	scanf("%d",&n);
	if(n>=5&&n<=10){
		break;
	}
	} 
	for(i=0;i<n;i++){
	printf("��%d�W",i+1);
	scanf("%s %d %d %d %d",students[i].name,&students[i].id,&students[i].math,&students[i].ph,&students[i].en);	
	if(students[i].id>999999||students[i].math<0||students[i].math>100||students[i].ph<0||students[i].ph>100||students[i].en<0||students[i].en>100){
	system("cls");
	printf("��J���~");
	i--;
	continue;
	}
	printf("%s %d %d %d %d\n",students[i].name,students[i].id,students[i].math,students[i].ph,students[i].en);
	}
	}
}
}
