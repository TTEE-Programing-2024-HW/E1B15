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
	printf("½Ð¿é¤J±K½X\n");
	scanf("%d",&password1);
	if(password1==password){
		printf("±K½X¥¿½T");
		break;
	}
	printf("±K½X¿ù»~%d¦¸\n",i);
}
}

