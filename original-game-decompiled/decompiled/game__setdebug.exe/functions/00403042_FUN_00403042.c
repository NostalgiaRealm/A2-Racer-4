
/* ==== FUN_00403042 @ 00403042 ==== 
 * signature: undefined FUN_00403042(void)
 * body: 00403042-00403060
 */

void FUN_00403042(void)

{
  int *piVar1;
  int in_stack_0000002c;
  
  piVar1 = *(int **)(in_stack_0000002c + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + -4))(piVar1,0x81);
    FUN_00403064(piVar1);
  }
  FUN_00403488();
  return;
}


