
/* ==== FUN_004d60a0 @ 004d60a0 ==== 
 * signature: undefined1 * __thiscall FUN_004d60a0(void * this, byte param_1)
 * body: 004d60a0-004d60f9
 */

undefined1 * __thiscall FUN_004d60a0(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  piVar1 = *(int **)((int)this + 4);
  if (piVar1 == (int *)0x0) goto LAB_004d60f1;
  uVar4 = *(uint *)piVar1[8];
  if (uVar4 == 0) {
LAB_004d60dc:
    uVar4 = (**(code **)(*piVar1 + 4))(param_1);
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 + uVar4 <= uVar4) goto LAB_004d60dc;
    *(int *)piVar1[0xc] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    *pbVar3 = param_1;
    uVar4 = (uint)param_1;
  }
  if (uVar4 != 0xffffffff) {
    return this;
  }
LAB_004d60f1:
  *(undefined1 *)this = 1;
  return this;
}


