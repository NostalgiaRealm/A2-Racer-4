
/* ==== FUN_10002850 @ 10002850 ==== 
 * signature: undefined4 __cdecl FUN_10002850(uint param_1)
 * body: 10002850-100028b5
 */

undefined4 __cdecl FUN_10002850(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar3 = *(undefined4 *)((&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
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


