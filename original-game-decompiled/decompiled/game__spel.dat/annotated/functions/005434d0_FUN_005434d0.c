
/* ==== FUN_005434d0 @ 005434d0 ==== 
 * signature: undefined __thiscall FUN_005434d0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 005434d0-0054354d
 */

void __thiscall
FUN_005434d0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = param_3;
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)((int)this + 8) = param_5;
  puVar2 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  if (param_1 != 0) {
    FUN_00543150(this,param_1,(float *)((int)this + 0xc),(float *)((int)this + 0x74),1.0);
  }
  if (param_2 != 0) {
    FUN_00543150(this,param_2,(float *)((int)this + 0x3c),(float *)((int)this + 0xa4),-1.0);
  }
  return;
}


