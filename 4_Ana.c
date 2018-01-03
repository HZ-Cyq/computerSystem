/*************************************************************************
	> File Name: 4_Ana.c
	> Author: 
	> Mail: 
	> Created Time: 2018年01月03日 星期三 06时48分49秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a = -1;
    char *c = (char *) &a;
    unsigned char *d = (unsigned char *)&a; 
    printf("char:%x\n",*c);
    printf("unsigned char:%x\n",*d);
    char e;
    for (int i = 126; i <= 129; i ++) {
        e = i;
        printf("%d:%x\n",i,e);
    }    
    for (int i = -2; i <= 2; i ++) {
        e = i;
        printf("%d:%x\n",i,e);
    }    
    return 0;
}
