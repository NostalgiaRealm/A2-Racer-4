
/* ==== FUN_004d4350 @ 004d4350 ==== 
 * signature: int __fastcall FUN_004d4350(int * param_1)
 * body: 004d4350-004d4364
 */

int __fastcall FUN_004d4350(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    *param_1 = DAT_0074dafc;
  }
  return *param_1;
}


