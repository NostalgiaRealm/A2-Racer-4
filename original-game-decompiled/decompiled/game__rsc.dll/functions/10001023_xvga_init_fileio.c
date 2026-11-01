
/* ==== xvga_init_fileio @ 10001023 ==== 
 * signature: undefined __cdecl xvga_init_fileio(LPCSTR param_1, LPCSTR param_2)
 * body: 10001023-10001027
 * thunk to: FUN_10001090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_init_fileio(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_64 [16];
  uint auStack_24 [5];
  undefined4 uStack_10;
  int iStack_c;
  short asStack_8 [2];
  
                    /* 0x1023  5  xvga_init_fileio */
  puVar3 = auStack_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)asStack_8,2,1,DAT_100313f4);
    if (asStack_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)asStack_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (iStack_c = 0; iStack_c < _DAT_100313fc; iStack_c = iStack_c + 1) {
          FUN_10001fb0((char *)auStack_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&uStack_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + iStack_c * 0x1c),auStack_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + iStack_c * 0x1c) = uStack_10;
          if (((uint)DAT_100313f4[3] & 0x20) != 0) {
            MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
            __chkesp();
            goto LAB_1000132e;
          }
        }
        FUN_10001d70(DAT_100313f4);
        DAT_100313f8 = FUN_100022c0(param_2,"rb");
        if (DAT_100313f8 == 0) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          uVar1 = FUN_10015690(DAT_100313f8);
          DAT_100313f0 = FUN_100155d0(uVar1);
          for (iStack_c = 0; iStack_c < _DAT_100313fc + -1; iStack_c = iStack_c + 1) {
            *(int *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (iStack_c + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  asStack_8[0] = 0x133b;
  asStack_8[1] = 0x1000;
  __chkesp();
  return;
}


