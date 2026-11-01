
/* ==== FUN_00430ea0 @ 00430ea0 ==== 
 * signature: undefined __fastcall FUN_00430ea0(int * param_1)
 * body: 00430ea0-00431134
 */

void __fastcall FUN_00430ea0(int *param_1)

{
  void *this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = FUN_004a80f0(*param_1 * 0xf0 + DAT_00715e50);
  uVar4 = uVar1 >> 8 & 0xff;
  uVar2 = uVar1 >> 0x18;
  uVar5 = uVar1 & 0xff;
  uVar1 = uVar1 >> 0x10 & 0xff;
  this = (void *)(*param_1 * 0xf0 + DAT_00715e50);
  if ((*(byte *)((int)this + 0x1c) & 8) == 0) {
    if ((char)param_1[10] == '\x01') {
      FUN_004a6800(0x7128b0);
      lVar6 = __ftol();
      uVar2 = (uint)lVar6;
      if (0xfe < (int)uVar2) {
        uVar2 = 0xff;
        FUN_0042a7f0(*param_1);
      }
      uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
      goto LAB_0043110d;
    }
  }
  else if ((char)param_1[10] == '\x01') {
    if (uVar2 < 0x81) {
      if (uVar2 < 0x80) {
        FUN_004a6800(0x7128b0);
        lVar6 = __ftol();
        uVar2 = (uint)lVar6;
        if (0x80 < (int)uVar2) goto LAB_00430f6c;
      }
    }
    else {
      FUN_004a6800(0x7128b0);
      lVar6 = __ftol();
      uVar2 = (uint)lVar6;
      if ((int)uVar2 < 0x80) {
LAB_00430f6c:
        uVar2 = 0x80;
      }
    }
    uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
    goto LAB_0043110d;
  }
  iVar3 = FUN_004a8600(this,4);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600((void *)(*param_1 * 0xf0 + DAT_00715e50),5);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600((void *)(*param_1 * 0xf0 + DAT_00715e50),6);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600((void *)(*param_1 * 0xf0 + DAT_00715e50),7);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  if ((float)param_1[0xb] <= 0.0) {
    return;
  }
  *(undefined4 *)(*param_1 * 0xf0 + 0x40 + DAT_00715e50) = 0xffffffff;
  FUN_004a6800(0x7128b0);
  lVar6 = __ftol();
  uVar2 = (uint)lVar6;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
LAB_0043110d:
  FUN_004a80e0((void *)(*param_1 * 0xf0 + DAT_00715e50),uVar5);
  FUN_00431140(param_1,uVar2);
  return;
}


