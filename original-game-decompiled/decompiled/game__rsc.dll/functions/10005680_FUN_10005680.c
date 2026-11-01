
/* ==== FUN_10005680 @ 10005680 ==== 
 * signature: undefined4 __cdecl FUN_10005680(uint param_1)
 * body: 10005680-100056f9
 */

undefined4 __cdecl FUN_10005680(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    uVar3 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


