#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,j,password=2024,password1;
    char word;
    char seat[9][9];
    printf("   /\\_/\\  \n");
    printf("  / o o \\ \n");
    printf(" (   \"   )\n");
    printf("  \\~(*)~/ \n");
    printf("   \\~ ~/  \n");
    printf("    | |   \n");
    printf("   /___\\  \n");
    for( i=1;i<=3;i++){
	printf("�п�J�K�X\n");
	scanf("%d",&password1);
	if(password1==password){
		printf("�K�X���T");
		break;
	}
	printf("�K�X���~%d��\n",i);
	
	
}
system("cls");
printf("--------[BookingSystem]--------\n");
printf("     | a. Available seats    |\n");
printf("     | b. Arrange for you    |\n");
printf("     | c. Choose by yourself |\n");
printf("     | d. Exit               |\n");
while(1){
	scanf("%s",&word);
	if(word=='a'){
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				seat[i][j]='-';
			}
		}
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("%c",seat[i][j]);
	}printf("\n");
	}
	}
}
}

