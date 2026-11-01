
/* ==== FUN_00408854 @ 00408854 ==== 
 * signature: DWORD __register FUN_00408854(undefined * param_1, uint param_2, LPWORD param_3)
 * body: 00408854-004088a0
 */

DWORD FUN_00408854(undefined *param_1,uint param_2,LPWORD param_3)

{
  LPCSTR lpFileName;
  HANDLE pvVar1;
  DWORD DVar2;
  LPWIN32_FIND_DATAA lpFindFileData;
  
  *(uint *)(param_3 + 8) = ~param_2 & 0x1e;
  lpFindFileData = (LPWIN32_FIND_DATAA)(param_3 + 0xc);
  lpFileName = FUN_004040a0(param_1);
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  *(HANDLE *)(param_3 + 10) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = FUN_004087f0(param_3);
    if (DVar2 != 0) {
      FUN_004088c8((int)param_3);
    }
  }
  return DVar2;
}


