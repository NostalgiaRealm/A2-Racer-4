
/* ==== FUN_0040595c @ 0040595c ==== 
 * signature: undefined __register FUN_0040595c(int param_1)
 * body: 0040595c-00405976
 */

void FUN_0040595c(int param_1)

{
  undefined4 in_stack_00000000;
  
  if (param_1 < 0) {
    if (DAT_004ac014 != (code *)0x0) {
      param_1 = (*DAT_004ac014)(param_1,in_stack_00000000);
    }
    FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),0x18));
    return;
  }
  return;
}


