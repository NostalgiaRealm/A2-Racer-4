
/* ==== FUN_0042ee80 @ 0042ee80 ==== 
 * signature: undefined __register FUN_0042ee80(void)
 * body: 0042ee80-0042ef6a
 */

void FUN_0042ee80(void)

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
  pbVar1 = FUN_004086d4(local_38,(byte *)"Delphi%.8X",&local_18,uVar3);
  DAT_00447748 = GlobalAddAtomA((LPCSTR)pbVar1);
  uVar3 = 1;
  local_10 = DAT_004474d4;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  pbVar1 = FUN_004086d4(local_38,(byte *)"ControlOfs%.8X%.8X",&local_10,uVar3);
  DAT_0044774a = GlobalAddAtomA((LPCSTR)pbVar1);
  DAT_0044777c = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX);
  FUN_0042ea98();
  DAT_0044773c = FUN_0042e8d0((int *)FUN_00421938,'\x01',extraout_ECX_00);
  piVar2 = TScreen_vmt_02c((int *)&PTR_TPersistent_vmt_000_004396ec,'\x01',(int *)0x0);
  *(int **)PTR_DAT_00446d84 = piVar2;
  piVar2 = TApplication_vmt_02c((int *)&PTR_TPersistent_vmt_000_004397c4,'\x01',(int *)0x0);
  *(int **)PTR_DAT_00446c80 = piVar2;
  FUN_00439ba4();
  FUN_00442688(*(int *)PTR_DAT_00446c80,'\x01');
  FUN_0040ea80((int)&DAT_0041fe70,0x421bfc,0x421bec);
  return;
}


