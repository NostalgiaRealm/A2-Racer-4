
/* ==== FUN_00565134 @ 00565134 ==== 
 * signature: undefined __cdecl FUN_00565134(byte * param_1)
 * body: 00565134-00565199
 */

void __cdecl FUN_00565134(byte *param_1)

{
  int iVar1;
  undefined *extraout_ECX;
  undefined4 uVar2;
  undefined *this;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    this = &DAT_0057a400;
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 != 0) goto LAB_00565190;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_0074dfd4)(DAT_0074dfd0,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
  this = extraout_ECX;
LAB_00565190:
  FUN_005592b2(this,param_1);
  return;
}


