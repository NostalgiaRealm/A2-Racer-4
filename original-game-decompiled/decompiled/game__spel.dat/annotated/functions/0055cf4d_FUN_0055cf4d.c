
/* ==== FUN_0055cf4d @ 0055cf4d ==== 
 * signature: int __cdecl FUN_0055cf4d(short * param_1)
 * body: 0055cf4d-0055cf69
 */

int __cdecl FUN_0055cf4d(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


