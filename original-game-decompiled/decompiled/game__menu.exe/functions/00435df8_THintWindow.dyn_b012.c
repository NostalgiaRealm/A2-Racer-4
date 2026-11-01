
/* ==== THintWindow.dyn_b012 @ 00435df8 ==== 
 * signature: undefined THintWindow.dyn_b012(void)
 * body: 00435df8-00435e82
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
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x7e] == '\0') {
    TGroupBox_get_Caption((int)param_1,(int *)&puStack_8);
    LVar1 = FUN_00419338((int *)param_1[0x7c],puStack_8);
    TControl_set_Width(param_1,LVar1 + 6);
    TGroupBox_get_Caption((int)param_1,(int *)&puStack_c);
    LVar1 = FUN_00419354((int *)param_1[0x7c],puStack_c);
    TControl_set_Height(param_1,LVar1 + 4);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00435e8a;
  pcStack_18 = (code *)0x435e82;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


