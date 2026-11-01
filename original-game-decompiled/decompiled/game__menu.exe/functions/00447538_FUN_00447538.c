
/* ==== FUN_00447538 @ 00447538 ==== 
 * signature: uint __register FUN_00447538(int param_1)
 * body: 00447538-0044753d
 */

uint FUN_00447538(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1;
}


