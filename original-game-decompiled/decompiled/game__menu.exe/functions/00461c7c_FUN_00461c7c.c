
/* ==== FUN_00461c7c @ 00461c7c ==== 
 * signature: undefined4 __register FUN_00461c7c(int param_1, uint param_2)
 * body: 00461c7c-00461c83
 */

undefined4 FUN_00461c7c(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0x5c + (param_2 & 0x7f) * 4);
}


