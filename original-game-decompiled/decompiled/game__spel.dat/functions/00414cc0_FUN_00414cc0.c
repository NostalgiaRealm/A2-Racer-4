
/* ==== FUN_00414cc0 @ 00414cc0 ==== 
 * signature: undefined __cdecl FUN_00414cc0(char * param_1)
 * body: 00414cc0-00414d5b
 */

void __cdecl FUN_00414cc0(char *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00414910(param_1);
  fVar3 = FUN_004a6800(0x7128b0);
  iVar2 = DAT_00715e50;
  *(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38) =
       (float)((float10)*(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38) - fVar3);
  pfVar1 = (float *)((&DAT_005d1ba8)[(int)param_1 * 0xe] * 0xf0 + 0xcc + iVar2);
  fVar3 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)((&DAT_005d1ba8)[(int)param_1 * 0xe] * 0xf0 + 0xcc +
                                              DAT_00715e50) * (float10)3.0);
  *(undefined4 *)((&DAT_005d1ba8)[(int)param_1 * 0xe] * 0xf0 + 0x60 + DAT_00715e50) = 0;
  return;
}


