
/* ==== FUN_00414ed8 @ 00414ed8 ==== 
 * signature: undefined __register FUN_00414ed8(int param_1, undefined4 param_2, uint param_3)
 * body: 00414ed8-00414f13
 */

void FUN_00414ed8(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  do {
    FUN_00414de0(param_1,&local_8,param_3);
    param_3 = extraout_ECX;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00414f1b;
  pcStack_14 = (code *)0x414f13;
  FUN_00403c5c(&local_8);
  return;
}


