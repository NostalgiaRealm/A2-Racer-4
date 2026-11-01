
/* ==== FUN_00539980 @ 00539980 ==== 
 * signature: uint * __fastcall FUN_00539980(int param_1)
 * body: 00539980-00539993
 */

uint * __fastcall FUN_00539980(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(uint *)(param_1 + 0x14) & 0xfffffff0);
  return puVar1 + ((*puVar1 & 0xfff) + 1) * -4;
}


