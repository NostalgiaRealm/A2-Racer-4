
/* ==== FUN_00402794 @ 00402794 ==== 
 * signature: undefined __register FUN_00402794(int param_1)
 * body: 00402794-004027a9
 */

void FUN_00402794(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_004aa028)();
    if (iVar1 != 0) {
      FUN_00402808(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}


