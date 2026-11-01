
/* ==== FUN_005014a0 @ 005014a0 ==== 
 * signature: undefined __thiscall FUN_005014a0(void * this, int param_1)
 * body: 005014a0-00501516
 */

void __thiscall FUN_005014a0(void *this,int param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = *(int *)this;
  pvVar1 = *(LPVOID *)((int)this + 0xc);
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + -1;
  puVar3 = FUN_004f5aa0(param_1,0xc);
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 **)((int)this + 0xc) = puVar3;
  if (-1 < iVar4 + -1) {
    puVar5 = (uint *)((int)pvVar1 + 8);
    do {
      if (*puVar5 != 0) {
        FUN_00501570(this,puVar5[-1],*puVar5,puVar5[-2]);
      }
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 8) = uVar2;
  if ((pvVar1 != *(LPVOID *)((int)this + 0x10)) && (pvVar1 != (LPVOID)0x0)) {
    FUN_00559d4e(pvVar1);
  }
  return;
}


