// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char str[50]="PradeEp";
    int n = strlen(str);
    int a[52]={0};
    int i;
    for(i=0;i<7;i++)
    {
        a[str[i]-'A']++;
    }
    
    for(i=0;i<52;i++)
    {
        if(a[i]!=0)
        {
            printf("%c %d\n",i+'A',a[i]);
        }
    }
    
    return 0;
}