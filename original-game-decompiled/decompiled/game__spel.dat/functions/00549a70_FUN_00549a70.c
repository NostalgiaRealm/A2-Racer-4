
/* ==== FUN_00549a70 @ 00549a70 ==== 
 * signature: undefined4 __thiscall FUN_00549a70(void * this, uint * param_1)
 * body: 00549a70-00549ac4
 */

undefined4 __thiscall FUN_00549a70(void *this,uint *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)((int)this + 0x36);
  iVar3 = 0;
  if (-1 < (int)(uVar4 - 1)) {
    piVar2 = (int *)(*(int *)((int)this + 0x38) + (uVar4 - 1) * 4);
    do {
      iVar1 = *piVar2;
      if (((*(uint **)(iVar1 + 0x2c) == param_1) || (*(uint **)(iVar1 + 0x30) == param_1)) &&
         (((**(uint **)(iVar1 + 0x30) | **(uint **)(iVar1 + 0x2c)) & 0xc) == 0)) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + -1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (1 < iVar3) {
      return 0;
    }
  }
  return 1;
}


