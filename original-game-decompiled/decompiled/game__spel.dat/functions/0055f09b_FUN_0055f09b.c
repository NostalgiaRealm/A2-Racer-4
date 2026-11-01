
/* ==== FUN_0055f09b @ 0055f09b ==== 
 * signature: undefined __cdecl FUN_0055f09b(int param_1, int * param_2)
 * body: 0055f09b-0055f0d7
 */

void __cdecl FUN_0055f09b(int param_1,int *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      FUN_0055a5de(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    FUN_0055a5de(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}


