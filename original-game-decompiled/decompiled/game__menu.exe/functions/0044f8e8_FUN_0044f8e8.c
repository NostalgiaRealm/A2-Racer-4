
/* ==== FUN_0044f8e8 @ 0044f8e8 ==== 
 * signature: undefined __register FUN_0044f8e8(void)
 * body: 0044f8e8-0044f9a8
 */

void FUN_0044f8e8(void)

{
  int *piVar1;
  int in_stack_00000004;
  POINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(in_stack_00000004 + -4);
  local_c = piVar1[2];
  local_8 = piVar1[1];
  local_14 = *piVar1;
  local_10 = piVar1[3];
  TPen_set_Color(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x10),
                 *(undefined4 *)(in_stack_00000004 + -0xc));
  local_2c.x = local_14;
  local_2c.y = local_10;
  local_24 = *piVar1;
  local_20 = piVar1[1];
  local_1c = local_c;
  local_18 = local_8;
  FUN_00419180(*(int **)(in_stack_00000004 + -8),&local_2c,2);
  TPen_set_Color(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x10),
                 *(undefined4 *)(in_stack_00000004 + 0xc));
  local_1c = local_14 + -1;
  local_2c.x = local_c;
  local_2c.y = local_8;
  local_24 = piVar1[2];
  local_20 = piVar1[3];
  local_18 = local_10;
  local_14 = local_1c;
  FUN_00419180(*(int **)(in_stack_00000004 + -8),&local_2c,2);
  return;
}


