
/* ==== FUN_004070c8 @ 004070c8 ==== 
 * signature: undefined __register FUN_004070c8(LPCVOID param_1)
 * body: 004070c8-004070da
 */

void FUN_004070c8(LPCVOID param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(param_1);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}


