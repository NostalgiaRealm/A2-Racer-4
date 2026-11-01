
/* ==== FUN_00431218 @ 00431218 ==== 
 * signature: undefined __register FUN_00431218(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00431218-00431236
 */

void FUN_00431218(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (0 < param_1[0x14]) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  if ((char)param_1[0x13] != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


