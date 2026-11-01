
/* ==== FUN_00440964 @ 00440964 ==== 
 * signature: undefined __register FUN_00440964(int * param_1, int param_2)
 * body: 00440964-0044099b
 */

void FUN_00440964(int *param_1,int param_2)

{
  param_1[0xb] = param_2;
  FUN_00440854(param_1);
  if ((PTR_DAT_004aba14[9] != '\0') && (param_2 != 0)) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_004408e8(param_1);
    }
    else {
      FUN_00440e1c(param_1);
    }
  }
  return;
}


