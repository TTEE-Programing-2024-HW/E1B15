#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,password=2024,password1;
    
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
}

