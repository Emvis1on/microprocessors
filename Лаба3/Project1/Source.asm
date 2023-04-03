.686
.model flat,stdcall
.stack 100h
.data

mass dd   5.532, 0.621 , 0.564 , -32.772 , -1.32, 0.511 ; 
      dd  -0.4, 5.3,-8.2, -1.4189, 0.4444, 0.4914  ;
      dd  -0.3, 21.21, 0.3, 5.21, -7.32, 10.3  ; 

tmp dd 1.7e38


.code
ExitProcess PROTO STDCALL :DWORD
Start:

mov esi,0
mov ebp, 1 

finit 
mov edi, 1

fld tmp

L1: 
fld mass[4*esi] 

mov cl, 5 
L2:   
INC esi
fadd mass[4*esi] 
DEC cl
JNZ L2

fcom st(1)
fstsw ax
sahf
ja more
jb less
je equal 

more:
fstp st(0)

jmp end_algorithm

less:
fstp st(1)
mov ebp, edi

jmp end_algorithm

equal:
fstp st(0)

end_algorithm:
INC esi
inc edi
cmp edi, 4
JNZ L1

exit:
Invoke ExitProcess,1
End Start
