#include <time.h>
#include <stdio.h>

int str2int(char *s);
int n=0,temp=0,a,i,j;

int main() {
    time_t now;
    char out[4];
    int in, temp[32];
    float age;
    struct tm* now_tm;

    time(&now);
    now_tm = localtime(&now);
    strftime (out, 80, "%Y%m%d", now_tm); //hasil keluaran berupa string "YYYYMMDD"

    printf("Masukkan tanggal lahir Anda.\n(format: YYYYMMDD, contoh: 19981203): ");
    scanf("%d", &in); fflush(stdin);

    temp[1] = str2int(out) - in;

    age = temp[1] / 10000;

    printf("\n\nUmur Anda adalah %.0f tahun.\n\n", age);
    getch();
    return 0;
}

int str2int(char *s) {
    char c=s[0];
    while(c!='\0')
    {
     n++;
     c=*(s+n);
    }
  // n=n-2;
    for(i=0;i<n;i++)
    {
       c=*(s+i);
       a=c-48;
       for(j=n-1;j>i;j--)
       {
          a=a*10;
       }
       temp=temp+a;
    }
 return (temp);
}
