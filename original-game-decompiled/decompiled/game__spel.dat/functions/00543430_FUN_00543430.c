
/* ==== FUN_00543430 @ 00543430 ==== 
 * signature: undefined __thiscall FUN_00543430(void * this, int param_1, int param_2, double * param_3, undefined4 param_4, int param_5, undefined4 param_6)
 * body: 00543430-005434cc
 */

void __thiscall
FUN_00543430(void *this,int param_1,int param_2,double *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = param_4;
  *(int *)((int)this + 4) = param_5;
  *(undefined4 *)((int)this + 8) = param_6;
  if (param_5 == 0) {
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined4 *)((int)this + 0x138) = 0;
  }
  else {
    puVar2 = (undefined4 *)((int)this + 0xd8);
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x138) = 0;
    *(undefined4 *)((int)this + 0x13c) = 0;
    *(undefined4 *)((int)this + 0x140) = 0;
  }
  if (param_1 != 0) {
    FUN_00542d00(this,param_3,param_1,(float *)((int)this + 0xc),(float *)((int)this + 0x74),1.0);
  }
  if (param_2 != 0) {
    FUN_00542d00(this,param_3,param_2,(float *)((int)this + 0x3c),(float *)((int)this + 0xa4),-1.0);
  }
  return;
}


