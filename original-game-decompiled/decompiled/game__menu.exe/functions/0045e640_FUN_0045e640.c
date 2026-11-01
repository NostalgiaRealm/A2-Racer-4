
/* ==== FUN_0045e640 @ 0045e640 ==== 
 * signature: undefined __register FUN_0045e640(int param_1, int param_2)
 * body: 0045e640-0045e6dc
 */

void FUN_0045e640(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_12c;
  code *pcStack_128;
  code *pcStack_124;
  byte local_118 [256];
  int local_18;
  undefined1 local_14;
  byte *local_10;
  undefined1 local_c;
  int local_8;
  
  pcStack_124 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  pcVar1 = (code *)&stack0xfffffffc;
  if (-1 < param_2) {
    iVar2 = FUN_0045e8a0(param_1);
    pcVar1 = pcStack_124;
    if (param_2 < iVar2) goto LAB_0045e6bb;
  }
  pcStack_124 = pcVar1;
  piVar3 = &local_8;
  local_14 = 0;
  local_18 = param_2;
  FUN_00402ee4(*(int *)(param_1 + 8),local_118);
  local_10 = local_118;
  local_c = 4;
  FUN_00409254((byte *)"Index [%d] out of range. (%s)",&local_18,1,piVar3);
  FUN_00403c40(local_8);
LAB_0045e6bb:
  FUN_004102b0(*(undefined4 **)(param_1 + 0xc),param_2);
  *in_FS_OFFSET = uStack_12c;
  pcStack_124 = FUN_0045e6e4;
  pcStack_128 = (code *)0x45e6dc;
  FUN_00403c5c(&local_8);
  return;
}


