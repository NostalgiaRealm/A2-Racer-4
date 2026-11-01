
/* ==== FUN_10009810 @ 10009810 ==== 
 * signature: undefined4 __stdcall FUN_10009810(void)
 * body: 10009810-10009883
 */

undefined4 FUN_10009810(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_100073f0(9);
  iVar1 = FUN_1000af20();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_10007490(9);
  BVar2 = HeapValidate(DAT_10031a8c,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10006f30();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_10006f20();
      *puVar5 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}


