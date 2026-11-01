
/* ==== FUN_00501170 @ 00501170 ==== 
 * signature: undefined __thiscall FUN_00501170(void * this, int param_1)
 * body: 00501170-00501214
 */

void __thiscall FUN_00501170(void *this,int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar1 = *(int *)((int)this + 4);
  pvVar2 = *(LPVOID *)((int)this + 0xc);
  *(int *)((int)this + 4) = param_1 + -1;
  puVar3 = FUN_004f5aa0(param_1,8);
  uVar4 = *(uint *)((int)this + 8);
  *(undefined4 **)((int)this + 0xc) = puVar3;
  if (-1 < iVar1) {
    param_1 = iVar1 + 1;
    puVar5 = (uint *)((int)pvVar2 + 4);
    do {
      if (*puVar5 != 0) {
        FUN_00501220(this,*puVar5,puVar5[-1]);
      }
      puVar5 = puVar5 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  uVar4 = (*(uint *)((int)this + 8) ^ uVar4 & 0xffffff) & 0xffffff ^ *(uint *)((int)this + 8);
  *(uint *)((int)this + 8) = uVar4;
  if (((uVar4 & 0xff000000) == 0) && (pvVar2 != (LPVOID)0x0)) {
    FUN_00559d4e(pvVar2);
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xffffff;
    return;
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xffffff;
  return;
}


