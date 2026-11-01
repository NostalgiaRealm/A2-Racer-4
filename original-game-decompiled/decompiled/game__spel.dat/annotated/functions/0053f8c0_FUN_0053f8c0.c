
/* ==== FUN_0053f8c0 @ 0053f8c0 ==== 
 * signature: undefined4 __fastcall FUN_0053f8c0(byte * param_1)
 * body: 0053f8c0-0053f9ce
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0053f8c0(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *this;
  byte *pbVar5;
  undefined4 local_10;
  int iStack_8;
  undefined4 uStack_4;
  
  uVar4 = 0;
  local_10 = 0;
  iVar3 = *(ushort *)(param_1 + 0x4e) - 1;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x20);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      this = (int *)(*(short *)(iVar1 + 0x18) + iVar1);
      iVar1 = iVar2;
      uVar4 = local_10;
      if ((this[5] & 0x3000U) == 0) {
        pbVar5 = *(byte **)(this[10] + 0xa4);
        if (pbVar5 == param_1) {
          pbVar5 = *(byte **)(this[0x11] + 0xa4);
        }
        if ((*pbVar5 & 0xc) == 0) {
          iVar2 = FUN_004f5280((int)pbVar5);
          if (((iVar2 == 0) && (FUN_0053bf10(this), (this[5] & 0xc000U) == 0)) &&
             ((float)this[0x15] < _DAT_0074d63c)) {
            FUN_00502820(this,&uStack_4,&iStack_8,*(int **)(param_1 + 0x1d4),(undefined2 *)0x1);
            FUN_004f5b80(*(int **)(*(int *)(param_1 + 0xc) + 0xb4));
            if (iStack_8 == 1) {
              local_10 = 1;
              FUN_004f47b0((int)pbVar5);
              uVar4 = local_10;
            }
          }
        }
        else if (((*param_1 & 0xc) != 0) && (this != (int *)0x0)) {
          (**(code **)(*this + 0x10))(1);
        }
      }
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar4;
}


