
/* ==== FUN_00440db0 @ 00440db0 ==== 
 * signature: undefined __cdecl FUN_00440db0(uint * param_1, uint param_2)
 * body: 00440db0-00440de6
 */

void __cdecl FUN_00440db0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((param_2 & 0xffff & 1 << ((byte)uVar1 & 0x1f)) != 0) {
      uVar1 = ~(1 << ((byte)uVar1 & 0x1f)) & param_2 & 0xffff;
      *param_1 = uVar1 << 0x10 | uVar1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}


