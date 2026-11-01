
/* ==== FUN_0050fb10 @ 0050fb10 ==== 
 * signature: undefined __thiscall FUN_0050fb10(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0050fb10-0050fba4
 */

void __thiscall FUN_0050fb10(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)(param_1 * 0x65) >> 8) + param_1 * 0x3e9 & *(int *)this - 1U;
  puVar2 = operator_new(0x18);
  puVar2[4] = DAT_005b99b8;
  DAT_005b99b8 = DAT_005b99b8 + 1;
  puVar2[5] = param_1;
  *puVar2 = *(undefined4 *)(*(int *)((int)this + 0xc) + uVar3 * 4);
  *(undefined4 **)(*(int *)((int)this + 0xc) + uVar3 * 4) = puVar2;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  iVar1 = *(int *)(*(int *)((int)this + 8) + uVar3 * 4);
  if ((iVar1 == 0) || ((double)CONCAT44(param_3,param_2) < *(double *)(iVar1 + 8))) {
    FUN_0050fa00(this,(int)puVar2,uVar3);
  }
  return;
}


