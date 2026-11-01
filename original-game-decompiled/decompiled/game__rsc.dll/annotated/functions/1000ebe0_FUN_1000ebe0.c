
/* ==== FUN_1000ebe0 @ 1000ebe0 ==== 
 * signature: int __cdecl FUN_1000ebe0(uint param_1, int param_2)
 * body: 1000ebe0-1000ec52
 */

int __cdecl FUN_1000ebe0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    iVar2 = FUN_1000ec60(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}


