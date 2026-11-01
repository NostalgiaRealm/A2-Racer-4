
/* ==== FUN_00403410 @ 00403410 ==== 
 * signature: int __cdecl FUN_00403410(int param_1)
 * body: 00403410-00403459
 */

int __cdecl FUN_00403410(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004080b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040342a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004080b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040343f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004080d8;
  }
  DAT_004080b0 = (uint)bVar2;
  return param_1;
}


