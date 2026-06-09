#include <stdio.h>
#include <windows.h>
int main(){
    int h = 12, m = 0, s = 0;
    char d = 'A';
    while(1){
        Sleep(1000);
        s++;
        if(s == 60){
            m++;
            s = 0;
        }
        
        if(m == 60){
            h++;
            m = 0;
        }
        
        if (h == 12 && m == 0 && s == 0) {
            d = (d == 'A') ? 'P' : 'A';
        }
        if(h > 12){
            h = 1;
        }

    printf("\r%02d:%02d:%02d %cM", h, m, s, d);
    }

    // by rafsan
    return 0;
}