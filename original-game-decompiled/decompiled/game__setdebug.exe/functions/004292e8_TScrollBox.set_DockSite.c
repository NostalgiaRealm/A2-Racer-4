
/* ==== TScrollBox.set_DockSite @ 004292e8 ==== 
 * signature: undefined __register TScrollBox.set_DockSite(int * param_1, char param_2, undefined4 param_3)
 * body: 004292e8-0042938e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TScrollBox_set_DockSite(int *param_1,char param_2,undefined4 param_3)

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
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != (char)param_1[0x51]) &&
     (*(char *)(param_1 + 0x51) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_00422708((int)param_1,param_2,param_3);
    if (param_2 == '\0') {
      FUN_00402d14((int *)param_1[0x50]);
      param_1[0x50] = 0;
      FUN_004052f0(param_1 + 0x52);
    }
    else {
      uVar2 = extraout_ECX;
      if (param_1[0x50] == 0) {
        iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX);
        param_1[0x50] = iVar1;
        uVar2 = extraout_ECX_00;
      }
      FUN_00402ef0(param_1,&local_8,uVar2);
      FUN_00405308(param_1 + 0x52,local_8);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00429396;
  pcStack_18 = (code *)0x42938e;
  FUN_004052f0((int *)&local_8);
  return;
}


