
/* ==== FUN_00550e04 @ 00550e04 ==== 
 * signature: undefined1 * __thiscall FUN_00550e04(void * this, undefined1 * param_1)
 * body: 00550e04-00550e39
 */

undefined1 * __thiscall FUN_00550e04(void *this,undefined1 *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = *(short **)((int)this + 0x14);
  *param_1 = param_1._3_1_;
  FUN_00553734(param_1,'\0');
  uVar2 = FUN_0055cf4d(psVar1);
  FUN_0055349f(param_1,psVar1,uVar2);
  return param_1;
}


