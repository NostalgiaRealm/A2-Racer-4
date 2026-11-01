
/* ==== FUN_0050bd80 @ 0050bd80 ==== 
 * signature: undefined __stdcall FUN_0050bd80(int param_1, void * param_2, undefined4 param_3, undefined4 param_4)
 * body: 0050bd80-0050be1f
 */

void FUN_0050bd80(int param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  void *this;
  float fVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  do {
    this = *(void **)(param_1 + 8);
    fVar2 = *(float *)((int)this + 8);
    if ((double)CONCAT44(param_4,param_3) - *(double *)(param_1 + 0x18) <= (double)fVar2) break;
    puVar3 = *(undefined4 **)
              ((uint)*(ushort *)((int)this + 0xe) * 0x10 + 0xc + *(int *)((int)this + 4));
    FUN_0050e2c0(this,puVar3[1]);
    puVar3[1] = 0xffff;
    *(double *)(param_1 + 0x10) = (double)fVar2;
    dVar1 = (double)(fVar2 + (float)*(double *)(param_1 + 0x18));
    uStack_c = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_10 = SUB84(dVar1,0);
    FUN_0050c000(param_2,local_10,uStack_c);
    (**(code **)*puVar3)(param_2);
  } while (*(int *)(*(int *)(param_1 + 4) + 4) != 1);
  FUN_0050c000(param_2,param_3,param_4);
  return;
}


