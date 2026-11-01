
/* ==== FUN_00401c5c @ 00401c5c ==== 
 * signature: undefined __register FUN_00401c5c(uint * param_1, uint param_2)
 * body: 00401c5c-00401c8b
 */

void FUN_00401c5c(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_2 - 4) + (int)param_1);
  if (0xf < (int)param_2) {
    *puVar1 = 0x80000007;
    FUN_00401e18(param_1,param_2 - 4);
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
    *puVar1 = param_2 | 0x80000002;
  }
  return;
}


