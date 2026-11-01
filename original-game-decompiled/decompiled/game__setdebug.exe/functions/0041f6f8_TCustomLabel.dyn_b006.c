
/* ==== TCustomLabel.dyn_b006 @ 0041f6f8 ==== 
 * signature: undefined TCustomLabel.dyn_b006(void)
 * body: 0041f6f8-0041f784
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomLabel_dyn_b006(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int iStack_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_1[0x4a] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar2 != '\0') && ((char)param_1[0x4c] != '\0')) {
      TLabel_get_Caption((int)param_1,&iStack_8);
      cVar2 = FUN_00439e44(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),iStack_8);
      if (cVar2 != '\0') {
        piVar1 = (int *)param_1[0x4a];
        cVar2 = FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
        if (cVar2 != '\0') {
          (**(code **)(*piVar1 + 0xb0))();
          *(undefined4 *)(param_2 + 0xc) = 1;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0041f78c;
  pcStack_1c = (code *)0x41f784;
  FUN_004039b8(&iStack_8);
  return;
}


