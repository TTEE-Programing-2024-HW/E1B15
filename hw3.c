#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,j,namber,seatcarreat,password=2024,password1,canseat=1,reserv=0;
    char word;
    char seat[9][9];
    srand(time(NULL));
    /*printf("   /\\_/\\  \n");
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
	if(i==3){
		return 0;
	}
	
}
system("cls");*/
printf("--------[BookingSystem]--------\n");
printf("     | a. Available seats    |\n");
printf("     | b. Arrange for you    |\n");
printf("     | c. Choose by yourself |\n");
printf("     | d. Exit               |\n");
printf(" ------------------------------\n");
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
	scanf("%c",&word);
	
	
	if(word=='a'||word=='A'){
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("%c",seat[i][j]);
	

	}
			printf("\n");
	}

	}
	if(word=='b'||word=='B'){
	printf("�п�J�H��");
	scanf("%d",&namber);
	if (namber < 1 || namber > 4) {
    printf("�H�����b 1 �� 4 �����C\n");
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
			
	printf("�O�_���N�y��(y/n)");
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
	}else{printf("���~\n");
}

}}}return 0;
}


