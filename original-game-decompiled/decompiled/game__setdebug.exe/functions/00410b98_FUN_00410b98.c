
/* ==== FUN_00410b98 @ 00410b98 ==== 
 * signature: undefined __register FUN_00410b98(int * param_1, int * param_2, int param_3)
 * body: 00410b98-00410c3a
 */

void FUN_00410b98(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  int local_14;
  
  if (param_3 == 0) {
    pcStack_28 = (code *)0x410bb7;
    FUN_00410ae4(param_2,0);
    pcStack_28 = (code *)0x410bbf;
    param_3 = FUN_00410af0(param_2);
  }
  local_14 = param_3;
  if (0xf000 < param_3) {
    local_14 = 0xf000;
  }
  pcStack_28 = (code *)0x410be0;
  iVar1 = FUN_004026b8(local_14);
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_28 = (code *)&stack0xfffffffc;
  for (; param_3 != 0; param_3 = param_3 - iVar2) {
    iVar2 = param_3;
    if (local_14 < param_3) {
      iVar2 = local_14;
    }
    FUN_00410b28(param_2,iVar1,iVar2);
    FUN_00410b60(param_1,iVar1,iVar2);
  }
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_00410c42;
  pcStack_2c = (code *)0x410c3a;
  FUN_004026d0(iVar1);
  return;
}


