
/* ==== FUN_00410468 @ 00410468 ==== 
 * signature: undefined __register FUN_00410468(undefined4 * param_1, int param_2)
 * body: 00410468-004104a1
 */

void FUN_00410468(undefined4 *param_1,int param_2)

{
  if ((param_2 < (int)param_1[2]) || (0x7ffffff < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab854,param_2);
  }
  if (param_2 != param_1[3]) {
    FUN_004027ac(param_1 + 1,param_2 << 2);
    param_1[3] = param_2;
  }
  return;
}


