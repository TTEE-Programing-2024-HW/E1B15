#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int password,i,j,row,num;
	char input,ch,ch2;
	printf("   /\\_/\\\n  ");
	printf("/ o o \\ \n");
	printf(" (   \"   )\n");
	printf("  \\~(*)~/ \n");
	printf("   \\~ ~/  \n");
	printf("    | |   \n");
	printf("   /___\\  \n" );
	
	
	for( i=0;i<3;i++){
	printf("�п�J�K�X");
	scanf("%d",&password);
	if(password==2024){
		printf("�K�X���T\n");
		break;
	}else{
		printf("�K�X���~\n");	
	}
	}
	system("cls");
	while(1){ 
	
	printf("________________________\n");
	printf("| a.�e�X�����T����     |\n");
	printf("| b.��ܭ��k��         |\n");	
	printf("| c.����               |\n");
	printf("________________________\n");
	input=getch();
	
	if(input=='a'||input=='A'){
		printf("�п�J�r��\n");
		ch=getch();
		
		if(ch>='a'&&ch<='n'){
			row=ch-'a'+1;
			for(i=0;i<row;i++){
				for(j=0;j<=i;j++){
					printf("%c",ch-j);
					}
				printf("\n");
			}
			getch();
			system("cls");
		}
		if('A'&&ch<='N'){
			row=ch-'A'+1;
			for(i=0;i<row;i++){
				for(j=0;j<=i;j++){
					printf("%c",ch-j);
					
				}
				printf("\n");
	}
	getch();
			system("cls");
} 
}
	if(input=='b'||input=='B'){
		while(1){
		printf("�п�J1��9�����\n");
		scanf("%d",&num);
		if(num<=9&&num>=1){
		for(i=1;i<=num;i++){
			for(j=1;j<=num;j++){
				printf("%d*%d =%d  ",i,j,i*j);
			}
			printf("\n"); 
		}
		getch();
			system("cls");
			break;
	}else{
	printf("�п�J���T�Ʀr\n");	
	}
}
}
	if(input=='c'||input=='C'){
		while(1)
		{
			printf("continue(y/n)\n");
		ch2=getch();
		if(ch2=='y'||ch2=='Y'){
			getch();
			system("cls");
			break;
		}
		else if(ch2=='n'||ch2=='N'){
			return 0;
		}else{
			printf("�X�{���~�Э��s��J\n");
		}
		}
	}
}
}
//�o���@�~���ڹ�j��o���Χ�[���m�A�P�ɹ��getch���ϥΤ]����`�J���F��
//��󤧫ᥴ��L���{���]�|���ܤj�����U 
