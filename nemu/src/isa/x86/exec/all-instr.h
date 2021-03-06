#include "cpu/exec.h"
//data-mov.c
make_EHelper(mov);
make_EHelper(movzx);
make_EHelper(movsx);
make_EHelper(push);
make_EHelper(pusha);
make_EHelper(pop);
make_EHelper(popa);
make_EHelper(lea);
make_EHelper(xchg);
make_EHelper(leave);
make_EHelper(cltd);
//arith.c
make_EHelper(add);
make_EHelper(adc);
make_EHelper(sub);
make_EHelper(sbb);
make_EHelper(cmp);
make_EHelper(dec);
make_EHelper(inc);
make_EHelper(mul);
make_EHelper(imul1);
make_EHelper(imul2);
make_EHelper(imul3);
make_EHelper(div);
make_EHelper(idiv);
make_EHelper(neg);
//control.c
make_EHelper(call);
make_EHelper(call_rm);
make_EHelper(ret);
make_EHelper(jcc);
make_EHelper(jmp);
make_EHelper(jmp_rm);
//logical.c
make_EHelper(not);
make_EHelper(and);
make_EHelper(xor);
make_EHelper(or);
make_EHelper(sar);
make_EHelper(rol);
make_EHelper(shl);
make_EHelper(shr);
make_EHelper(setcc);
make_EHelper(test);
//special.c
make_EHelper(nop);
//system.c
make_EHelper(in);
make_EHelper(out);
make_EHelper(lidt);
make_EHelper(int);
make_EHelper(iret);


make_EHelper(operand_size);

make_EHelper(inv);
make_EHelper(nemu_trap);
