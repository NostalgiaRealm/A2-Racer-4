
/* ==== FUN_00439034 @ 00439034 ==== 
 * signature: undefined __register FUN_00439034(void)
 * body: 00439034-0043911e
 */

void FUN_00439034(void)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  byte local_38 [32];
  DWORD local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  uVar3 = 0;
  local_18 = GetCurrentProcessId();
  local_14 = 0;
  pbVar1 = FUN_004091ec(local_38,(byte *)"Delphi%.8X",&local_18,uVar3);
  DAT_004ac758 = GlobalAddAtomA((LPCSTR)pbVar1);
  uVar3 = 1;
  local_10 = DAT_004ac4dc;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  pbVar1 = FUN_004091ec(local_38,(byte *)"ControlOfs%.8X%.8X",&local_10,uVar3);
  DAT_004ac75a = GlobalAddAtomA((LPCSTR)pbVar1);
  DAT_004ac78c = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX);
  FUN_00438c4c();
  DAT_004ac74c = FUN_00438a84((int *)FUN_0042b878,'\x01',extraout_ECX_00);
  piVar2 = TScreen_vmt_02c((int *)&PTR_TPersistent_vmt_000_00443fb8,'\x01',(int *)0x0);
  *(int **)PTR_DAT_004ab9f8 = piVar2;
  piVar2 = TApplication_vmt_02c((int *)&PTR_TPersistent_vmt_000_00444174,'\x01',(int *)0x0);
  *(int **)PTR_DAT_004ab8ac = piVar2;
  FUN_00444554();
  FUN_0044d814(*(int *)PTR_DAT_004ab8ac,'\x01');
  FUN_0040fcbc((int)&DAT_004299f0,0x42bb3c,0x42bb2c);
  return;
}


