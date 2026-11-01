
/* ==== FUN_1000b700 @ 1000b700 ==== 
 * signature: DWORD __cdecl FUN_1000b700(uint param_1)
 * body: 1000b700-1000b7d1
 */

DWORD __cdecl FUN_1000b700(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  if ((DAT_10031bfc <= param_1) ||
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    return 0xffffffff;
  }
  FUN_100029d0(param_1);
  if ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_10002850(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1000b7bf;
    pDVar3 = FUN_10006f30();
    *pDVar3 = local_8;
  }
  puVar1 = (undefined4 *)FUN_10006f20();
  *puVar1 = 9;
  local_8 = 0xffffffff;
LAB_1000b7bf:
  __unlock_fhandle(param_1);
  return local_8;
}


