
/* ==== FUN_004349b8 @ 004349b8 ==== 
 * signature: undefined FUN_004349b8(void)
 * body: 004349b8-004349fd
 */

void FUN_004349b8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_00434938(*(int *)(param_1 + 0x58));
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    iVar2 = FUN_004349a0(param_1);
    if (param_2 != iVar2) {
      piVar1 = *(int **)(param_1 + 0x58);
      FUN_00434c88(piVar1,param_1);
      FUN_00434ac4(piVar1,param_2,param_1);
    }
  }
  return;
}


