
/* ==== FUN_1000a500 @ 1000a500 ==== 
 * signature: undefined4 * __stdcall FUN_1000a500(void)
 * body: 1000a500-1000a60e
 */

undefined4 * FUN_1000a500(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10031a84 == DAT_10031a68) {
    pvVar1 = HeapReAlloc(DAT_10031a8c,0,DAT_10031a88,(DAT_10031a68 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10031a68 = DAT_10031a68 + 0x10;
    DAT_10031a88 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_10031a88 + DAT_10031a84 * 0x14);
  pvVar1 = HeapAlloc(DAT_10031a8c,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_10031a8c,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_10031a84 = DAT_10031a84 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}


