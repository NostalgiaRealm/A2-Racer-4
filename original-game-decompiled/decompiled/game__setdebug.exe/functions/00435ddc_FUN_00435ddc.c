
/* ==== FUN_00435ddc @ 00435ddc ==== 
 * signature: undefined4 __register FUN_00435ddc(int param_1)
 * body: 00435ddc-00435ded
 */

undefined4 FUN_00435ddc(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


