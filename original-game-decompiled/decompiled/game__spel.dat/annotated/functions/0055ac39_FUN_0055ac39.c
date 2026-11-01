
/* ==== FUN_0055ac39 @ 0055ac39 ==== 
 * signature: uint __thiscall FUN_0055ac39(void * this, int param_1)
 * body: 0055ac39-0055ac60
 */

uint __thiscall FUN_0055ac39(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_005c8378) {
    uVar1 = FUN_0055c336(this,param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_005c8384[param_1 * 2] & 4;
}


