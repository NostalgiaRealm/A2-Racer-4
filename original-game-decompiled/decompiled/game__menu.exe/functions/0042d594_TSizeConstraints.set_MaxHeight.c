
/* ==== TSizeConstraints.set_MaxHeight @ 0042d594 ==== 
 * signature: undefined TSizeConstraints.set_MaxHeight(void)
 * body: 0042d594-0042d639
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TSizeConstraints_set_MaxHeight(int *param_1,int param_2,uint param_3)

{
  if (param_2 == 0) {
    if (param_3 != param_1[2]) {
      param_1[2] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[4])) {
        param_1[4] = param_3;
      }
      FUN_00403178(param_1,0xffffffff,param_3);
      return;
    }
  }
  else if (param_2 == 1) {
    if (param_3 != param_1[3]) {
      param_1[3] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[5])) {
        param_1[5] = param_3;
      }
      FUN_00403178(param_1,0,param_3);
      return;
    }
  }
  else if (param_2 == 2) {
    if (param_3 != param_1[4]) {
      param_1[4] = param_3;
      if ((param_1[2] != 0) && ((uint)param_1[2] < param_3)) {
        param_1[2] = param_3;
      }
      FUN_00403178(param_1,0,param_3);
      return;
    }
  }
  else if ((param_2 == 3) && (param_3 != param_1[5])) {
    param_1[5] = param_3;
    if ((param_1[3] != 0) && ((uint)param_1[3] < param_3)) {
      param_1[3] = param_3;
    }
    FUN_00403178(param_1,0,param_3);
  }
  return;
}


