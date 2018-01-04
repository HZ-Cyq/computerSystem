void decode1(int *xp,int *yp,int *zp) {
    int x = *xp;
    int y = *yp;
    int z = *zp;
    *yp = x;
    *zp = y;
    *xp = z;
}
命令 g++ -O2  -S decode1.c 
汇编代码：
    movl	(%rdi), %r8d //将rdi寄存器(*xp)指向的内存的值放到r8d寄存器中
	movl	(%rsi), %ecx
	movl	(%rdx), %eax
	movl	%r8d, (%rsi) //将r8d寄存器中的值放到rsi寄存器（*si）指向的内存中
	movl	%ecx, (%rdx)
	movl	%eax, (%rdi)
	ret

int simple(int *xp,int y) {
    int t = *xp + y;
    *xp = t;
    return t;
}
    movl	(%rdi), %eax
	addl	%esi, %eax
	movl	%eax, (%rdi) //eax寄存器中默认储存着函数的返值
	ret
