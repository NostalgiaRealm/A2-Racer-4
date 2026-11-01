
/* ==== FUN_00414bd0 @ 00414bd0 ==== 
 * signature: undefined __cdecl FUN_00414bd0(char * param_1)
 * body: 00414bd0-00414bfd
 */

void __cdecl FUN_00414bd0(char *param_1)

{
  float10 fVar1;
  
  FUN_00414910(param_1);
  fVar1 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38) =
       (float)((float10)*(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38) - fVar1);
  return;
}


