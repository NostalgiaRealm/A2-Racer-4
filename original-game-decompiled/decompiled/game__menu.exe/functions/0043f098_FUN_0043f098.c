
/* ==== FUN_0043f098 @ 0043f098 ==== 
 * signature: undefined FUN_0043f098(void)
 * body: 0043f098-0043f0dd
 */

void FUN_0043f098(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_0043f018(*(int *)(param_1 + 0x58));
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    iVar2 = FUN_0043f080(param_1);
    if (param_2 != iVar2) {
      piVar1 = *(int **)(param_1 + 0x58);
      FUN_0043f368(piVar1,param_1);
      FUN_0043f1a4(piVar1,param_2,param_1);
    }
  }
  return;
}


