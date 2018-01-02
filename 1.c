/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 14时39分16秒
 ************************************************************************/
/*整数在计算机内部的存储(以8位为例)
 * 第一位是符号位 
 * 正数0就是本身，所以0为0 1为01 .. 7f(127)
 * 负数的绝对值加上所表示的数为 pow(2,8);
 *      本身 -1  -2  -3 ... -128（十进制）
 *      机器 ff  fe  fd ... 80  （十六进制）
 *      和   256 256 256... 256
 */
#include<stdio.h>
#include<inttypes.h>
int main() {
    int8_t i;
    for (i = -2; i <= 2; i ++) {
        printf("%d:%x\n",i,i);
    } 
    printf("INT8_MIN %d %x\n",INT8_MIN,INT8_MIN);
    printf("INT8_MAX %d %x\n",INT8_MAX,INT8_MAX);
    printf("%"PRId8"\n",INT8_MIN-1);//这里明明溢出了，但知道结果迷之正确
    printf("%"PRId8"\n",INT8_MAX+1);//
    return 0;
}
