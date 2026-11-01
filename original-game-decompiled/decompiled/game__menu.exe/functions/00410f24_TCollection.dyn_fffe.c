
/* ==== TCollection.dyn_fffe @ 00410f24 ==== 
 * signature: undefined __register TCollection.dyn_fffe(int * param_1, int * param_2)
 * body: 00410f24-00410fd1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCollection_dyn_fffe(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_130;
  int iStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(param_2,local_10c);
  iVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    FUN_00403178(piVar2,&local_8,extraout_ECX_01);
    if (local_8 != 0) {
      FUN_00410fec(param_1,&local_c);
      if (local_c != 0) {
        iStack_130 = local_c;
        FUN_00403f9c(param_2,3);
      }
    }
  }
  *in_FS_OFFSET = iStack_130;
  FUN_00403c80(&local_c,2);
  return;
}


