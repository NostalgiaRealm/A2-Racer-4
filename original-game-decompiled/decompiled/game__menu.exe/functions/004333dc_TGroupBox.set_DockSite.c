
/* ==== TGroupBox.set_DockSite @ 004333dc ==== 
 * signature: undefined __register TGroupBox.set_DockSite(int * param_1, char param_2, undefined4 param_3)
 * body: 004333dc-00433482
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_DockSite(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != (char)param_1[0x51]) &&
     (*(char *)(param_1 + 0x51) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_0042c648((int)param_1,param_2,param_3);
    if (param_2 == '\0') {
      FUN_00402f9c((int *)param_1[0x50]);
      param_1[0x50] = 0;
      FUN_00405860(param_1 + 0x52);
    }
    else {
      uVar2 = extraout_ECX;
      if (param_1[0x50] == 0) {
        iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX);
        param_1[0x50] = iVar1;
        uVar2 = extraout_ECX_00;
      }
      FUN_00403178(param_1,&local_8,uVar2);
      FUN_00405878(param_1 + 0x52,local_8);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0043348a;
  pcStack_18 = (code *)0x433482;
  FUN_00405860((int *)&local_8);
  return;
}


