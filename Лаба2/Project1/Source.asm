.686
.model flat,stdcall
.stack 100h
.data

x dw 28073;
y dw 4602;
L dw ?;
M dw ?;
R dw ?;

.code
ExitProcess PROTO STDCALL :DWORD
Start:

mov ecx, 4
mov ax, x
l1: sub ax, y
loop l1
mov L, ax

mov ax, L
xor ax, y
mov M, ax
cmp M, 0 
jg m1
jmp m2
m1: 
and ax, 0f0fh
jmp m3
m2:
imul ax, -1
jmp m3
m3:
mov R, ax

cmp R, 0
je n1
jmp n2 
n1:
mov ax, 27e1h
xor ax, L
jmp n3
n2:
mov ax, 67a1h
sub ax, L
jmp n3
n3:
mov R, ax

exit:
Invoke ExitProcess,1
End Start
