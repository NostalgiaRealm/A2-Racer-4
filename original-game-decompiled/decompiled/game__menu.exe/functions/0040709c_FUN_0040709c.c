
/* ==== FUN_0040709c @ 0040709c ==== 
 * signature: undefined __register FUN_0040709c(UINT param_1, SIZE_T param_2)
 * body: 0040709c-004070a9
 */

void FUN_0040709c(UINT param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(param_1,param_2);
  GlobalLock(hMem);
  return;
}


