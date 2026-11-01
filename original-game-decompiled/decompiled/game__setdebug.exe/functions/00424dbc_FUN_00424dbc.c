
/* ==== FUN_00424dbc @ 00424dbc ==== 
 * signature: undefined4 __register FUN_00424dbc(int param_1)
 * body: 00424dbc-00424dd3
 */

undefined4 FUN_00424dbc(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x4f) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


