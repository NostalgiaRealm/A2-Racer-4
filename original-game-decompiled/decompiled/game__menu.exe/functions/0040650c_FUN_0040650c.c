
/* ==== FUN_0040650c @ 0040650c ==== 
 * signature: undefined __register FUN_0040650c(void)
 * body: 0040650c-0040655a
 */

void FUN_0040650c(void)

{
  HLOCAL lpTlsValue;
  
  if ((int)_tls_index < 0) {
    FUN_00403c34(0xe2);
  }
  lpTlsValue = LocalAlloc(0x40,0x10);
  if (lpTlsValue == (HLOCAL)0x0) {
    FUN_00403c34(0xe2);
  }
  else {
    TlsSetValue(_tls_index,lpTlsValue);
  }
  DAT_004ac4e4 = lpTlsValue;
  return;
}


