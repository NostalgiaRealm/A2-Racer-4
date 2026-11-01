
/* ==== FUN_004dd630 @ 004dd630 ==== 
 * signature: undefined4 * __thiscall FUN_004dd630(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004dd630-004dd7c4
 */

undefined4 * __thiscall
FUN_004dd630(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 *this_00;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570ccc;
  local_c = ExceptionList;
  this_00 = (undefined1 *)((int)this + 0xc);
  ExceptionList = &local_c;
  *this_00 = (undefined1)param_4;
  FUN_004028f0(this_00,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = s__none_005b715c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(this_00,(undefined4 *)s__none_005b715c,~uVar5 - 1);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x3b;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((undefined4 *)((int)this + 0x28));
  *(undefined ***)this = &PTR_FUN_0057797c;
  *(undefined1 *)((int)this + 0x3c) = 0;
  local_4 = 1;
  FUN_004d9f00((undefined4 *)((int)this + 0x40));
  local_4._0_1_ = 2;
  FUN_004d9f00((undefined4 *)((int)this + 0x54));
  *(undefined1 *)((int)this + 0x6c) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)((int)this + 0x68) = &PTR_FUN_00577978;
  local_4._0_1_ = 4;
  if ((*(int *)((int)this + 0x70) == 0) ||
     ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x70) >> 2) < 10)) {
    puVar3 = operator_new(0x28);
    puVar2 = *(undefined4 **)((int)this + 0x74);
    puVar7 = puVar3;
    for (puVar6 = *(undefined4 **)((int)this + 0x70); puVar6 != puVar2; puVar6 = puVar6 + 1) {
      FUN_004d2770(puVar7,puVar6);
      puVar7 = puVar7 + 1;
    }
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)this + 0x70));
    *(undefined4 **)((int)this + 0x78) = puVar3 + 10;
    iVar4 = FUN_00492480((int)this + 0x6c);
    *(undefined4 **)((int)this + 0x70) = puVar3;
    *(undefined4 **)((int)this + 0x74) = puVar3 + iVar4;
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined ***)this = &PTR_FUN_00577930;
  FUN_004dc410(this,param_1,param_2,param_3,param_4);
  FUN_004da320((void *)((int)this + 0x40),param_1,param_2,this);
  FUN_004ddb10((void *)((int)this + 0x68),param_1);
  ExceptionList = local_c;
  return this;
}


