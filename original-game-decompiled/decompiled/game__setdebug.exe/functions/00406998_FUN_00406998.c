
/* ==== FUN_00406998 @ 00406998 ==== 
 * signature: undefined __register FUN_00406998(LPCVOID param_1, SIZE_T param_2, UINT param_3)
 * body: 00406998-004069b2
 */

void FUN_00406998(LPCVOID param_1,SIZE_T param_2,UINT param_3)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalReAlloc(pvVar1,param_2,param_3);
  GlobalLock(pvVar1);
  return;
}


