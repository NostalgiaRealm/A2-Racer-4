
/* ==== FUN_004a00b0 @ 004a00b0 ==== 
 * signature: undefined __cdecl FUN_004a00b0(int param_1, int param_2, int param_3)
 * body: 004a00b0-004a00ff
 */

void __cdecl FUN_004a00b0(int param_1,int param_2,int param_3)

{
  CHAR *pCVar1;
  CHAR local_100 [256];
  
  if ((param_1 < param_2) || (param_3 < param_1)) {
    pCVar1 = local_100;
    FUN_005587a3(pCVar1,(byte *)s_Value_out_of_range_in_File___s_L_005aef9c);
    FUN_004a0140(local_100,(int)pCVar1);
  }
  return;
}


