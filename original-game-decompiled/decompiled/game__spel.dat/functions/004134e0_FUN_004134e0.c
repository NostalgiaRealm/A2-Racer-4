
/* ==== FUN_004134e0 @ 004134e0 ==== 
 * signature: int __cdecl FUN_004134e0(int param_1)
 * body: 004134e0-0041351b
 */

int __cdecl FUN_004134e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (DAT_005ce9e8 != param_1) {
    puVar3 = &DAT_005ce9e8;
    do {
      if (DAT_005d2ab0 <= iVar2) break;
      piVar1 = puVar3 + 0xa5;
      puVar3 = puVar3 + 0xa5;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != param_1);
  }
  if (iVar2 == DAT_005d2ab0) {
    iVar2 = -1;
  }
  return iVar2;
}


