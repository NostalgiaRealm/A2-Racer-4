
/* ==== FUN_004d4c50 @ 004d4c50 ==== 
 * signature: bool __fastcall FUN_004d4c50(int * param_1)
 * body: 004d4c50-004d4cc3
 */

bool __fastcall FUN_004d4c50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  if ((*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) &&
     (piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c), piVar1 != (int *)0x0)) {
    bVar2 = false;
    if (((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) &&
       (iVar3 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))(),
       iVar3 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0054c6db();
    }
  }
  return *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0;
}


