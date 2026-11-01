
/* ==== FUN_00440af0 @ 00440af0 ==== 
 * signature: undefined __register FUN_00440af0(HMENU param_1, ushort param_2, int param_3, undefined1 param_4, int param_5)
 * body: 00440af0-00440bc4
 */

void FUN_00440af0(HMENU param_1,ushort param_2,int param_3,undefined1 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  int iStack_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  local_14 = 0;
  iStack_8 = (uint)param_2 << 0x10;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar1 = FUN_0044038c(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX_00;
    if ((iVar1 != 0) && (iVar2 = FUN_0043f018(iVar1), uVar3 = extraout_EDX_01, param_3 < iVar2)) {
      iVar1 = FUN_0043f028(iVar1,param_3);
      uVar3 = extraout_EDX_02;
    }
  }
  else {
    pcStack_20 = (code *)&stack0xfffffffc;
    GetSubMenu(param_1,param_3);
    iVar1 = FUN_0044038c(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    FUN_00403e04((int *)&local_c,CONCAT31((int3)((uint)uVar3 >> 8),param_4));
    puVar4 = local_c;
    FUN_00403e04((int *)&local_10,
                 CONCAT31((int3)((uint)*(undefined1 **)(iVar1 + 0x24) >> 8),
                          **(undefined1 **)(iVar1 + 0x24)));
    iVar2 = FUN_00408364(local_10,puVar4);
    if (iVar2 == 0) {
      FUN_00441a00(*(int *)(iVar1 + 0x24),&local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00440bcc;
  pcStack_24 = (code *)0x440bc4;
  FUN_00403c80(&local_14,3);
  return;
}


