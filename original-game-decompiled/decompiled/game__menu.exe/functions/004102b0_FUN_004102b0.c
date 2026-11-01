
/* ==== FUN_004102b0 @ 004102b0 ==== 
 * signature: undefined4 __register FUN_004102b0(undefined4 * param_1, int param_2)
 * body: 004102b0-004102d6
 */

undefined4 FUN_004102b0(undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  return *(undefined4 *)(param_1[1] + param_2 * 4);
}


