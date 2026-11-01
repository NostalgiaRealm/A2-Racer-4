
/* ==== FUN_0045b504 @ 0045b504 ==== 
 * signature: undefined __register FUN_0045b504(int * param_1, int param_2)
 * body: 0045b504-0045b5db
 */

void FUN_0045b504(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
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
  puVar1 = &stack0xfffffffc;
  if (param_1[1] != 0) {
    iVar2 = FUN_0041ff54(param_1[2],param_2);
    puVar1 = puStack_118;
    if (iVar2 != -1) goto LAB_0045b588;
  }
  puStack_118 = puVar1;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  pcStack_130 = "Cannot remove timer because it is not a valid timer.";
  FUN_00403f9c(&local_8,4);
  FUN_00403c40(local_8);
LAB_0045b588:
  if (((int *)param_1[2])[2] == 1) {
    FUN_0040c968(param_1 + 1);
    FUN_0041ff88((int *)param_1[2],param_2);
  }
  else {
    FUN_0041ff88((int *)param_1[2],param_2);
    uVar3 = FUN_0045b19c((int)param_1);
    iVar2 = FUN_0045b200((int)param_1);
    TTimer_set_Interval(iVar2,uVar3);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&local_c,2);
  return;
}


