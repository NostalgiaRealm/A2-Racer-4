
/* ==== FUN_10001e00 @ 10001e00 ==== 
 * signature: undefined4 __cdecl FUN_10001e00(int * param_1)
 * body: 10001e00-10001ebd
 */

undefined4 __cdecl FUN_10001e00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_100058f0(param_1);
    FUN_100057b0(param_1);
    iVar2 = FUN_10005680(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_100041a0((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}


