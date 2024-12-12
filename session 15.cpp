#include <stdio.h>
#include <string.h>

void xoa_ky_tu(char chuoi[], char kytu) {
    int j = 0;
    int len = strlen(chuoi);
    for (int i = 0; i < len; i++) {
        if (chuoi[i] != kytu) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; 
}

int main() {
    char chuoi[1000] = "hello world"; 
    char ky_tu;

    printf("Chu?i ban d?u: %s\n", chuoi);
    printf("Nh?p k� t? c?n x�a: ");
    scanf("%c", &ky_tu);

    xoa_ky_tu(chuoi, ky_tu); 

    printf("Chu?i sau khi x�a k� t? '%c': %s\n", ky_tu, chuoi);

    return 0;
}

			
