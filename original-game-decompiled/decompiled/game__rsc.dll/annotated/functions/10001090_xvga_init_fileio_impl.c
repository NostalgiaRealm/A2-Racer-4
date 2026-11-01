
/* ==== xvga_init_fileio_impl @ 10001090 ==== 
 * signature: undefined __cdecl xvga_init_fileio_impl(LPCSTR param_1, LPCSTR param_2)
 * body: 10001090-1000133e
 * note: ANALYST: Reads IND (u16 count, 24-byte entries) and opens IMG. Sizes come from offset differences. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Reads IND (u16 count, 24-byte entries) and opens IMG. Sizes come from offset
   differences. [confidence: confirmed] [evidence: export thunk jumps here; code read] */

void __cdecl xvga_init_fileio_impl(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_64 [16];
  uint local_24 [5];
  undefined4 local_10;
  int local_c;
  short local_8 [2];
  
  puVar3 = local_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)local_8,2,1,DAT_100313f4);
    if (local_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)local_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (local_c = 0; local_c < _DAT_100313fc; local_c = local_c + 1) {
          FUN_10001fb0((char *)local_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&local_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + local_c * 0x1c),local_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + local_c * 0x1c) = local_10;
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
          for (local_c = 0; local_c < _DAT_100313fc + -1; local_c = local_c + 1) {
            *(int *)(DAT_10031400 + 0x18 + local_c * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (local_c + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + local_c * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + local_c * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + local_c * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  local_8[0] = 0x133b;
  local_8[1] = 0x1000;
  __chkesp();
  return;
}


