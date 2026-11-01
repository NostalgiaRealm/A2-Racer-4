
/* ==== FUN_00427d86 @ 00427d86 ==== 
 * signature: undefined __cdecl FUN_00427d86(float * param_1, uint param_2, float param_3)
 * body: 00427d86-00427dc9
 */

void __cdecl FUN_00427d86(float *param_1,uint param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40(param_2);
  if (iVar1 != 0) {
    *param_1 = param_3 + *param_1;
    iVar1 = FUN_004c5e40(param_2);
    while (iVar1 != 0) {
      iVar1 = FUN_004c5e40(param_2);
    }
  }
  return;
}


