
/* ==== FUN_004823ac @ 004823ac ==== 
 * signature: undefined __register FUN_004823ac(int * param_1, undefined4 * param_2, int param_3, char param_4)
 * body: 004823ac-0048252f
 */

void FUN_004823ac(int *param_1,undefined4 *param_2,int param_3,char param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 uStack_164;
  code *pcStack_160;
  undefined1 *puStack_15c;
  char *pcVar6;
  undefined4 uStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  int local_12c;
  undefined *local_128;
  undefined *local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_124 = (undefined *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_13c = (undefined1 *)0x4823e4;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_140 = thunk_FUN_004036bc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_18 = local_8;
  local_14 = 0xb;
  puStack_13c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_120);
  FUN_00403e80(&local_20,local_120);
  pcVar6 = "PlayWaveFromFile";
  puStack_15c = (undefined1 *)0x482437;
  FUN_00403f9c(&local_1c,3);
  puStack_15c = (undefined1 *)local_1c;
  pcStack_160 = (code *)0x482440;
  uVar3 = FUN_0045f46c();
  puVar2 = puStack_15c;
  puStack_15c = (undefined1 *)0x48244c;
  FUN_0045fa3c(uVar3,(int)puVar2,0,(int)pcVar6);
  puStack_15c = (undefined1 *)0x48245c;
  FUN_00403f28((int *)&local_10,local_8,(undefined4 *)&DAT_004825c0);
  puStack_15c = (undefined1 *)0x48246a;
  local_c = TDaviWave_vmt_02c((int *)&PTR_TPersistent_vmt_000_00453f9c,'\x01',(int *)0x0);
  bVar1 = false;
  pcStack_160 = thunk_FUN_004036bc;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_15c = &stack0xfffffffc;
  FUN_00403f28((int *)&local_124,(undefined4 *)param_1[3],local_10);
  uVar4 = FUN_004087a4(local_124);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00463388(param_1[5],(undefined *)local_10);
    if ((char)uVar4 != '\0') {
      uVar4 = FUN_00462f5c((int *)param_1[5],(undefined *)local_10,(uint)local_c);
      bVar1 = true;
    }
  }
  else {
    FUN_00403f28((int *)&local_128,(undefined4 *)param_1[3],local_10);
    uVar4 = FUN_00454340((uint)local_c,local_128);
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),param_4);
    FUN_004821f0(param_1,(int)local_c,param_3,param_4);
  }
  else {
    FUN_00403f28(&local_12c,(undefined4 *)"Unable to load: ",local_10);
    iVar5 = local_12c;
    uVar3 = FUN_0045f46c();
    uVar4 = 0x48251a;
    FUN_0045fe38(uVar3,iVar5);
  }
  *in_FS_OFFSET = uVar4;
  pcStack_160 = FUN_00482537;
  uStack_164 = 0x48252f;
  FUN_00402f9c(local_c);
  return;
}


