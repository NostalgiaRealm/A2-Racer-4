
/* ==== FUN_004ce3e0 @ 004ce3e0 ==== 
 * signature: undefined __cdecl FUN_004ce3e0(int param_1, int * param_2)
 * body: 004ce3e0-004ce40d
 */

void __cdecl FUN_004ce3e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while (iVar2 != -1) {
    FUN_004ce390((int *)(param_1 + iVar2 * 0xc));
    piVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar2 = *piVar1;
  }
  return;
}


