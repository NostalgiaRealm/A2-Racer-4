
/* ==== FUN_00407e50 @ 00407e50 ==== 
 * signature: DWORD __register FUN_00407e50(undefined * param_1, DWORD param_2)
 * body: 00407e50-00407e77
 */

DWORD FUN_00407e50(undefined *param_1,DWORD param_2)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpFileName = FUN_00403dfc(param_1);
  BVar1 = SetFileAttributesA(lpFileName,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  return DVar2;
}


