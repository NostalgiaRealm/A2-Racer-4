
/* ==== FUN_004d77a0 @ 004d77a0 ==== 
 * signature: int * __fastcall FUN_004d77a0(int * param_1)
 * body: 004d77a0-004d77f0
 */

int * __fastcall FUN_004d77a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((*(byte *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) & 6) == 0) &&
     (iVar2 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))(),
     iVar2 == -1)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0054c6db();
  }
  return param_1;
}


