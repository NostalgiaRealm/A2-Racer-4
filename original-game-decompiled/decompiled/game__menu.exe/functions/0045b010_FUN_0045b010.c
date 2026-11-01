
/* ==== FUN_0045b010 @ 0045b010 ==== 
 * signature: undefined __register FUN_0045b010(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0045b010-0045b05b
 */

void FUN_0045b010(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    piVar1 = FUN_0045b0ac(FUN_0045af10,param_2,param_3);
    FUN_0045b504(piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(int *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x24) != '\0')) &&
     (*(short *)(param_1 + 0x3a) != 0)) {
    piVar1 = FUN_0045b0ac(FUN_0045af10,param_2,param_3);
    FUN_0045b494((int)piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


