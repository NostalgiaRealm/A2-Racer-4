
/* ==== TCustomGroupBox.dyn_b006 @ 00425d6c ==== 
 * signature: undefined TCustomGroupBox.dyn_b006(void)
 * body: 00425d6c-00425ddd
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGroupBox_dyn_b006(int *param_1,int param_2)

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
    cVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00434f30(param_1);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_00425dc8;
    }
  }
  TWinControl_dyn_b006((int)param_1,param_2);
LAB_00425dc8:
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00425de5;
  pcStack_1c = (code *)0x425ddd;
  FUN_00403c5c(&iStack_8);
  return;
}


