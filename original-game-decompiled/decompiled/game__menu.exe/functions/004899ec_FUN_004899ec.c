
/* ==== FUN_004899ec @ 004899ec ==== 
 * signature: undefined __register FUN_004899ec(int * param_1, int param_2, undefined4 * param_3)
 * body: 004899ec-00489b91
 */

void FUN_004899ec(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_160;
  char *pcVar4;
  undefined4 uStack_13c;
  code *pcStack_138;
  undefined1 *puStack_134;
  int local_128;
  int local_124 [3];
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_124[0] = 0;
  local_128 = 0;
  local_124[2] = 0;
  local_124[1] = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_134 = (undefined1 *)0x489a26;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStack_138 = thunk_FUN_004036bc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_10 = local_8;
  local_c = 0xb;
  puStack_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar4 = "GetImgBitmapFromFile";
  FUN_00403f9c(&local_14,3);
  iVar1 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar4);
  if (param_1 == (int *)0x0) {
    FUN_00402ee4(iRam00000000,local_118);
    FUN_00403e80(local_124 + 1,local_118);
    pcStackY_160 = " Self = nil";
    FUN_00403f9c(local_124 + 2,4);
    FUN_00403c40(local_124[2]);
  }
  if (param_2 == 0) {
    FUN_00402ee4(*param_1,local_118);
    FUN_00403e80(&local_128,local_118);
    FUN_00403f9c(local_124,4);
    FUN_00403c40(local_124[0]);
  }
  piVar3 = (int *)FUN_0041b45c(*(int **)(param_2 + 0x128));
  FUN_00489760(param_1,local_8,piVar3);
  *in_FS_OFFSET = pcStackY_160;
  FUN_00403c80(&local_128,4);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


