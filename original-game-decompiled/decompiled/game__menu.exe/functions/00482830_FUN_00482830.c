
/* ==== FUN_00482830 @ 00482830 ==== 
 * signature: undefined __register FUN_00482830(int * param_1, int param_2)
 * body: 00482830-00482901
 */

void FUN_00482830(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  pcVar4 = "SetMusicVolume";
  FUN_00403f9c(&local_10,3);
  iVar1 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,0,(int)pcVar4);
  uVar3 = FUN_00482768();
  if (((char)uVar3 != '\0') && (param_1[6] != 0)) {
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x482940);
    FUN_00480fcc(param_2);
    (**(code **)(*(int *)param_1[6] + 0x3c))();
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = (int)pcVar4;
  FUN_00403c80(&local_14,2);
  return;
}


