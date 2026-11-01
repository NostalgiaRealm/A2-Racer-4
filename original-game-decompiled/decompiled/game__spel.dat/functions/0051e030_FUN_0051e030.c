
/* ==== FUN_0051e030 @ 0051e030 ==== 
 * signature: undefined __thiscall FUN_0051e030(void * this, byte * param_1, uint * param_2)
 * body: 0051e030-0051e057
 */

void __thiscall FUN_0051e030(void *this,byte *param_1,uint *param_2)

{
  byte *pbVar1;
  
  FUN_0055adb3(this,param_1,(int *)param_2);
  pbVar1 = (byte *)*param_2;
  if ((param_1 < pbVar1) && (pbVar1[-1] == 0x20)) {
    *param_2 = (uint)(pbVar1 + -1);
  }
  return;
}


