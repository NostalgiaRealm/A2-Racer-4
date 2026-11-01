
/* ==== FUN_0040d9d0 @ 0040d9d0 ==== 
 * signature: undefined4 __cdecl FUN_0040d9d0(int param_1, undefined4 param_2)
 * body: 0040d9d0-0040da58
 */

uint __cdecl FUN_0040d9d0(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = in_EAX & 0xffffff00;
  iVar3 = 6;
  do {
    uVar2 = DAT_006fba58;
    iVar4 = iVar3 * 0x294;
    if ((&DAT_005ce9e8)[iVar3 * 0xa5] == -1) {
      (&DAT_005ce9e8)[iVar3 * 0xa5] = param_1;
      (&DAT_005ce9ec)[iVar3 * 0xa5] = 0x13;
      *(undefined4 *)(&DAT_005cea34 + iVar4) = uVar2;
      (&DAT_005cea44)[iVar3 * 0xa5] = param_2;
      *(undefined4 *)(&DAT_005cea68 + iVar4) = 1;
      this = (void *)FUN_00406eb0();
      iVar3 = FUN_00407030(this,param_1);
      iVar3 = FUN_00406e70(this,iVar3);
      uVar2 = FUN_00403140(&DAT_005cea7c + iVar4,iVar3);
      iVar3 = 0x11;
      uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  return uVar1;
}


