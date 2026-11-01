
/* ==== FUN_00560f35 @ 00560f35 ==== 
 * signature: int __cdecl FUN_00560f35(int param_1)
 * body: 00560f35-00560f7e
 */

int __cdecl FUN_00560f35(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_0074dd4c = 1;
                    /* WARNING: Could not recover jumptable at 0x00560f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_0074dd4c = 1;
                    /* WARNING: Could not recover jumptable at 0x00560f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0074dcf4;
  }
  DAT_0074dd4c = (uint)bVar2;
  return param_1;
}


