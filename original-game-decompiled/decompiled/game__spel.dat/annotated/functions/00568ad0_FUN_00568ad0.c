
/* ==== FUN_00568ad0 @ 00568ad0 ==== 
 * signature: undefined __thiscall FUN_00568ad0(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, double param_7, double param_8, double param_9, void * param_10, void * param_11)
 * body: 00568ad0-00568c48
 */

void __thiscall
FUN_00568ad0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,double param_7,double param_8,double param_9,
            void *param_10,void *param_11)

{
  float10 fVar1;
  int local_10c;
  undefined8 local_108;
  double local_100 [16];
  double local_80 [16];
  
  local_10c = 0;
  while( true ) {
    local_108 = ((param_7 - param_8) *
                ((double)CONCAT44(param_6,param_5) - (double)CONCAT44(param_4,param_3))) /
                (param_9 - param_8) + (double)CONCAT44(param_4,param_3);
    if (((byte)local_10c & 3) == 3) {
      if (0x40 < local_10c) {
        *param_2 = param_3;
        param_2[1] = param_4;
        return;
      }
      local_108 = (((double)CONCAT44(param_6,param_5) - local_108) +
                  ((double)CONCAT44(param_4,param_3) - local_108)) * 0.375 + local_108;
    }
    FUN_004f2c40(param_10,local_108,local_80);
    FUN_004f2c40(param_11,local_108,local_100);
    fVar1 = (float10)(**(code **)*param_1)(local_80,local_100);
    if (ABS(fVar1 - (float10)param_7) < (float10)1e-08) break;
    local_10c = local_10c + 1;
    if (fVar1 < (float10)param_7) {
      param_9 = (double)fVar1;
      param_5 = (undefined4)local_108;
      param_6 = local_108._4_4_;
    }
    else {
      param_8 = (double)fVar1;
      param_3 = (undefined4)local_108;
      param_4 = local_108._4_4_;
    }
  }
  *param_2 = (undefined4)local_108;
  param_2[1] = local_108._4_4_;
  return;
}


