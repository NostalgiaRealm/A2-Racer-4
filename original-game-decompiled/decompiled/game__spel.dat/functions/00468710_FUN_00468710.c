
/* ==== FUN_00468710 @ 00468710 ==== 
 * signature: undefined __thiscall FUN_00468710(void * this, undefined4 * param_1, void * param_2, undefined1 * param_3)
 * body: 00468710-0046876a
 */

void __thiscall FUN_00468710(void *this,undefined4 *param_1,void *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_2 + 4);
  puVar1 = operator_new(0x18);
  puVar2 = param_2;
  if (param_2 == (void *)0x0) {
    puVar2 = puVar1;
  }
  *puVar1 = puVar2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1[1] = puVar3;
  *(undefined4 **)((int)param_2 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  FUN_00468770((undefined1 *)(puVar1 + 2),param_3);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = puVar1;
  return;
}


