
/* ==== FUN_00403c40 @ 00403c40 ==== 
 * signature: undefined __register FUN_00403c40(undefined4 param_1)
 * body: 00403c40-00403c59
 */

void FUN_00403c40(undefined4 param_1)

{
  if (DAT_004ac018 != (code *)0x0) {
    (*DAT_004ac018)();
    return;
  }
  FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),0x15));
  return;
}


