
/* ==== FUN_004069b4 @ 004069b4 ==== 
 * signature: undefined __register FUN_004069b4(LPCVOID param_1)
 * body: 004069b4-004069c6
 */

void FUN_004069b4(LPCVOID param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(param_1);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}


