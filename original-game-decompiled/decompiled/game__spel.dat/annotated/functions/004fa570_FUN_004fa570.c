
/* ==== FUN_004fa570 @ 004fa570 ==== 
 * signature: undefined __thiscall FUN_004fa570(void * this, undefined8 * param_1)
 * body: 004fa570-004fa5a0
 */

void __thiscall FUN_004fa570(void *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  return;
}


