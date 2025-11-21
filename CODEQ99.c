//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    int day, year;
    char slash;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d%c%d%c%d", &day, &slash, &year, &slash, &year);

    printf("%02d-Apr-%d\n", day, year);

    return 0;
}
