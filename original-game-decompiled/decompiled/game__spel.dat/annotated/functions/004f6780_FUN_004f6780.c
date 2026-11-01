
/* ==== FUN_004f6780 @ 004f6780 ==== 
 * signature: undefined __thiscall FUN_004f6780(void * this, int param_1, undefined4 param_2)
 * body: 004f6780-004f6897
 */

void __thiscall FUN_004f6780(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00572fa3;
  local_c = ExceptionList;
  local_14 = 0;
  local_12 = 0;
  pvVar1 = *(void **)((int)this + 0xc);
  local_10 = 0;
  local_4 = 0;
  local_18 = param_1;
  ExceptionList = &local_c;
  uVar2 = FUN_0050a4e0(param_1);
  uVar2 = FUN_005013d0(pvVar1,&local_18,uVar2);
  local_4 = 0xffffffff;
  FUN_004f65e0((int)&local_18);
  if (uVar2 == 0) {
    piVar3 = operator_new(0xc);
    piVar4 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      *(undefined2 *)(piVar3 + 1) = 0;
      *(undefined2 *)((int)piVar3 + 6) = 0;
      piVar3[2] = 0;
      piVar4 = piVar3;
    }
    *piVar4 = param_1;
    local_4 = 0xffffffff;
    if (*(ushort *)(piVar4 + 1) <= *(ushort *)((int)piVar4 + 6)) {
      FUN_004f6060((ushort *)(piVar4 + 1));
    }
    *(undefined4 *)(piVar4[2] + (uint)*(ushort *)((int)piVar4 + 6) * 4) = param_2;
    *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
    pvVar1 = *(void **)((int)this + 0xc);
    uVar2 = FUN_0050a4e0(*piVar4);
    FUN_00501220(pvVar1,(uint)piVar4,uVar2);
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x2000;
  }
  else {
    if (*(ushort *)(uVar2 + 4) <= *(ushort *)(uVar2 + 6)) {
      FUN_004f6060((ushort *)(uVar2 + 4));
    }
    *(undefined4 *)(*(int *)(uVar2 + 8) + (uint)*(ushort *)(uVar2 + 6) * 4) = param_2;
    *(short *)(uVar2 + 6) = *(short *)(uVar2 + 6) + 1;
  }
  ExceptionList = local_c;
  return;
}


