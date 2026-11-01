
/* ==== FUN_004404bc @ 004404bc ==== 
 * signature: undefined4 __register FUN_004404bc(int param_1)
 * body: 004404bc-004404cd
 */

undefined4 FUN_004404bc(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


