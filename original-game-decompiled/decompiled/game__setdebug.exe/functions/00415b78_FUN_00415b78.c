
/* ==== FUN_00415b78 @ 00415b78 ==== 
 * signature: undefined __register FUN_00415b78(int param_1, int * param_2, byte * param_3)
 * body: 00415b78-00415be0
 */

void FUN_00415b78(int param_1,int *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x415b91;
  FUN_004159cc(param_1);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = (undefined4 *)param_2[4];
  pcStack_1c = (code *)&stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_004159e4(param_1,param_3);
  param_2[4] = (int)puVar2;
  if (puVar1 != puVar2) {
    FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
  }
  FUN_00415ac8(param_1,puVar1);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00415be8;
  pcStack_20 = (code *)0x415be0;
  FUN_004159d8(param_1);
  return;
}


