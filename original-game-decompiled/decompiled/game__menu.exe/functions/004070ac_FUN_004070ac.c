
/* ==== FUN_004070ac @ 004070ac ==== 
 * signature: undefined __register FUN_004070ac(LPCVOID param_1, SIZE_T param_2, UINT param_3)
 * body: 004070ac-004070c6
 */

void FUN_004070ac(LPCVOID param_1,SIZE_T param_2,UINT param_3)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalReAlloc(pvVar1,param_2,param_3);
  GlobalLock(pvVar1);
  return;
}


