#include<stdio.h>

int main(){
    int sec = 0;
    int min = 0;
    int m_rem = 0;
    int hour = 0;
    int h_rem = 0;

    printf("Enter the number of seconds: ");
    scanf("%i", &sec);

    hour = sec / 3600;
    h_rem = sec % 3600;

    min = h_rem / 60;
    m_rem = h_rem % 60;

    printf("The converted time is %i hours %i minutes %i seconds\n", hour, min, m_rem);

    return 0;
}
