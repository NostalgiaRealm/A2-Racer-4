
/* ==== FUN_004b9840 @ 004b9840 ==== 
 * signature: undefined __cdecl FUN_004b9840(undefined4 param_1, int param_2, int param_3, int * param_4)
 * body: 004b9840-004b988c
 */

void __cdecl FUN_004b9840(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    iVar2 = 0;
    iVar1 = param_2;
    while (iVar1 = iVar1 >> 1, iVar1 != param_3) {
      iVar2 = iVar2 + iVar1;
    }
    *param_4 = param_2;
    param_4[1] = iVar2;
    param_4[2] = param_2 + iVar1;
    param_4[3] = iVar2 + iVar1;
    return;
  }
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = param_2;
  param_4[2] = param_2;
  return;
}


