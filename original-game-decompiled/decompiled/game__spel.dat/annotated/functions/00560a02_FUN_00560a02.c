
/* ==== FUN_00560a02 @ 00560a02 ==== 
 * signature: uint __thiscall FUN_00560a02(void * this, uint param_1)
 * body: 00560a02-00560a38
 */

uint __thiscall FUN_00560a02(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_005c8378 < 2) {
    uVar1 = (byte)PTR_DAT_005c8384[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0055c336(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


