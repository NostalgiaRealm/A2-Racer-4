
/* ==== FUN_0045f6f0 @ 0045f6f0 ==== 
 * signature: undefined4 * __stdcall FUN_0045f6f0(void)
 * body: 0045f6f0-0045f818
 */

undefined4 * FUN_0045f6f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float *in_stack_0000005c;
  float in_stack_ffffff80;
  float in_stack_ffffff84;
  float in_stack_ffffff88;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aa4b;
  local_c = ExceptionList;
  in_stack_0000004c = -in_stack_0000004c;
  in_stack_00000048 = -in_stack_00000048;
  in_stack_00000044 = -in_stack_00000044;
  ExceptionList = &local_c;
  local_24 = in_stack_00000044;
  local_20 = in_stack_00000048;
  local_1c = in_stack_0000004c;
  FUN_004b42a0(&stack0x00000044,&local_24,(int)&stack0x00000004);
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  fStack00000034 = *in_stack_0000005c;
  local_10 = 0x3f800000;
  fStack00000038 = in_stack_0000005c[1];
  fStack0000003c = in_stack_0000005c[2];
  in_stack_00000044 = fStack00000034;
  in_stack_00000048 = fStack00000038;
  in_stack_0000004c = fStack0000003c;
  in_stack_0000005c = operator_new(0xb0);
  local_4 = 0;
  if (in_stack_0000005c != (void *)0x0) {
    puVar1 = (undefined4 *)&stack0xffffff80;
    for (iVar2 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *(undefined4 *)register0x00000010;
      puVar1 = puVar1 + 1;
    }
    puVar1 = FUN_0045f820(in_stack_0000005c,10,in_stack_ffffff80,in_stack_ffffff84,in_stack_ffffff88
                         );
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


