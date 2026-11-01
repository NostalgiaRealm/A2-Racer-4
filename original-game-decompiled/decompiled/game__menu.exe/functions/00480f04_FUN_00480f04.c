
/* ==== FUN_00480f04 @ 00480f04 ==== 
 * signature: undefined FUN_00480f04(void)
 * body: 00480f04-00480fc4
 */

uint FUN_00480f04(int param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  
  FUN_00420bd4();
  FUN_00420bd4();
  if (SBORROW4(100,param_1)) {
    thunk_FUN_00402808(100 - param_1);
  }
  FUN_00420be4();
  uVar1 = FUN_00402ad4();
  uVar2 = 100 - uVar1;
  if ((int)uVar2 >> 0x1f != -(uint)(100 < uVar1) - extraout_EDX) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if (100 < (int)uVar2) {
    uVar2 = 100;
  }
  return uVar2;
}


