
/* ==== xvga_src_fopen @ 1000100f ==== 
 * signature: undefined __cdecl xvga_src_fopen(byte * param_1)
 * body: 1000100f-10001013
 * thunk to: FUN_100017c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_src_fopen(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_58 [16];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  short sStack_c;
  int iStack_8;
  
                    /* 0x100f  12  xvga_src_fopen */
  puVar3 = auStack_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    uStack_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + iStack_8 * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + iStack_8 * 0x1c);
        break;
      }
    }
    sStack_c = DAT_100313fc;
    if (iStack_8 == DAT_100313fc) {
      uStack_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      iStack_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  iStack_8 = 0x100018e7;
  __chkesp();
  return;
}


