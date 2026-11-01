
/* ==== TWinControl.vmt_098 @ 00431a44 ==== 
 * signature: undefined __register TWinControl.vmt_098(int * param_1)
 * body: 00431a44-00431bce
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_098(int *param_1)

{
  ATOM AVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_d8;
  code *pcStack_d4;
  code *pcStack_d0;
  byte *local_c4;
  int local_c0;
  undefined1 local_bc;
  tagWNDCLASSA local_b8;
  undefined1 local_90 [7];
  byte local_89;
  int local_74;
  WNDCLASSA local_6c;
  CHAR local_44 [64];
  
  pcStack_d0 = (code *)&stack0xfffffffc;
  local_c4 = (byte *)0x0;
  pcStack_d4 = thunk_FUN_004036bc;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x90))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar2 = FUN_00403114(piVar4,(int)&PTR_TWinControl_vmt_000_0042ac0c);
      if ((char)uVar2 != '\0') {
        local_74 = FUN_004349e0(piVar4);
        goto LAB_00431af0;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar4 = &local_c0;
    uVar2 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_c4);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_c4,uVar2,piVar4);
    FUN_004036f4(uVar2);
  }
LAB_00431af0:
  param_1[0x4f] = (int)local_6c.lpfnWndProc;
  BVar3 = GetClassInfoA(local_6c.hInstance,local_44,&local_b8);
  if ((BVar3 == 0) || (local_b8.lpfnWndProc != FUN_0042b894)) {
    if (BVar3 != 0) {
      UnregisterClassA(local_44,local_6c.hInstance);
    }
    local_6c.lpfnWndProc = FUN_0042b894;
    local_6c.lpszClassName = local_44;
    AVar1 = RegisterClassA(&local_6c);
    if (AVar1 == 0) {
      FUN_0040c6d4();
    }
  }
  DAT_004aa6f8 = param_1;
  (**(code **)(*param_1 + 0x94))(param_1,local_90);
  if (param_1[0x53] == 0) {
    FUN_0040c6d4();
  }
  FUN_00408d6c(param_1[0x15]);
  param_1[0x15] = 0;
  FUN_00434ce8((int)param_1);
  uVar5 = 1;
  uVar2 = FUN_00418228(param_1[0x16]);
  FUN_0042f720((int)param_1,0x30,uVar2,uVar5);
  if ((char)param_1[0x13] != '\0') {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_d8;
  pcStack_d0 = FUN_00431bd6;
  pcStack_d4 = (code *)0x431bce;
  FUN_00403c5c((int *)&local_c4);
  return;
}


