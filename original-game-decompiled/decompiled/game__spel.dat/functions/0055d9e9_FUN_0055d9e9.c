
/* ==== FUN_0055d9e9 @ 0055d9e9 ==== 
 * signature: int __cdecl FUN_0055d9e9(int param_1, int * param_2)
 * body: 0055d9e9-0055da0b
 */

int __cdecl FUN_0055d9e9(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


