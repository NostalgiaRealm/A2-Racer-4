
/* ==== FUN_0050b250 @ 0050b250 ==== 
 * signature: bool __stdcall FUN_0050b250(int * param_1, int * param_2, byte param_3)
 * body: 0050b250-0050b2f4
 */

bool FUN_0050b250(int *param_1,int *param_2,byte param_3)

{
  if (*param_2 + 2 <= *param_1 << (param_3 & 0x1f)) {
    return false;
  }
  if (param_2[1] + 2 <= param_1[1] << (param_3 & 0x1f)) {
    return false;
  }
  if (param_2[2] + 2 <= param_1[2] << (param_3 & 0x1f)) {
    return false;
  }
  if (*param_1 + 2 << (param_3 & 0x1f) <= *param_2) {
    return false;
  }
  if (param_1[1] + 2 << (param_3 & 0x1f) <= param_2[1]) {
    return false;
  }
  return param_2[2] < param_1[2] + 2 << (param_3 & 0x1f);
}


