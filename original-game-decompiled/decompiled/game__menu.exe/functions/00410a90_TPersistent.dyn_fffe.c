
/* ==== TPersistent.dyn_fffe @ 00410a90 ==== 
 * signature: undefined TPersistent.dyn_fffe(void)
 * body: 00410a90-00410b24
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPersistent_dyn_fffe(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_12c;
  int iStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_108 [256];
  int iStack_8;
  
  puStack_118 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_11c = &UNK_00410b25;
  iStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_120;
  FUN_00402ee4(*param_1,abStack_108);
  FUN_00403e80(param_2,abStack_108);
  iVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    FUN_00403178(piVar2,&iStack_8,extraout_ECX_01);
    if (iStack_8 != 0) {
      iStack_12c = *param_2;
      FUN_00403f9c(param_2,3);
    }
  }
  *in_FS_OFFSET = iStack_12c;
  FUN_00403c5c(&iStack_8);
  return;
}


