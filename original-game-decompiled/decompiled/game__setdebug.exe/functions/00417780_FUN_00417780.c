
/* ==== FUN_00417780 @ 00417780 ==== 
 * signature: undefined __register FUN_00417780(void)
 * body: 00417780-0041781b
 */

void FUN_00417780(void)

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
  pcStack_114 = thunk_FUN_00403434;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      FUN_00403be8((int *)&local_108,local_104,0x100);
      piVar2 = FUN_0040a938((int *)&DAT_0040d8f0,'\x01',local_108);
      FUN_0040346c(piVar2);
      goto LAB_00417803;
    }
  }
  FUN_0041772c();
LAB_00417803:
  *in_FS_OFFSET = uStack_118;
  pcStack_110 = FUN_00417823;
  pcStack_114 = (code *)0x41781b;
  FUN_004039b8((int *)&local_108);
  return;
}


