
/* ==== THintWindow.dyn_b012 @ 0042bc88 ==== 
 * signature: undefined THintWindow.dyn_b012(void)
 * body: 0042bc88-0042bd12
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void THintWindow_dyn_b012(int *param_1)

{
  LONG LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined *puStack_c;
  undefined *puStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined *)0x0;
  puStack_c = (undefined *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x7e] == '\0') {
    TLabel_get_Caption((int)param_1,(int *)&puStack_8);
    LVar1 = FUN_00417290((int *)param_1[0x7c],puStack_8);
    TControl_set_Width(param_1,LVar1 + 6);
    TLabel_get_Caption((int)param_1,(int *)&puStack_c);
    LVar1 = FUN_004172ac((int *)param_1[0x7c],puStack_c);
    TControl_set_Height(param_1,LVar1 + 4);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0042bd1a;
  pcStack_18 = (code *)0x42bd12;
  FUN_004039dc((int *)&puStack_c,2);
  return;
}


