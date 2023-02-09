.686
.model flat,stdcall
.stack 100h

.data
X dw 58;
Y dw 23;
Z dw 11;
M dw ?;
.code
ExitProcess PROTO STDCALL :DWORD
Start:

mov ax, Z
add ax, X
add ax, Y

mov bx, ax
imul bx, X

mov cx, Z
add cx, X
add cx, Y

mov dx, cx
mov si, Y
mov ax, si
and ax, 10000001b
not ax
and si, 01111110b
and si, ax
imul dx, si

mov ax, bx
sub ax, dx

mov M, ax

exit:
Invoke ExitProcess,1
End Start