#include <stdio.h>
#include <string.h>
#include <ctype.h>

void viet_hoa_chu_cai_dau(char chuoi[]) {
    
    for (int i = 0; i < strlen(chuoi); i++) {
        
        if (i == 0 || chuoi[i - 1] == ' ') {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
}

int main() {
    char chuoi[1000] = "hello world"; 
    viet_hoa_chu_cai_dau(chuoi);
    printf("%s\n", chuoi); 
    return 0;
}

