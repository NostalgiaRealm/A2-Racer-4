
/* ==== FUN_00448ff0 @ 00448ff0 ==== 
 * signature: undefined4 * __thiscall FUN_00448ff0(void * this, undefined4 * param_1, void * param_2, undefined4 * param_3)
 * body: 00448ff0-00449046
 */

undefined4 * __thiscall
FUN_00448ff0(void *this,undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_2 + 4);
  puVar1 = operator_new(0xc);
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
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = puVar1;
  return param_1;
}


