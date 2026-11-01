
/* ==== FUN_00452318 @ 00452318 ==== 
 * signature: undefined FUN_00452318(void)
 * body: 00452318-0045235a
 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452318(char *param_1,char *param_2)

{
  char unaff_BH;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000000;
  
  *param_2 = *param_2 + unaff_BH;
  *param_1 = *param_1 + (char)param_1;
  *param_1 = *param_1 + (char)param_1;
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  in((short)param_2);
  *(int *)(in_stack_00000000 + -4) = unaff_EBP;
  *(code **)(in_stack_00000000 + -8) = thunk_FUN_004036bc;
  *(undefined4 *)(in_stack_00000000 + -0xc) = *in_FS_OFFSET;
  *in_FS_OFFSET = in_stack_00000000 + -0xc;
  _DAT_004ac86c = _DAT_004ac86c + 1;
  if (_DAT_004ac86c == 0) {
    *(undefined4 *)(in_stack_00000000 + -0x10) = 0x452343;
    FUN_004042b4((undefined4 *)&DAT_004aab38);
    *(undefined4 *)(in_stack_00000000 + -0x10) = 0x45234d;
    FUN_004042b4((undefined4 *)&DAT_004aab34);
  }
  *in_FS_OFFSET = *(undefined4 *)(in_stack_00000000 + -0xc);
  *(code **)(in_stack_00000000 + -4) = FUN_00452362;
  return;
}


