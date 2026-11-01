
/* ==== FUN_0055ac61 @ 0055ac61 ==== 
 * signature: uint __thiscall FUN_0055ac61(void * this, int param_1)
 * body: 0055ac61-0055ac88
 */

uint __thiscall FUN_0055ac61(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_005c8378) {
    uVar1 = FUN_0055c336(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_005c8384[param_1 * 2] & 8;
}


