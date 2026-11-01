
/* ==== xvga_file_exist @ 10001028 ==== 
 * signature: undefined __cdecl xvga_file_exist(byte * param_1)
 * body: 10001028-1000102c
 * thunk to: FUN_10001a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_file_exist(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  undefined **ppuStack_c;
  int iStack_8;
  
                    /* 0x1028  2  xvga_file_exist */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
LAB_10001b01:
  iStack_8 = 0x10001b0e;
  __chkesp();
  return;
}


