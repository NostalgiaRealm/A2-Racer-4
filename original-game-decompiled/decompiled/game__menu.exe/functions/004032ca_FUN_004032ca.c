
/* ==== FUN_004032ca @ 004032ca ==== 
 * signature: undefined FUN_004032ca(void)
 * body: 004032ca-004032e8
 */

void FUN_004032ca(void)

{
  int *piVar1;
  int in_stack_0000002c;
  
  piVar1 = *(int **)(in_stack_0000002c + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + -4))(piVar1,0x81);
    FUN_004032ec(piVar1);
  }
  FUN_00403710();
  return;
}


