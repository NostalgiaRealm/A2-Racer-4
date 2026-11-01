
/* ==== FUN_004f5c60 @ 004f5c60 ==== 
 * signature: undefined __fastcall FUN_004f5c60(int * param_1)
 * body: 004f5c60-004f5ca8
 */

void __fastcall FUN_004f5c60(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while ((puVar2 = puVar1, puVar2 != (undefined4 *)0x0 &&
         ((puVar1 = (undefined4 *)*puVar2, *(short *)((int)param_1 + 0x12) == 0 ||
          (puVar2 != (undefined4 *)*param_1))))) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar2);
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


