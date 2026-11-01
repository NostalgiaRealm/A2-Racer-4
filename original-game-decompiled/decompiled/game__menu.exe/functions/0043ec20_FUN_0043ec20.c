
/* ==== FUN_0043ec20 @ 0043ec20 ==== 
 * signature: undefined __register FUN_0043ec20(void)
 * body: 0043ec20-0043ec68
 */

void FUN_0043ec20(void)

{
  BOOL BVar1;
  int in_stack_00000004;
  undefined4 local_158 [38];
  undefined4 local_c0;
  undefined4 local_bc;
  
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    **(undefined4 **)(in_stack_00000004 + -4) = local_c0;
    **(undefined4 **)(in_stack_00000004 + 8) = local_bc;
  }
  return;
}


