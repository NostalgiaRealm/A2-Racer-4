
/* ==== FUN_0045cca0 @ 0045cca0 ==== 
 * signature: undefined __register FUN_0045cca0(int * param_1, char param_2)
 * body: 0045cca0-0045cdb5
 */

void FUN_0045cca0(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_0040c968(param_1 + 3);
  if (param_2 == '\0') {
    piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
    piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_00454aa4);
    FUN_00456634(piVar2,extraout_EDX,extraout_ECX_00);
  }
  else if (param_2 == '\x01') {
    piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else if (param_2 == '\x02') {
    piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else if ((param_2 == '\x03') || (param_2 == '\x04')) {
    piVar2 = TDaviAnimation_vmt_00c((int *)&PTR_TPersistent_vmt_000_0045b71c,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else {
    FUN_00402ee4(*param_1,local_10c);
    FUN_00403e80(&local_c,local_10c);
    pcStack_130 = " Unhandled case-part";
    FUN_00403f9c(&local_8,4);
    FUN_00403c40(local_8);
  }
  iVar1 = param_1[3];
  *(int *)(iVar1 + 8) = param_1[4];
  *(int *)(iVar1 + 0xc) = param_1[5];
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&local_c,2);
  return;
}


