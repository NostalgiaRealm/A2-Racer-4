
/* ==== FUN_004da280 @ 004da280 ==== 
 * signature: int * __cdecl FUN_004da280(int * param_1, int param_2)
 * body: 004da280-004da2ca
 */

int * __cdecl FUN_004da280(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 == *(undefined4 **)(param_2 + 0xc)) {
    return param_1;
  }
  do {
    if (puVar1 != *(undefined4 **)(param_2 + 8)) {
      FUN_004d4cd0(param_1,&DAT_005b7258);
    }
    FUN_004d4120(param_1,(int *)*puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 != *(undefined4 **)(param_2 + 0xc));
  return param_1;
}


