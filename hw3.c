#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,j,namber,seatcarreat,password=2024,password1,canseat=1,reserv=0;
    char word;
    char seat[9][9];
    srand(time(NULL));
    printf("   /\\_/\\  \n");
    printf("  / o o \\ \n");
    printf(" (   \"   )\n");
    printf("  \\~(*)~/ \n");
    printf("   \\~ ~/  \n");
    printf("    | |   \n");
    printf("   /___\\  \n");
    for( i=1;i<=3;i++){
	printf("請輸入密碼\n");
	scanf("%d",&password1);
	if(password1==password){
		printf("密碼正確");
		break;
	}
	printf("密碼錯誤%d次\n",i);
	if(i==3){
		return 0;
	}
	
}
system("cls");

	for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				seat[i][j]='-';
			}
		}
		while(reserv<10){
		int row=rand()%9;
		int cul=rand()%9;
		if (seat[row][cul] == '-') { 
                seat[row][cul] = '*';
                reserv++;}}
while(1){
printf("--------[BookingSystem]--------\n");
printf("     | a. Available seats    |\n");
printf("     | b. Arrange for you    |\n");
printf("     | c. Choose by yourself |\n");
printf("     | d. Exit               |\n");
printf(" ------------------------------\n");
scanf(" %c",&word);
	
	
	if(word=='a'||word=='A'){
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("%c",seat[i][j]);
	

	}
			printf("\n");
	}

	}
	//b
	if(word=='b'||word=='B'){
	printf("請輸入人數");
	scanf("%d",&namber);
	if (namber < 1 || namber > 4) {
    printf("人數應在 1 到 4 之間。\n");
    continue;
}
	srand(time(NULL));
	while(1){
	int row=rand()%9;
	int cul=rand()%9;
	if (namber == 4) {
            
            if (cul < 7 && seat[row][cul] == '-' && seat[row][cul + 1] == '-' && seat[row + 1][cul] == '-' && seat[row + 1][cul + 1] == '-') {
                seat[row][cul] = '@';
                seat[row][cul + 1] = '@';
                seat[row + 1][cul] = '@';
                seat[row + 1][cul + 1] = '@';
                break;
            }     continue;
        }
	for(j=0;j<namber;j++){
	if(seat[row][cul+j]!='-'){
		canseat=0;
		break;}	}
	if(canseat==1){
			for(j=0;j<namber;j++){
				seat[row][cul+j]='@';
			}
			}break;
			
		
			}
	for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("%c",seat[i][j]);
	}printf("\n");
	}
	while(1){
			
	printf("是否滿意座位(y/n)");
	scanf("%s",&seatcarreat);
	if(seatcarreat=='y'||seatcarreat=='Y'){
	for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				if(seat[i][j]=='@'){
					seat[i][j]='*';
				}
	}
}break;}else if(seatcarreat=='n'||seatcarreat=='N'){for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (seat[i][j] == '@') {
                seat[i][j] = '-';
}}}
break;
	}else{printf("錯誤\n");
}

}}
//c
if(word=='c'||word=='C'){
int chrow,chcul;
char bash;
printf("請輸入幾行幾列?-?\n");
while(1){
	
scanf("%d%c%d",&chrow,&bash,&chcul);
if(chrow<1||chrow>9||chcul<1||chcul>9||bash!='-'){
	printf("\n錯誤格式\n");
	break;
	continue;
}
if (seat[chrow-1][chcul-1] == '@'||seat[chrow-1][chcul-1] =='*') {
            printf("座位 %d-%d 已經被選擇。\n", chrow, chcul);
            continue;
}
 seat[chrow-1][chcul-1] = '@';
 for ( i = 0; i < 9; i++) {
        for ( j = 0; j < 9; j++) {
            printf("%c", seat[i][j]);
        }
        printf("\n");
    }
    while(1){
	printf("是否保存y/n\n");
    scanf(" %c",&seatcarreat);
	if(seatcarreat=='y'||seatcarreat=='Y'){
	for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				if(seat[i][j]=='@'){
					seat[i][j]='*';
				}
	}
}
break;
}else if(seatcarreat=='n'||seatcarreat=='N'){for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (seat[i][j] == '@') {
                seat[i][j] = '-';
}}}
break;
	}else{printf("錯誤\n");
}
  }break;}
    
}
//d
if(word=='d'||word=='D'){
	char yn;
	printf("continue(y/n)\n");
	while(1){
		scanf(" %c",&yn);
	if(yn=='y'||yn=='Y'){
		return 0;
	}else if(yn=='n'||yn=='N'){
		break;
		
	}else{
		printf("錯誤\n");
		continue;
	}
	}
}
}return 0;}
//這次的作業對我來說挑戰非常大，對我來說rand函數不熟悉爾且這次的作業需要的算書更多，對我來說需要想很久，但也使我收益良多。 

