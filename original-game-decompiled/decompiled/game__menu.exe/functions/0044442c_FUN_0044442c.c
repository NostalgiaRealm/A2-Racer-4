
/* ==== FUN_0044442c @ 0044442c ==== 
 * signature: int __register FUN_0044442c(undefined4 param_1)
 * body: 0044442c-00444465
 */

int FUN_0044442c(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_004aa940 = 0;
  DAT_004aa944 = 0;
  lParam = 0;
  lpfn = FUN_004443c8;
  DAT_004aa93c = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_004aa940 != 0) {
    return DAT_004aa940;
  }
  return DAT_004aa944;
}


