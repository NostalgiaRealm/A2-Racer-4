
/* ==== FUN_0044cea8 @ 0044cea8 ==== 
 * signature: undefined __register FUN_0044cea8(int param_1, uint * param_2)
 * body: 0044cea8-0044cf20
 */

void FUN_0044cea8(int param_1,uint *param_2)

{
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  uint *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = *(char *)(param_1 + 0x94) == '\0';
  if ((bool)uVar1) {
    FUN_00403cb0((int *)(param_1 + 0x7c),param_2);
  }
  else {
    pcStack_14 = (code *)&stack0xfffffffc;
    FUN_0044ce60(param_1,(int *)&local_8);
    FUN_00403fec(local_8,param_2);
    if ((!(bool)uVar1) || (*(int *)(param_1 + 0x7c) != 0)) {
      lpString = FUN_004040a0((undefined *)param_2);
      SetWindowTextA(*(HWND *)(param_1 + 0x24),lpString);
      FUN_00403c5c((int *)(param_1 + 0x7c));
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0044cf28;
  pcStack_18 = (code *)0x44cf20;
  FUN_00403c5c((int *)&local_8);
  return;
}


