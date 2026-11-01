
/* ==== FUN_00444618 @ 00444618 ==== 
 * signature: undefined __register FUN_00444618(int param_1)
 * body: 00444618-0044462a
 */

void FUN_00444618(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 5) = DAT_004ac7e4;
    DAT_004ac7e4 = param_1;
  }
  return;
}


