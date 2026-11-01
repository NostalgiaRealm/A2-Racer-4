
/* ==== FUN_004041d2 @ 004041d2 ==== 
 * signature: undefined4 * __stdcall FUN_004041d2(void)
 * body: 004041d2-00404282
 */

undefined4 * FUN_004041d2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00408100 == DAT_004080f0) {
    pvVar2 = HeapReAlloc(DAT_00409344,0,DAT_00408104,(DAT_004080f0 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004080f0 = DAT_004080f0 + 0x10;
    DAT_00408104 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00408104 + DAT_00408100 * 0x14);
  pvVar2 = HeapAlloc(DAT_00409344,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00408100 = DAT_00408100 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00409344,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


