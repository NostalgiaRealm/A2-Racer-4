
/* ==== FUN_00472e80 @ 00472e80 ==== 
 * signature: undefined4 * __stdcall FUN_00472e80(int param_1)
 * body: 00472e80-00472fe9
 */

/* WARNING: Removing unreachable block (ram,0x00472ec9) */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00472e80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *this;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b3f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined1 *)FUN_00472920(param_1);
  local_1c._0_1_ = *puVar3;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar2 = *(uint *)(puVar3 + 8);
  if (&local_1c == (undefined4 *)puVar3) {
    FUN_0040f800(&local_1c,uVar2,0xffffffff);
    FUN_0040f800(&local_1c,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(&local_1c,'\x01');
        local_18 = *(undefined4 **)(puVar3 + 4);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)&DAT_0057629c;
        }
        local_14 = *(undefined4 *)(puVar3 + 8);
        local_10 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
        goto LAB_00472f77;
      }
    }
    uVar5 = FUN_00402a00(&local_1c,uVar2,'\x01');
    if ((char)uVar5 != '\0') {
      puVar6 = *(undefined4 **)(puVar3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = local_18;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(&local_1c,uVar2);
    }
  }
LAB_00472f77:
  local_4 = 0;
  this = operator_new(0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = FUN_00472e50(param_1);
    puVar6 = FUN_00472e00(this,&local_1c,uVar5);
  }
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return puVar6;
}


