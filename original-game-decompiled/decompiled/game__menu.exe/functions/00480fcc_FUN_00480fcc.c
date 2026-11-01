
/* ==== FUN_00480fcc @ 00480fcc ==== 
 * signature: uint __register FUN_00480fcc(int param_1)
 * body: 00480fcc-0048108a
 */

uint FUN_00480fcc(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  
  FUN_00420bd4();
  FUN_00420bd4();
  if (SBORROW4(100,param_1)) {
    thunk_FUN_00402808(100 - param_1);
  }
  FUN_00420be4();
  iVar1 = FUN_00402ad4();
  uVar2 = -iVar1;
  iVar3 = extraout_EDX + (uint)(iVar1 != 0);
  iVar1 = -iVar3;
  if (SBORROW4(0,iVar3)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX_00;
  }
  if ((int)uVar2 >> 0x1f != iVar1) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (-100 < (int)uVar2) {
    uVar2 = 0xffffff9c;
  }
  if ((int)uVar2 < -4000) {
    uVar2 = 0xfffff060;
  }
  return uVar2;
}


