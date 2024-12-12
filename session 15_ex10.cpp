#include <stdio.h>
#include <string.h>
void dem_ky_tu(char chuoi[]){
	int ky_tu_dem[256]={0};
	for (int i=0; i < strlen(chuoi); i++){
		ky_tu_dem[(int)chuoi[i]]++;
		}
	for(int i=0;i<256;i++){
	if(ky_tu_dem[i]>0){
	printf("%c: %d\n", (char)i, ky_tu_dem[i]);
        }
    }
}
int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);

    
    chuoi[strlen(chuoi) - 1] = '\0';

    
    dem_ky_tu(chuoi);

    return 0;
}	
