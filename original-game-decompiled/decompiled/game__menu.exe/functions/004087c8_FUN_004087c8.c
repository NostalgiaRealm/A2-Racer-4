
/* ==== FUN_004087c8 @ 004087c8 ==== 
 * signature: DWORD __register FUN_004087c8(undefined * param_1, DWORD param_2)
 * body: 004087c8-004087ef
 */

DWORD FUN_004087c8(undefined *param_1,DWORD param_2)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpFileName = FUN_004040a0(param_1);
  BVar1 = SetFileAttributesA(lpFileName,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  return DVar2;
}


