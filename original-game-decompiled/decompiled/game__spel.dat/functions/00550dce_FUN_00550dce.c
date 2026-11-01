
/* ==== FUN_00550dce @ 00550dce ==== 
 * signature: undefined1 * __thiscall FUN_00550dce(void * this, undefined1 * param_1)
 * body: 00550dce-00550e03
 */

undefined1 * __thiscall FUN_00550dce(void *this,undefined1 *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = *(short **)((int)this + 0x10);
  *param_1 = param_1._3_1_;
  FUN_00553734(param_1,'\0');
  uVar2 = FUN_0055cf4d(psVar1);
  FUN_0055349f(param_1,psVar1,uVar2);
  return param_1;
}


