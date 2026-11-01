
/* ==== FUN_00415bf0 @ 00415bf0 ==== 
 * signature: undefined __register FUN_00415bf0(int param_1, int * param_2, undefined4 * param_3)
 * body: 00415bf0-00415c4b
 */

void FUN_00415bf0(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  pcStack_18 = (code *)0x415c06;
  FUN_004159cc(param_1);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = (undefined4 *)param_2[4];
  if (param_3 != puVar1) {
    param_3[1] = param_3[1] + 1;
    param_2[4] = (int)param_3;
    pcStack_18 = (code *)&stack0xfffffffc;
    FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
    FUN_00415ac8(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00415c53;
  pcStack_1c = (code *)0x415c4b;
  FUN_004159d8(param_1);
  return;
}


