
/* ==== FUN_00415c50 @ 00415c50 ==== 
 * signature: undefined __register FUN_00415c50(int param_1, char param_2)
 * body: 00415c50-00415c95
 */

void FUN_00415c50(int param_1,char param_2)

{
  int *piVar1;
  char acStack_10c [256];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_00403eb8(acStack_10c,*(undefined4 **)(param_1 + 8),0xff);
    piVar1 = (int *)FUN_0040324c(piVar1,acStack_10c);
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


