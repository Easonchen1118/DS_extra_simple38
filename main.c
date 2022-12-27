#include <stdio.h>
//計算電費https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30795
int main(){
    int inpt, temp, level;
    float summer = 0;
    float nonsummer = 0;
    scanf("%d", &inpt);
    
    if (inpt <= 120) {
        level = 1;
    }
    else if (inpt <= 330) {
        level = 2;
    }
    else if (inpt <= 500) {
        level = 3;
    }
    else if (inpt <= 700) {
        level = 4;
    }
    else {
        level = 5;
    }
    
    if (level >= 1) {
        if (inpt >= 120) {
            temp = 120;
        }
        else {
            temp = inpt;
        }
        summer += (temp * 2.10);
        nonsummer += (temp * 2.10);
    }
    if (level >= 2) {
        if (inpt >= 330) {
            temp = 210;
        }
        else {
            temp = inpt - 120;
        }
        summer += (temp * 3.02);
        nonsummer += (temp * 2.68);
    }
    if (level >= 3) {
        if (inpt >= 500) {
            temp = 170;
        }
        else {
            temp = inpt - 330;
        }
        summer += (temp * 4.39);
        nonsummer += (temp * 3.61);
    }
    if (level >= 4) {
        if (inpt >= 700) {
            temp = 200;
        }
        else {
            temp = inpt - 500;
        }
        summer += (temp * 4.97);
        nonsummer += (temp * 4.01);
    }
    if (level >= 5) {
        temp = inpt - 700;
        summer += (temp * 5.63);
        nonsummer += (temp * 4.50);
    }
    printf("Summer months:%.2f\n", summer);
    printf("Non-Summer months:%.2f\n", nonsummer);
    return 0;
}
