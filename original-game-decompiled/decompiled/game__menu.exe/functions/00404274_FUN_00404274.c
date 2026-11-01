
/* ==== FUN_00404274 @ 00404274 ==== 
 * signature: undefined __register FUN_00404274(undefined * param_1, undefined1 * param_2)
 * body: 00404274-0040427a;0040427c-0040429a
 */

void FUN_00404274(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 != (undefined1 *)0x0) {
    iVar2 = *(int *)(param_2 + -4);
    iVar3 = -iVar2;
  }
  puVar1 = FUN_00405d1b(param_1,iVar3);
  FUN_00405cb0(puVar1,param_2,iVar2);
  return;
}


