
/* ==== FUN_00419828 @ 00419828 ==== 
 * signature: undefined __register FUN_00419828(void)
 * body: 00419828-004198c3
 */

void FUN_00419828(void)

{
  DWORD DVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  code *pcStack_114;
  code *pcStack_110;
  undefined4 *local_108;
  CHAR local_104 [256];
  
  pcStack_110 = (code *)&stack0xfffffffc;
  local_108 = (undefined4 *)0x0;
  pcStack_114 = thunk_FUN_004036bc;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      FUN_00403e8c((int *)&local_108,local_104,0x100);
      piVar2 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',local_108);
      FUN_004036f4(piVar2);
      goto LAB_004198ab;
    }
  }
  FUN_004197d4();
LAB_004198ab:
  *in_FS_OFFSET = uStack_118;
  pcStack_110 = FUN_004198cb;
  pcStack_114 = (code *)0x4198c3;
  FUN_00403c5c((int *)&local_108);
  return;
}


