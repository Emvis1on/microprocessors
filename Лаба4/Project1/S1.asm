.586 
.MODEL flat,C
.DATA

operand1 DD 0.0
operand2 DD 0.0
SUM DD 0.0

.CODE

extern fun_el:near ;

public integral_calc
integral_calc proc C
push ebp
mov ebp,esp

push dword ptr [ebp + 8] 
call fun_el 
fld operand1 
fadd

fstp operand1 

push dword ptr [ebp + 12] 
call fun_el 
fld operand2 
fadd 
fstp operand2 

fld operand2
fsub operand1
fstp SUM 

fld SUM
mov esp,ebp
pop ebp
ret
integral_calc endp
End
