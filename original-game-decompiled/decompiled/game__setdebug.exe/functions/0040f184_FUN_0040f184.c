
/* ==== FUN_0040f184 @ 0040f184 ==== 
 * signature: undefined __register FUN_0040f184(undefined4 * param_1, int param_2)
 * body: 0040f184-0040f1bd
 */

void FUN_0040f184(undefined4 *param_1,int param_2)

{
  if ((param_2 < (int)param_1[2]) || (0x7ffffff < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446c40,param_2);
  }
  if (param_2 != param_1[3]) {
    FUN_004026e8(param_1 + 1,param_2 << 2);
    param_1[3] = param_2;
  }
  return;
}


