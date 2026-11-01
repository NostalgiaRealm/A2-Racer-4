
/* ==== FUN_004047ac @ 004047ac ==== 
 * signature: undefined __register FUN_004047ac(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 004047ac-00404807
 */

void FUN_004047ac(VARIANTARG *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  VARIANT local_14;
  
  pVVar2 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  pcStack_24 = (code *)0x4047cf;
  FUN_00404ad0(&local_14);
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  (*DAT_004473e4)(&local_14);
  FUN_00404830(param_1,&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0040480f;
  pcStack_28 = (code *)0x404807;
  FUN_00404ac8(&local_14);
  return;
}


