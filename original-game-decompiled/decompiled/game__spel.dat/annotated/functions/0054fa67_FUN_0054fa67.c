
/* ==== FUN_0054fa67 @ 0054fa67 ==== 
 * signature: ushort * __thiscall FUN_0054fa67(void * this, ushort * param_1, ushort * param_2)
 * body: 0054fa67-0054fa93
 */

ushort * __thiscall FUN_0054fa67(void *this,ushort *param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)((int)this + 8);
    do {
      puVar2 = puVar1;
      uVar3 = FUN_0054eb50(this,(uint)*param_1,puVar1);
      this = puVar2;
      *param_1 = (ushort)uVar3;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


