
/* ==== FUN_005626b9 @ 005626b9 ==== 
 * signature: undefined4 * __stdcall FUN_005626b9(void)
 * body: 005626b9-00562769
 */

undefined4 * FUN_005626b9(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00750084 == DAT_00750074) {
    pvVar2 = HeapReAlloc(DAT_0075008c,0,DAT_00750088,(DAT_00750074 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00750074 = DAT_00750074 + 0x10;
    DAT_00750088 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00750088 + DAT_00750084 * 0x14);
  pvVar2 = HeapAlloc(DAT_0075008c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00750084 = DAT_00750084 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0075008c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


