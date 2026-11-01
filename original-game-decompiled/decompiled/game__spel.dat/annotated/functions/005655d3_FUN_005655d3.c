
/* ==== FUN_005655d3 @ 005655d3 ==== 
 * signature: uint __thiscall FUN_005655d3(void * this, uint param_1, uint param_2)
 * body: 005655d3-00565607
 */

uint __thiscall FUN_005655d3(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_0056561e(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_005656b0(uVar1);
  return uVar1;
}


