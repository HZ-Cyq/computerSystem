/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 21时06分58秒
 ************************************************************************/

#include<stdio.h>
typedef char *byte_pointer;
void show_bytes(byte_pointer a,int length) {
    printf("length: %d\n",length);
    for (int i = 0; i < length; i ++) {
        printf("%.2x\t",a[i]);
    }
    printf("\n");
}
void show_int(int a) {
    show_bytes((byte_pointer)(&a),sizeof(int));
}
void show_float(float a) {
    show_bytes((byte_pointer)(&a),sizeof(float));
    printf("showfloat is over\n");
}
void show_pointer(void *a) {
    show_bytes((byte_pointer)&a,sizeof(void *));//代表指向NULL的指针
}
int main() {
    show_int(123);
    show_float(1.23);//迷之输出 char类型的数据竟然可以输出8位，前面6位是f 具体输出是这样的：ffffffa4	70	ffffff9d	3f	 
    show_float(23.098);
    void *a;
    show_pointer(a);
    return 0;
}
