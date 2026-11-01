
/* ==== FUN_00501140 @ 00501140 ==== 
 * signature: undefined __fastcall FUN_00501140(undefined4 * param_1)
 * body: 00501140-0050116b
 */

void __fastcall FUN_00501140(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00578718;
  if (((param_1[2] & 0xff000000) == 0) && ((LPVOID)param_1[3] != (LPVOID)0x0)) {
    FUN_00559d4e((LPVOID)param_1[3]);
    param_1[3] = 0;
  }
  return;
}


