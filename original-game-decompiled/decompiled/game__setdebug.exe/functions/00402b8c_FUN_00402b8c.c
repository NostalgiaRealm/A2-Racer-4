
/* ==== FUN_00402b8c @ 00402b8c ==== 
 * signature: undefined __register FUN_00402b8c(void)
 * body: 00402b8c-00402bfc;00402c04-00402c22
 */

void FUN_00402b8c(void)

{
  LSTATUS LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  DWORD local_10;
  uint local_c;
  HKEY local_8;
  
  local_c = (uint)DAT_00446000;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Borland\\Delphi\\RTL",0,1,&local_8);
  if (LVar1 == 0) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    local_10 = 4;
    RegQueryValueExA(local_8,"FPUMaskValue",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_c,&local_10);
    *in_FS_OFFSET = uVar2;
    RegCloseKey(local_8);
    return;
  }
  DAT_00446000 = DAT_00446000 & 0xffc0 | (ushort)local_c & 0x3f;
  return;
}


