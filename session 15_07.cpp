#include <stdio.h>
#include <string.h>
#include <ctype.h>

void dem_ky_tu(char chuoi[]) {
    int chu_cai = 0;
    int chu_so = 0;
    int ky_tu_dac_biet = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            chu_cai++;
        } else if (isdigit(chuoi[i])) {
            chu_so++;
        } else if (!isspace(chuoi[i])) {
            ky_tu_dac_biet++;
        }
    }

    printf("Chuoi: %s\n", chuoi);
    printf("So ky tu la chu cai: %d\n", chu_cai);
    printf("So ky tu la chu so: %d\n", chu_so);
    printf("So ky tu dac biet: %d\n", ky_tu_dac_biet);
}

int main() {
    char chuoi[1000];
    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    
    

    dem_ky_tu(chuoi);

    return 0;
}

