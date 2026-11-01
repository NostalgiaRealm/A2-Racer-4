
/* ==== FUN_0051a050 @ 0051a050 ==== 
 * signature: int __cdecl FUN_0051a050(int param_1)
 * body: 0051a050-0051a098
 */

int __cdecl FUN_0051a050(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_1) {
    if (param_1 < DAT_0074c044) {
      return DAT_0074c048 + DAT_0074c03c * param_1 * 8;
    }
    iVar2 = param_1 - DAT_0074c044;
    iVar1 = FUN_00514af0(DAT_0074c6ec);
    if (iVar2 < iVar1) {
      return DAT_0074c6ec[iVar2 + 1];
    }
  }
  return 0;
}


