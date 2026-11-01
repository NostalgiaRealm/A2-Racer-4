
/* ==== TButton.dyn_b006 @ 0041fb64 ==== 
 * signature: undefined TButton.dyn_b006(void)
 * body: 0041fb64-0041fbd9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_b006(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
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
  TLabel_get_Caption((int)param_1,&iStack_8);
  cVar1 = FUN_00439e44(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),iStack_8);
  if (cVar1 != '\0') {
    cVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0041fbc4;
    }
  }
  TWinControl_dyn_b006((int)param_1,param_2);
LAB_0041fbc4:
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0041fbe1;
  pcStack_1c = (code *)0x41fbd9;
  FUN_004039b8(&iStack_8);
  return;
}


