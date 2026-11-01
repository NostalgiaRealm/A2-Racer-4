
/* ==== FUN_004026d0 @ 004026d0 ==== 
 * signature: undefined __register FUN_004026d0(int param_1)
 * body: 004026d0-004026e5
 */

void FUN_004026d0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_00446020)();
    if (iVar1 != 0) {
      FUN_00402744(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}


