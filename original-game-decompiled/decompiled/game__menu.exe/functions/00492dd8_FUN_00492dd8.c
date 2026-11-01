
/* ==== FUN_00492dd8 @ 00492dd8 ==== 
 * signature: undefined __register FUN_00492dd8(int * param_1, char param_2, int param_3)
 * body: 00492dd8-00492f33
 */

void FUN_00492dd8(int *param_1,char param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *in_FS_OFFSET;
  char *pcVar5;
  int iStack_148;
  code *pcStack_144;
  undefined1 *puStack_140;
  undefined4 in_stack_fffffec4;
  undefined4 in_stack_fffffec8;
  int local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_120 = 0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_140 = (undefined1 *)0x492e07;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffec4,in_stack_fffffec8);
    param_3 = extraout_ECX;
  }
  pcStack_144 = thunk_FUN_004036bc;
  iStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_148;
  local_c = 0;
  puStack_140 = &stack0xfffffffc;
  local_10 = param_3;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar5 = "CreateAndReadHeader";
  FUN_00403f9c(&local_14,3);
  iVar1 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,0,(int)pcVar5);
  TDataObject_vmt_004(param_1,'\0',extraout_ECX_00);
  FUN_00481178(param_3,(int *)&local_11c);
  FUN_00403f28((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),local_11c);
  uVar3 = FUN_004087a4((undefined *)local_8);
  if ((char)uVar3 == '\0') {
    FUN_00403f28(&local_120,(undefined4 *)"Unable to load: ",local_8);
    FUN_00403c40(local_120);
  }
  param_1[2] = param_3;
  piVar4 = FUN_0048c76c((int *)&PTR_TSaveGameHeader_vmt_000_0048c744,'\x01',0);
  param_1[3] = (int)piVar4;
  FUN_0048c83c(piVar4,(undefined *)local_8);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = (int)pcVar5;
  FUN_00403c80(&local_120,2);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


