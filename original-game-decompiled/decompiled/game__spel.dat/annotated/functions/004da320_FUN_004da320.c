
/* ==== FUN_004da320 @ 004da320 ==== 
 * signature: undefined __thiscall FUN_004da320(void * this, int * param_1, int param_2, undefined4 * param_3)
 * body: 004da320-004da43b
 */

void __thiscall FUN_004da320(void *this,int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  
  pvVar2 = FUN_004d7470(param_1);
  iVar6 = *(int *)((int)this + 8);
  if ((iVar6 != 0) && (pvVar2 < (void *)(*(int *)((int)this + 0x10) - iVar6 >> 2))) {
    pvVar3 = (void *)0x0;
    if (iVar6 != 0) {
      pvVar3 = (void *)(*(int *)((int)this + 0x10) - iVar6 >> 2);
    }
    if (pvVar3 < pvVar2) {
      pvVar3 = pvVar2;
      if ((int)pvVar2 < 0) {
        pvVar3 = (void *)0x0;
      }
      puVar4 = operator_new((int)pvVar3 * 4);
      puVar1 = *(undefined4 **)((int)this + 0xc);
      puVar8 = puVar4;
      for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar5;
        }
        puVar8 = puVar8 + 1;
      }
      FUN_0054b339(*(LPVOID *)((int)this + 8));
      *(undefined4 **)((int)this + 0x10) = puVar4 + (int)pvVar2;
      if (*(int *)((int)this + 8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
      }
      *(undefined4 **)((int)this + 8) = puVar4;
      *(undefined4 **)((int)this + 0xc) = puVar4 + iVar6;
    }
  }
  puVar1 = param_3;
  iVar6 = 0;
  if (0 < (int)pvVar2) {
    do {
      param_3 = dso_read_item(param_1,param_2,puVar1,(short)iVar6);
      if (*(int *)((int)this + 8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (undefined2)(*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2);
      }
      *(undefined2 *)(param_3 + 9) = uVar7;
      FUN_004a5620((void *)((int)this + 4),*(undefined4 **)((int)this + 0xc),1,&param_3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)pvVar2);
  }
  return;
}


