
/* ==== FUN_0041409c @ 0041409c ==== 
 * signature: undefined __register FUN_0041409c(int param_1, char param_2)
 * body: 0041409c-004140e1
 */

void FUN_0041409c(int param_1,char param_2)

{
  int *piVar1;
  char acStack_10c [256];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_00403c14(acStack_10c,*(undefined4 **)(param_1 + 8),0xff);
    piVar1 = (int *)FUN_00402fc4(piVar1,acStack_10c);
    if (piVar1 != (int *)0x0) {
      if (param_2 == '\0') {
        *piVar1 = 0;
      }
      else {
        *piVar1 = param_1;
      }
    }
  }
  return;
}


