
/* ==== FUN_0040655c @ 0040655c ==== 
 * signature: LPVOID __register FUN_0040655c(void)
 * body: 0040655c-0040659e
 */

LPVOID FUN_0040655c(void)

{
  LPVOID pvVar1;
  int in_FS_OFFSET;
  
  if (DAT_004ac4d0 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  FUN_0040650c();
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  return DAT_004ac4e4;
}


