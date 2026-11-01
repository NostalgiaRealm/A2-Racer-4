
/* ==== FUN_0051fe80 @ 0051fe80 ==== 
 * signature: int __fastcall FUN_0051fe80(int * param_1)
 * body: 0051fe80-0051fea5
 */

int __fastcall FUN_0051fe80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1[1] + 0x10) != 0) {
    iVar1 = *(int *)(param_1[1] + 0x10) + 0x20;
    iVar2 = 2;
    do {
      if (**(int **)(iVar1 + 8) == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}


