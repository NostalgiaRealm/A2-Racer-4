
/* ==== FUN_0045e990 @ 0045e990 ==== 
 * signature: undefined __register FUN_0045e990(int param_1, int param_2)
 * body: 0045e990-0045ea0b
 */

void FUN_0045e990(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcVar1 = (code *)&stack0xfffffffc;
  if (-1 < param_2) {
    iVar2 = FUN_0045eb28(param_1);
    pcVar1 = pcStack_1c;
    if (param_2 < iVar2) goto LAB_0045e9ea;
  }
  pcStack_1c = pcVar1;
  local_c = 0;
  local_10 = param_2;
  FUN_00409254((byte *)"Index [%d] out of range.",&local_10,0,&local_8);
  FUN_00403c40(local_8);
LAB_0045e9ea:
  FUN_004102b0(*(undefined4 **)(param_1 + 8),param_2);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0045ea13;
  pcStack_20 = (code *)0x45ea0b;
  FUN_00403c5c(&local_8);
  return;
}


