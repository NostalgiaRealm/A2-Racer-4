
/* ==== FUN_100155d0 @ 100155d0 ==== 
 * signature: DWORD __cdecl FUN_100155d0(uint param_1)
 * body: 100155d0-1001568b
 */

DWORD __cdecl FUN_100155d0(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD local_8;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    DVar3 = FUN_10006ab0(param_1,0,1);
    if (DVar3 == 0xffffffff) {
      local_8 = 0xffffffff;
    }
    else {
      local_8 = FUN_10006ab0(param_1,0,2);
      if (DVar3 != local_8) {
        FUN_10006ab0(param_1,DVar3,0);
      }
    }
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    local_8 = 0xffffffff;
  }
  return local_8;
}


