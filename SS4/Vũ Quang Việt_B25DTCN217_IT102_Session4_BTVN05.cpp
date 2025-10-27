#include <stdio.h>
#include <math.h>
int main() {
    int chiSoCu, chiSoMoi;
    int soDien;
    printf("Nhap chi so cu (kWh): ");
    scanf("%d", &chiSoCu);
	printf("Nhap chi so moi (kWh): ");
    scanf("%d", &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 1;
    }

    if (soDien < 50)
        printf("0<= So dien <50");
    else if (soDien < 100)
        printf("50<= So dien <100");
    else if (soDien < 150)
        printf("100<= So dien <150");
    else if (soDien < 200)
        printf("150<= So dien <200");
    else
        printf("200<= So dien");
    return 0;
}

