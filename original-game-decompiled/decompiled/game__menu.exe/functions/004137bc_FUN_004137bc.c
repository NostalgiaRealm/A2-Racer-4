
/* ==== FUN_004137bc @ 004137bc ==== 
 * signature: undefined __register FUN_004137bc(int param_1, undefined4 param_2, uint param_3)
 * body: 004137bc-0041382d
 */

void FUN_004137bc(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_c;
  char local_5;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00413320(param_1,6,param_3);
  FUN_00413720(param_1,(undefined4 *)&local_5,1);
  if (local_5 != '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00414de0(param_1,&local_c,extraout_ECX);
    FUN_004132b4();
  }
  FUN_00413720(param_1,(undefined4 *)&local_5,1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00413835;
  pcStack_18 = (code *)0x41382d;
  FUN_00403c5c(&local_c);
  return;
}


