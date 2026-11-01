
/* ==== FUN_0046ca60 @ 0046ca60 ==== 
 * signature: undefined __register FUN_0046ca60(void)
 * body: 0046ca60-0046cade
 */

void FUN_0046ca60(void)

{
  VARIANTARG *in_stack_00000004;
  short *in_stack_00000008;
  char *in_stack_0000000c;
  undefined4 local_108 [64];
  int *local_8;
  
  if (*in_stack_00000008 == 9) {
    local_8 = *(int **)(in_stack_00000008 + 4);
  }
  else if (*in_stack_00000008 == 0x4009) {
    local_8 = (int *)**(undefined4 **)(in_stack_00000008 + 4);
  }
  else {
    FUN_0046ca48();
  }
  FUN_0046c968(local_8,in_stack_0000000c + (byte)in_stack_0000000c[1] + 3,
               (byte)in_stack_0000000c[2] + 1,local_108);
  if (in_stack_00000004 != (VARIANTARG *)0x0) {
    FUN_004049ec(in_stack_00000004);
  }
  FUN_0046c638(local_8,in_stack_0000000c,local_108,in_stack_00000004,(uint *)&stack0x00000010);
  return;
}


