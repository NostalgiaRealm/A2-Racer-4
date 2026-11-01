
/* ==== FUN_00553340 @ 00553340 ==== 
 * signature: undefined2 __fastcall FUN_00553340(int * param_1)
 * body: 00553340-00553363
 */

undefined2 __fastcall FUN_00553340(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = *(uint *)param_1[7];
  if ((uVar1 != 0) && (uVar1 < uVar1 + *(int *)param_1[0xb] * 2)) {
    puVar3 = (undefined2 *)Gninc((int)param_1);
    return *puVar3;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  return uVar2;
}


