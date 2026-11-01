
/* ==== FUN_00403c14 @ 00403c14 ==== 
 * signature: undefined __register FUN_00403c14(undefined1 * param_1, undefined4 * param_2, uint param_3)
 * body: 00403c14-00403c35
 */

void FUN_00403c14(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[-1], uVar1 != 0)) {
    if ((int)uVar1 <= (int)param_3) {
      param_3 = uVar1;
    }
    *param_1 = (char)param_3;
    FUN_004027d0(param_2,(undefined4 *)(param_1 + 1),param_3);
    return;
  }
  *param_1 = 0;
  return;
}


