
/* ==== FUN_0054bc20 @ 0054bc20 ==== 
 * signature: int * __fastcall FUN_0054bc20(int * param_1)
 * body: 0054bc20-0054bc69
 */

int * __fastcall FUN_0054bc20(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((*(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 4) & 6) == 0) &&
     (iVar2 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))(),
     iVar2 == -1)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0054c6db();
  }
  return param_1;
}


