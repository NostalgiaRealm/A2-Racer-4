
/* ==== FUN_004d1410 @ 004d1410 ==== 
 * signature: undefined4 * __thiscall FUN_004d1410(void * this, undefined4 param_1, undefined1 param_2, undefined4 * param_3, uint param_4, undefined4 param_5)
 * body: 004d1410-004d1557
 */

/* WARNING: Removing unreachable block (ram,0x004d145e) */

undefined4 * __thiscall
FUN_004d1410(void *this,undefined4 param_1,undefined1 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = param_4;
  puVar6 = param_3;
  pcStack_8 = FUN_0056fab8;
  local_c = ExceptionList;
  local_4 = 0;
  puVar8 = (undefined4 *)0x0;
  uVar9 = 0;
  uVar10 = 0;
  uVar7 = param_2;
  if (&stack0xffffffcc == &param_2) {
    ExceptionList = &local_c;
    FUN_0040f800(&stack0xffffffcc,param_4,0xffffffff);
    FUN_0040f800(&stack0xffffffcc,0,0);
    puVar6 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = param_3;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        ExceptionList = &local_c;
        FUN_004028f0(&stack0xffffffcc,'\x01');
        puVar8 = (undefined4 *)&DAT_0057629c;
        if (puVar6 != (undefined4 *)0x0) {
          puVar8 = puVar6;
        }
        *(char *)((int)puVar8 + -1) = *(char *)((int)puVar8 + -1) + '\x01';
        uVar9 = param_4;
        uVar10 = param_5;
        goto LAB_004d150b;
      }
    }
    ExceptionList = &local_c;
    uVar4 = FUN_00402a00(&stack0xffffffcc,param_4,'\x01');
    if ((char)uVar4 != '\0') {
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = puVar8;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_004029e0(&stack0xffffffcc,uVar2);
      puVar6 = param_3;
    }
  }
LAB_004d150b:
  FUN_004d1560(this,param_1,uVar7,puVar8,uVar9,uVar10);
  *(undefined ***)this = &PTR_FUN_005777b8;
  if (puVar6 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar6 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)((int)puVar6 + -1));
    }
    else {
      *(char *)((int)puVar6 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


