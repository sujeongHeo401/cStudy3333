//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//    char a[10];
//    int c = 0, h = 0, i, pos;
//    scanf("%s", &a);
//    if (a[1] == 'H') {
//        c = 1;
//        pos = 1;
//    }
//    else {
//        for (i = 1; a[i] != 'H'; i++) {
//            c = 10 * c + (a[i] - 48);
//        }
//        pos = i; /// h 의 위치 
//    }
//    if (a[pos + 1] == '\0') h = 1;
//    else {
//        for (i = pos + 1; a[i] != '\0'; i++) {
//            h = h * 10 + (a[i] - 48);
//        }
//
//    }
//    printf("%d\n", c * 12 + h);
//
//    return 0;
//    /*else {
//        for(i = 1; a[i] != 'H'; i++)
//    }*/
//   
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char a[10];
    int c = 0, h = 0, i, pos;
    scanf("%s", &a);
    if (a[1] == 'H') {
        c = 1;
        h = 1;
    }
    else {
        for (i = 1; a[i] != 'H'; i++) {
            c = c * 10 + (a[i] - 48);
        }
        pos = i; // H 의 위치
    }
    if (a[pos + 1] == '\0') h = 1;
    else {
        for (i = pos + 1; a[i] != '\0'; i++) {
            h = h * 10 + (a[i] - 48);
        }
    }
    printf("%d\n", c * 12 + h);
    return 0;
}

