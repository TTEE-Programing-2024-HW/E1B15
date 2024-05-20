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
	printf("請輸入密碼");
	scanf("%d",&password);
	if(password==2024){
		printf("密碼正確\n");
		break;
	}else{
		printf("密碼錯誤\n");	
	}
	}
	system("cls");
	while(1){ 
	
	printf("________________________\n");
	printf("| a.畫出直角三角形     |\n");
	printf("| b.顯示乘法表         |\n");	
	printf("| c.結束               |\n");
	printf("________________________\n");
	input=getch();
	
	if(input=='a'||input=='A'){
		printf("請輸入字母\n");
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
		printf("請輸入1到9的整數\n");
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
	printf("請輸入正確數字\n");	
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
			printf("出現錯誤請重新輸入\n");
		}
		}
	}
}
}
//這次作業讓我對迴圈得應用更加熟練，同時對於getch的使用也有更深入的了解
//對於之後打其他的程式也會有很大的幫助  
