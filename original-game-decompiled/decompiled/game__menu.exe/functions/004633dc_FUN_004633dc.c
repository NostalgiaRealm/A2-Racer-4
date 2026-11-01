
/* ==== FUN_004633dc @ 004633dc ==== 
 * signature: undefined __register FUN_004633dc(int * param_1, undefined * param_2, int * param_3)
 * body: 004633dc-00463508
 */

void FUN_004633dc(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  code *pcStackY_164;
  code *pcStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar3;
  undefined4 uStack_138;
  code *pcStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x46340a;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_134 = thunk_FUN_004036bc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "GetTarga";
  iStackY_150 = 0x46345d;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x463466;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x463472;
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  if (param_3 == (int *)0x0) {
    iStackY_150 = 0x463483;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x463494;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_00463558;
    pcStackY_158 = "GetTarga";
    pcStackY_15c = " aTarga = nil";
    pcStackY_160 = (code *)0x4634b9;
    FUN_00403f9c(&local_120,4);
    pcStackY_160 = (code *)0x4634ce;
    FUN_00403c40(local_120);
  }
  pcStackY_160 = (code *)0x4634d8;
  local_c = (int *)FUN_004635b8(param_1,local_8);
  pcStackY_164 = thunk_FUN_004036bc;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  pcStackY_160 = (code *)&stack0xfffffffc;
  (**(code **)(*param_3 + 0x50))(param_3,local_c);
  *in_FS_OFFSET = uStackY_168;
  pcStackY_160 = FUN_00463510;
  pcStackY_164 = (code *)0x463508;
  FUN_00402f9c(local_c);
  return;
}


