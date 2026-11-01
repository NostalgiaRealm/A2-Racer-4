
/* ==== FUN_0050fc60 @ 0050fc60 ==== 
 * signature: uint * __fastcall FUN_0050fc60(uint * param_1)
 * body: 0050fc60-0050fc8e
 */

uint * __fastcall FUN_0050fc60(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    FUN_0050fc50(puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


