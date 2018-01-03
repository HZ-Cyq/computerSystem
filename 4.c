/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 21时06分58秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer a,int length) {
    int i;    
    for (i = 0; i < length; i ++)
        printf(" %.2x",a[i]);
    printf("\n");
}
void show_int(int a) {
    show_bytes((byte_pointer)(&a),sizeof(int));
}
void show_float(float a) {
    show_bytes((byte_pointer) &a,sizeof(float));
}
void show_pointer(void *a) {
    show_bytes((byte_pointer) &a,sizeof(void *));//代表指向NULL的指针
}
int main() {
    show_int(123);
    show_float(1.23);
//终于找到bug了，原来是定义的char指针，应该是unsigned类型，这样的话避免了是负数的时候会输出奇怪的值，
//也许是因为超过边界了，所以系统改成8位输出，就象1.c中溢出了还会输出正确结果
    show_float(23.098);
    char *s = "ABCDEF";
    show_bytes((byte_pointer)s,strlen(s));
    return 0;
}
