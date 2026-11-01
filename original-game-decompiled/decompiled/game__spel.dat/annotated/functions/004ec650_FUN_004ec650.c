
/* ==== FUN_004ec650 @ 004ec650 ==== 
 * signature: int __fastcall FUN_004ec650(int param_1)
 * body: 004ec650-004ec665
 */

int __fastcall FUN_004ec650(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(*(int *)(param_1 + 4) + 8) - iVar1 >> 3;
}


