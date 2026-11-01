
/* ==== FUN_00406988 @ 00406988 ==== 
 * signature: undefined __register FUN_00406988(UINT param_1, SIZE_T param_2)
 * body: 00406988-00406995
 */

void FUN_00406988(UINT param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(param_1,param_2);
  GlobalLock(hMem);
  return;
}


