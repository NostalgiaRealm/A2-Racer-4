
/* ==== FUN_00439a7c @ 00439a7c ==== 
 * signature: int __register FUN_00439a7c(undefined4 param_1)
 * body: 00439a7c-00439ab5
 */

int FUN_00439a7c(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_0044686c = 0;
  DAT_00446870 = 0;
  lParam = 0;
  lpfn = FUN_00439a18;
  DAT_00446868 = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_0044686c != 0) {
    return DAT_0044686c;
  }
  return DAT_00446870;
}


