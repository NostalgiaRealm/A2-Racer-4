
/* ==== FUN_00405fa4 @ 00405fa4 ==== 
 * signature: LPVOID __register FUN_00405fa4(void)
 * body: 00405fa4-00405fe6
 */

LPVOID FUN_00405fa4(void)

{
  LPVOID pvVar1;
  int in_FS_OFFSET;
  
  if (DAT_004474c8 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  FUN_00405f54();
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  return DAT_004474dc;
}


