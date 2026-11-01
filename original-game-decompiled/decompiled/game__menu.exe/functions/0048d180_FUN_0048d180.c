
/* ==== FUN_0048d180 @ 0048d180 ==== 
 * signature: undefined __register FUN_0048d180(int * param_1, int param_2)
 * body: 0048d180-0048d219
 */

void FUN_0048d180(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  char *pcVar3;
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
  pcVar3 = "SetCharacterIx";
  FUN_00403f9c(&local_10,3);
  iVar1 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  param_1[2] = param_2;
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403c80(&local_14,2);
  return;
}


