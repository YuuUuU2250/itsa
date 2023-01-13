#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int days, hours, mins, secs;
    days = n / 86400;
    n -= days * 86400;
    hours = n / 3600;
    n -= hours * 3600;
    mins = n / 60;
    n -= mins * 60;
    secs = n;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", days, hours, mins, secs);
}