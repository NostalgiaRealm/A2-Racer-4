
/* ==== FUN_004606d0 @ 004606d0 ==== 
 * signature: undefined __register FUN_004606d0(int * param_1, int * param_2, int param_3)
 * body: 004606d0-004608c6
 */

void FUN_004606d0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined4 uStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = (undefined4 *)0x0;
  local_128 = (undefined4 *)0x0;
  local_124 = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  pcStack_140 = thunk_FUN_004036bc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = 0;
  local_10 = param_3;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar3 = "LoadFromIniFile";
  FUN_00403f9c(&local_14,3);
  iVar2 = local_14;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar2,2,(int)pcVar3);
  param_1[4] = param_3;
  FUN_004085ac(param_3,(int *)&local_11c);
  FUN_00403f28(&local_8,(undefined4 *)&DAT_00460908,local_11c);
  (**(code **)*param_2)(param_2,local_8,&DAT_00460918,&local_120,0);
  FUN_00403cb0(param_1 + 2,local_120);
  iVar2 = (**(code **)(*param_2 + 8))(param_2,local_8,"IndexInGame",0);
  param_1[3] = iVar2;
  (**(code **)*param_2)(param_2,local_8,"winracetext",&local_124,&DAT_0046093c);
  FUN_00403cb0(param_1 + 7,local_124);
  (**(code **)*param_2)(param_2,local_8,"LockedText",&local_128,&DAT_0046093c);
  FUN_00403cb0(param_1 + 5,local_128);
  (**(code **)*param_2)(param_2,local_8,"Story",&local_12c,&DAT_0046093c);
  FUN_00403cb0(param_1 + 6,local_12c);
  iVar2 = (**(code **)(*param_2 + 8))(param_2,local_8,"Speed",0);
  param_1[8] = iVar2;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,local_8,"Brakes",0);
  param_1[10] = iVar2;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,local_8,"Accell",0);
  param_1[9] = iVar2;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,local_8,"Handling");
  param_1[0xb] = iVar2;
  *in_FS_OFFSET = 0;
  FUN_00403c80((int *)&local_12c,5);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c(&local_8);
  return;
}


