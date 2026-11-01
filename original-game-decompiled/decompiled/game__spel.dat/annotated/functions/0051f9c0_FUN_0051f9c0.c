
/* ==== FUN_0051f9c0 @ 0051f9c0 ==== 
 * signature: undefined __thiscall FUN_0051f9c0(void * this, int param_1)
 * body: 0051f9c0-0051f9e5
 */

void __thiscall FUN_0051f9c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0051f980(this,*(int **)(*(int *)(param_1 + 8) + iVar1 * 4));
  }
  return;
}


