
/* ==== FUN_0051e060 @ 0051e060 ==== 
 * signature: undefined __thiscall FUN_0051e060(void * this, byte * param_1, uint * param_2)
 * body: 0051e060-0051e089
 */

void __thiscall FUN_0051e060(void *this,byte *param_1,uint *param_2)

{
  byte *pbVar1;
  
  FUN_0055ae4d(this,param_1,(int *)param_2,(void *)0xa);
  pbVar1 = (byte *)*param_2;
  if ((param_1 < pbVar1) && (pbVar1[-1] == 0x20)) {
    *param_2 = (uint)(pbVar1 + -1);
  }
  return;
}


