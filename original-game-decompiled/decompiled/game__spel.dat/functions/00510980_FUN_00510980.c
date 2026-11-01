
/* ==== FUN_00510980 @ 00510980 ==== 
 * signature: undefined __fastcall FUN_00510980(int param_1)
 * body: 00510980-005109ad
 */

void __fastcall FUN_00510980(int param_1)

{
  void *this;
  
  FUN_00510690(param_1);
  this = *(void **)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 0x10);
  FUN_0053b6a0(param_1);
  FUN_0053a2f0(this,param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffcfff;
  return;
}


