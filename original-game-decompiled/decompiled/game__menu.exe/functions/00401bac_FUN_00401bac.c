
/* ==== FUN_00401bac @ 00401bac ==== 
 * signature: undefined __register FUN_00401bac(void)
 * body: 00401bac-00401c81;00401c89-00401c8b
 */

void FUN_00401bac(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_004ac430 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  DAT_004ac430 = 0;
  LocalFree(DAT_004ac490);
  DAT_004ac490 = (HLOCAL)0x0;
  for (puVar1 = DAT_004ac458; (undefined4 **)puVar1 != &DAT_004ac458; puVar1 = (undefined4 *)*puVar1
      ) {
    VirtualFree((LPVOID)puVar1[2],0,0x8000);
  }
  FUN_004014ac(0x4ac458);
  FUN_004014ac(0x4ac468);
  FUN_004014ac(0x4ac494);
  puVar1 = DAT_004ac450;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_004ac450 = (undefined4 *)*puVar1;
    LocalFree(puVar1);
    puVar1 = DAT_004ac450;
  }
  DAT_004ac450 = puVar1;
  *in_FS_OFFSET = uStack_14;
  if (DAT_004ac049 != '\0') {
    uStack_14 = 0x401c77;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  uStack_14 = 0x401c81;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  return;
}


