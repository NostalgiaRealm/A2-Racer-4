
/* ==== FUN_00451ac4 @ 00451ac4 ==== 
 * signature: undefined __register FUN_00451ac4(undefined4 * param_1)
 * body: 00451ac4-00451add
 */

void FUN_00451ac4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_00451b6c(param_1);
    return;
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  return;
}


