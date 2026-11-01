
/* ==== FUN_00404acc @ 00404acc ==== 
 * signature: undefined __register FUN_00404acc(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 00404acc-00404b27
 */

void FUN_00404acc(VARIANTARG *param_1,undefined4 *param_2,undefined4 param_3)

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
  pcStack_24 = (code *)0x404aef;
  FUN_00405040(&local_14);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  (*DAT_004ac3ec)(&local_14);
  FUN_00404b50(param_1,&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00404b2f;
  pcStack_28 = (code *)0x404b27;
  FUN_00405038(&local_14);
  return;
}


