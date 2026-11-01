
/* ==== FUN_10006a20 @ 10006a20 ==== 
 * signature: DWORD __cdecl FUN_10006a20(uint param_1, LONG param_2, DWORD param_3)
 * body: 10006a20-10006aa1
 */

DWORD __cdecl FUN_10006a20(uint param_1,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    DVar3 = FUN_10006ab0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


