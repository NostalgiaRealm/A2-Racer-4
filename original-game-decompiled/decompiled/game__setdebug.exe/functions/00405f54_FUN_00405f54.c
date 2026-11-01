
/* ==== FUN_00405f54 @ 00405f54 ==== 
 * signature: undefined __register FUN_00405f54(void)
 * body: 00405f54-00405fa2
 */

void FUN_00405f54(void)

{
  HLOCAL lpTlsValue;
  
  if ((int)_tls_index < 0) {
    FUN_00403990(0xe2);
  }
  lpTlsValue = LocalAlloc(0x40,0x10);
  if (lpTlsValue == (HLOCAL)0x0) {
    FUN_00403990(0xe2);
  }
  else {
    TlsSetValue(_tls_index,lpTlsValue);
  }
  DAT_004474dc = lpTlsValue;
  return;
}


