
/* ==== FUN_0048f3cc @ 0048f3cc ==== 
 * signature: undefined FUN_0048f3cc(void)
 * body: 0048f3cc-0048f3d3
 */

void FUN_0048f3cc(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 *unaff_ESI;
  int in_GS_OFFSET;
  undefined4 *in_stack_00000000;
  undefined4 in_stack_00000010;
  undefined2 in_stack_00000014;
  undefined4 uStack00000018;
  char *in_stack_0000001c;
  
  out(*unaff_ESI,param_2);
  uVar1 = in(in_stack_00000014);
  *in_stack_00000000 = uVar1;
  in_stack_0000001c[in_GS_OFFSET] = in_stack_0000001c[in_GS_OFFSET] + (char)in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c + (char)in_stack_0000001c;
  uStack00000018 = in_stack_00000010;
  FUN_0045f038((int)in_stack_0000001c,0x48f414,in_stack_0000001c[8]);
  FUN_0045ef0c((int)in_stack_0000001c,0x48f428,(uint)(byte)in_stack_0000001c[9]);
  FUN_0045ef0c((int)in_stack_0000001c,0x48f43c,*(undefined4 *)(in_stack_0000001c + 0x14));
  return;
}


