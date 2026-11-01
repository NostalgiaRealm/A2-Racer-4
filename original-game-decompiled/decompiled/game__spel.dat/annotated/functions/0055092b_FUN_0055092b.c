
/* ==== FUN_0055092b @ 0055092b ==== 
 * signature: undefined1 * __thiscall FUN_0055092b(void * this, undefined1 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined1 * param_5)
 * body: 0055092b-0055099b
 */

undefined1 * __thiscall
FUN_0055092b(void *this,undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  uint uVar1;
  short *psVar2;
  
  if (param_4 == 0) {
    psVar2 = *(short **)((int)this + 8);
  }
  else {
    if (param_4 != 1) {
      *param_1 = *param_5;
      FUN_00553734(param_1,'\0');
      FUN_005533c1(param_1,param_5,0,0xffffffff);
      return param_1;
    }
    psVar2 = *(short **)((int)this + 0xc);
  }
  *param_1 = param_1._3_1_;
  FUN_00553734(param_1,'\0');
  uVar1 = FUN_0055cf4d(psVar2);
  FUN_0055349f(param_1,psVar2,uVar1);
  return param_1;
}


