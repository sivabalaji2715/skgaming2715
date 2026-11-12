#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct Time t;
    int total;

    printf("Enter Hours: ");
    scanf("%d", &t.hours);

    printf("Enter Minutes: ");
    scanf("%d", &t.minutes);

    printf("Enter Seconds: ");
    scanf("%d", &t.seconds);

    total = (t.hours * 3600) + (t.minutes * 60) +t.seconds;

    printf("Total Seconds = %d\n", total);

    return 0;
}
