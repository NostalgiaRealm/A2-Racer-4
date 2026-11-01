
/* ==== FUN_004d5345 @ 004d5345 ==== 
 * signature: undefined __fastcall FUN_004d5345(undefined4 param_1, void * param_2)
 * body: 004d5345-004d537c
 */

void __fastcall FUN_004d5345(undefined4 param_1,void *param_2)

{
  uint in_EAX;
  int *piVar1;
  void *unaff_ESI;
  int *in_stack_00000060;
  int in_stack_00000064;
  
  piVar1 = FUN_004d5bc0((int *)&stack0x00000014,in_stack_00000064,param_2,unaff_ESI,param_1,
                        &stack0x0000001c,in_EAX & 0xffffff6c);
  *in_stack_00000060 = *piVar1;
  in_stack_00000060[1] = piVar1[1];
  return;
}


