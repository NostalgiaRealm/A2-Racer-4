
/* ==== FUN_004d3570 @ 004d3570 ==== 
 * signature: undefined4 * __thiscall FUN_004d3570(void * this, void * param_1, undefined4 * param_2)
 * body: 004d3570-004d3610
 */

undefined4 * __thiscall FUN_004d3570(void *this,void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fd56;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004d88e0(this,param_1);
  local_4 = 0;
  FUN_004d9200((undefined4 *)((int)this + 0xbc));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00577830;
  FUN_004d6730();
  FUN_004d3440(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 0x60);
  if (puVar1 != *(undefined4 **)((int)this + 100)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))((undefined4 *)((int)this + 0xbc));
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 100));
  }
  FUN_004d6730();
  ExceptionList = pvStack_c;
  return this;
}


