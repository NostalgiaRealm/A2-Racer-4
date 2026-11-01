
/* ==== FUN_004f1050 @ 004f1050 ==== 
 * signature: undefined __thiscall FUN_004f1050(void * this, undefined1 * param_1)
 * body: 004f1050-004f119a
 */

/* WARNING: Removing unreachable block (ram,0x004f1091) */

void __thiscall FUN_004f1050(void *this,undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004edcf0(local_34);
  local_4 = 0;
  uVar2 = *(uint *)(param_1 + 8);
  if (local_34 == param_1) {
    FUN_0040f800(local_34,uVar2,0xffffffff);
    FUN_0040f800(local_34,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(local_34,'\x01');
        local_30 = *(undefined4 **)(param_1 + 4);
        if (local_30 == (undefined4 *)0x0) {
          local_30 = (undefined4 *)&DAT_0057629c;
        }
        local_2c = *(undefined4 *)(param_1 + 8);
        local_28 = *(undefined4 *)(param_1 + 0xc);
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004f1141;
      }
    }
    uVar4 = FUN_00402a00(local_34,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = local_30;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(local_34,uVar2);
    }
  }
LAB_004f1141:
  FUN_004f1390(*(void **)((int)this + 8),*(undefined4 **)((int)*(void **)((int)this + 8) + 8),1,
               local_34);
  if (local_30 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_30 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_30 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_30 + -1));
  }
  ExceptionList = local_c;
  return;
}


