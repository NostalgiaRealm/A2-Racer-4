
/* ==== FUN_00489eb8 @ 00489eb8 ==== 
 * signature: undefined __register FUN_00489eb8(int * param_1, undefined4 * param_2, int * param_3)
 * body: 00489eb8-0048a098
 */

void FUN_00489eb8(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_16c;
  char *pcVar5;
  undefined4 uStack_148;
  code *pcStack_144;
  undefined1 *puStack_140;
  int local_130;
  int local_12c;
  undefined *local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_130 = 0;
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = (undefined4 *)0x0;
  puStack_140 = (undefined1 *)0x489efc;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_144 = thunk_FUN_004036bc;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_140 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar5 = "GetTargaFromFile";
  FUN_00403f9c(&local_18,3);
  iVar1 = local_18;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar5);
  if (param_3 == (int *)0x0) {
    FUN_00402ee4(*param_1,local_11c);
    FUN_00403e80(&local_124,local_11c);
    pcStackY_16c = " Targa = nil";
    FUN_00403f9c(&local_120,4);
    FUN_00403c40(local_120);
  }
  FUN_00403f28((int *)&local_c,local_8,(undefined4 *)&DAT_0048a120);
  FUN_00403f28((int *)&local_128,(undefined4 *)param_1[2],local_c);
  uVar4 = FUN_004087a4(local_128);
  if ((char)uVar4 == '\0') {
    cVar2 = FUN_00463388(param_1[1],(undefined *)local_c);
    if (cVar2 == '\0') {
      FUN_00403f28(&local_130,(undefined4 *)"Unable to load: ",local_c);
      iVar1 = local_130;
      uVar3 = FUN_0045f46c();
      FUN_0045fe38(uVar3,iVar1);
    }
    else {
      FUN_004633dc((int *)param_1[1],(undefined *)local_c,param_3);
    }
  }
  else {
    FUN_00403f28(&local_12c,(undefined4 *)param_1[2],local_c);
    (**(code **)(*param_3 + 0x48))(param_3,local_12c);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcStackY_16c;
  FUN_00403c80(&local_130,5);
  FUN_00403c80(&local_1c,2);
  FUN_00403c80((int *)&local_c,2);
  return;
}


