
/* ==== TCustomGDIButton.dyn_b006 @ 00468380 ==== 
 * signature: undefined TCustomGDIButton.dyn_b006(void)
 * body: 00468380-00468409
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_b006(int *param_1,int param_2)

{
  char cVar1;
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
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_get_Caption((int)param_1,&iStack_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),iStack_8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((((cVar1 != '\0') && (*(char *)((int)param_1 + 0x47) != '\0')) && (param_1[9] != 0)) &&
       (*(char *)(param_1[9] + 0x168) != '\0')) {
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_004683f4;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
LAB_004683f4:
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00468411;
  pcStack_1c = (code *)0x468409;
  FUN_00403c5c(&iStack_8);
  return;
}


