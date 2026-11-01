
/* ==== TWinControl.vmt_098 @ 00427aa4 ==== 
 * signature: undefined __register TWinControl.vmt_098(int * param_1)
 * body: 00427aa4-00427c2e
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
  pcStack_d4 = thunk_FUN_00403434;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x90))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar2 = FUN_00402e8c(piVar4,(int)&PTR_TWinControl_vmt_000_00420fa8);
      if ((char)uVar2 != '\0') {
        local_74 = FUN_0042a8b4(piVar4);
        goto LAB_00427b50;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar4 = &local_c0;
    uVar2 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_c4);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_c4,uVar2,piVar4);
    FUN_0040346c(uVar2);
  }
LAB_00427b50:
  param_1[0x4f] = (int)local_6c.lpfnWndProc;
  BVar3 = GetClassInfoA(local_6c.hInstance,local_44,&local_b8);
  if ((BVar3 == 0) || (local_b8.lpfnWndProc != FUN_00421954)) {
    if (BVar3 != 0) {
      UnregisterClassA(local_44,local_6c.hInstance);
    }
    local_6c.lpfnWndProc = FUN_00421954;
    local_6c.lpszClassName = local_44;
    AVar1 = RegisterClassA(&local_6c);
    if (AVar1 == 0) {
      FUN_0040b9e4();
    }
  }
  DAT_00446624 = param_1;
  (**(code **)(*param_1 + 0x94))(param_1,local_90);
  if (param_1[0x53] == 0) {
    FUN_0040b9e4();
  }
  FUN_00408254(param_1[0x15]);
  param_1[0x15] = 0;
  FUN_0042abbc((int)param_1);
  uVar5 = 1;
  uVar2 = FUN_004165a0(param_1[0x16]);
  FUN_00425780((int)param_1,0x30,uVar2,uVar5);
  if ((char)param_1[0x13] != '\0') {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_d8;
  pcStack_d0 = FUN_00427c36;
  pcStack_d4 = (code *)0x427c2e;
  FUN_004039b8((int *)&local_c4);
  return;
}


