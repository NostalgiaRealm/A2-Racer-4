
/* ==== FUN_00404de0 @ 00404de0 ==== 
 * signature: undefined __register FUN_00404de0(int * param_1, undefined4 * param_2)
 * body: 00404de0-00404e41
 */

void FUN_00404de0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  _union_2683 *p_Var3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  _union_2683 local_14;
  
  p_Var3 = &local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = *param_2;
    param_2 = param_2 + 1;
    p_Var3 = (_union_2683 *)((int)p_Var3 + 4);
  }
  pcStack_24 = (code *)0x404dff;
  FUN_00405040((VARIANT *)&local_14.n2);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  uVar1 = (*DAT_004ac3ec)(&local_14);
  if (local_14.n2.vt != 0xd) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_00405878(param_1,(int *)local_14._8_4_);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00404e49;
  pcStack_28 = (code *)0x404e41;
  FUN_00405038((VARIANTARG *)&local_14.n2);
  return;
}


